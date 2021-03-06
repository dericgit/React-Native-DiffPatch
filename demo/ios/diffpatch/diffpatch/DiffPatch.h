

#import <Foundation/Foundation.h>

@interface DiffPatch : NSObject



//需要在项目中导入libbz2.tbd


/*!
 生成patch文件方法
 
 @param patch     存放patch文件位置
 @param oldBundle 旧jsbundle文件位置
 @param newBundle 新jsbundle文件位置
 
 @return BOOL
 */
+ (BOOL)beginDiff:(NSString *)patch
        oldBundle:(NSString *)oldBundle
        newBundle:(NSString *)newBundle;


/*!
 合并patch文件方法
 
 @param patch       Patch文件位置
 @param origin      原jsbundle文件位置
 @param destination 目标jsbundle文件位置
 
 @return BOOL
 */
+ (BOOL)beginPatch:(NSString *)patch
            origin:(NSString *)origin
     toDestination:(NSString *)destination;

@end
