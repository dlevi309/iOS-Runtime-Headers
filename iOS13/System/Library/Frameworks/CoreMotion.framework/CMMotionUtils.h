/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


#import <CoreMotion/CoreMotion-Structs.h>
@interface CMMotionUtils : NSObject
+(BOOL)hasEntitlement:(id)arg1 ;
+(long long)authorizationStatus;
+(id)sendMessage:(shared_ptr<CLConnectionMessage>*)arg1 withReplyClassesSync:(id)arg2 ;
+(BOOL)featureAvailability:(const char*)arg1 ;
+(void)tccServiceMotionAccessWithBlock:(/*^block*/id)arg1 ;
+(BOOL)sendMessageSync:(shared_ptr<CLConnectionMessage>*)arg1 onConnection:(CLConnectionClient*)arg2 timeoutAfter:(double)arg3 withReplyHandler:(/*^block*/id)arg4 ;
+(void)tccServiceMotionAccessWithLabel:(id)arg1 ;
+(id)fileHandleForWritingToURL:(id)arg1 ;
+(id)getExecutablePathFromPid:(int)arg1 ;
+(void)sendMessage:(shared_ptr<CLConnectionMessage>*)arg1 withReplyClasses:(id)arg2 callback:(/*^block*/id)arg3 ;
+(long long)isAuthorizedForEntitlement:(id)arg1 ;
+(BOOL)isMotionActivityEntitled;
+(id)logDirectory;
+(unsigned long long)copyDataFrom:(id)arg1 to:(id)arg2 ;
@end

