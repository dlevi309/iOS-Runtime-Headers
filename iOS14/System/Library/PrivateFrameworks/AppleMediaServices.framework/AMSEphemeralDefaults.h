/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@interface AMSEphemeralDefaults : NSObject
+(BOOL)processAssertionsEnabled;
+(BOOL)bagKeyRegistrationEnabled;
+(void)setHARLoggingItemLimit:(long long)arg1 ;
+(void)setBagKeyRegistrationEnabled:(BOOL)arg1 ;
+(long long)HARLoggingItemLimit;
+(void)_setProperty:(id)arg1 forKey:(id)arg2 ;
+(void)_accessDataStoreUsingBlock:(/*^block*/id)arg1 ;
+(void)setHARLoggingEnabled:(BOOL)arg1 ;
+(void)setProcessAssertionsEnabled:(BOOL)arg1 ;
+(BOOL)HARLoggingEnabled;
+(id)_propertyForKey:(id)arg1 defaultValue:(id)arg2 expectedType:(Class)arg3 ;
@end

