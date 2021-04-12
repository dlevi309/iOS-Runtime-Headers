/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
*/


#import <AskPermission/AskPermission-Structs.h>
@interface APDefaults : NSObject
+(void)_setValue:(id)arg1 forKey:(id)arg2 ;
+(BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
+(id)_valueForKey:(id)arg1 ;
+(long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 ;
+(id)_valueForKey:(id)arg1 domain:(CFStringRef)arg2 ;
+(BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 domain:(CFStringRef)arg3 ;
+(void)_setBool:(BOOL)arg1 forKey:(id)arg2 ;
+(void)_setInteger:(long long)arg1 forKey:(id)arg2 ;
+(void)_setValue:(id)arg1 forKey:(id)arg2 domain:(CFStringRef)arg3 ;
+(void)_setBool:(BOOL)arg1 forKey:(id)arg2 domain:(CFStringRef)arg3 ;
+(long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 domain:(CFStringRef)arg3 ;
+(BOOL)APSDevelopmentEnvironment;
+(BOOL)isApprover;
+(BOOL)isRequester;
+(void)setAPSDevelopmentEnvironment:(BOOL)arg1 ;
+(void)setIsApprover:(BOOL)arg1 ;
+(void)setIsRequester:(BOOL)arg1 ;
@end

