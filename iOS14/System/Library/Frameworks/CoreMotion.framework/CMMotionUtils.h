/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


#import <CoreMotion/CoreMotion-Structs.h>
@interface CMMotionUtils : NSObject
+(unsigned long long)copyDataFrom:(id)arg1 to:(id)arg2 ;
+(id)logDirectory;
+(id)fileHandleForWritingToURL:(id)arg1 ;
+(BOOL)featureAvailability:(const char*)arg1 ;
+(long long)authorizationStatus;
+(id)getExecutablePathFromPid:(int)arg1 ;
+(shared_ptr<CLConnectionMessage>*)sendMessageSync:(shared_ptr<CLConnectionMessage>*)arg1 ;
+(void)tccServiceMotionAccessWithBlock:(/*^block*/id)arg1 ;
+(void)sendMessage:(shared_ptr<CLConnectionMessage>*)arg1 withReplyClasses:(id)arg2 callback:(/*^block*/id)arg3 ;
+(void)tccServiceMotionAccessWithLabel:(id)arg1 ;
+(long long)isAuthorizedForEntitlement:(id)arg1 ;
+(id)sendMessage:(shared_ptr<CLConnectionMessage>*)arg1 withReplyClassesSync:(id)arg2 ;
+(BOOL)hasEntitlement:(id)arg1 ;
+(BOOL)isMotionActivityEntitled;
@end

