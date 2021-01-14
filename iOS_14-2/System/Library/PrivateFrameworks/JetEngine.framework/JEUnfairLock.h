/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine
*/

#import <JetEngine/JetEngine-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface JEUnfairLock : NSObject <NSLocking> {

	os_unfair_lock_s _unfairLock;

}
+(void)initialize;
-(void)unlock;
-(id)init;
-(void)lock;
@end

