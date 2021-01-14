/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@interface HKXPCEventObserver : NSObject
+(void)_registerEventHandler:(/*^block*/id)arg1 forStream:(const char*)arg2 ;
+(void)_subscribeToStream:(const char*)arg1 clientIdentifier:(const char*)arg2 ;
+(void)_unsubscribeFromStream:(const char*)arg1 clientIdentifier:(const char*)arg2 ;
+(void)setAuthorizationStreamEventHandler:(/*^block*/id)arg1 ;
+(void)subscribeToAuthorizationStreamWithIdentifier:(const char*)arg1 ;
+(void)unsubscribeFromAuthorizationStreamWithIdentifier:(const char*)arg1 ;
@end

