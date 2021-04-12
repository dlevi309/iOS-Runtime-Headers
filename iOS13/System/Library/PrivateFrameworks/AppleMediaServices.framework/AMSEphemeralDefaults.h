/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@interface AMSEphemeralDefaults : NSObject
+(void)_setProperty:(id)arg1 forKey:(id)arg2 ;
+(BOOL)bagKeyRegistrationEnabled;
+(id)_propertyForKey:(id)arg1 defaultValue:(id)arg2 expectedType:(Class)arg3 ;
+(void)_accessDataStoreUsingBlock:(/*^block*/id)arg1 ;
+(BOOL)HARLoggingEnabled;
+(long long)HARLoggingItemLimit;
+(BOOL)processAssertionsEnabled;
+(void)setBagKeyRegistrationEnabled:(BOOL)arg1 ;
+(void)setHARLoggingEnabled:(BOOL)arg1 ;
+(void)setHARLoggingItemLimit:(long long)arg1 ;
+(void)setProcessAssertionsEnabled:(BOOL)arg1 ;
@end

