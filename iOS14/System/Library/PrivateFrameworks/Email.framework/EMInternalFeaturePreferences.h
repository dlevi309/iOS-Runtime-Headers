/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class NSString;

@interface EMInternalFeaturePreferences : NSObject <EFLoggable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_featureEnabled:(unsigned long long)arg1 ;
+(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
+(id)log;
+(BOOL)featureEnabled:(unsigned long long)arg1 ;
+(BOOL)_userDefaultEnabledForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
+(void)_registerForDefaultChanges;
+(BOOL)_hasUserDefaultValueForKey:(id)arg1 expectedValue:(id)arg2 ;
+(id)defaultForFeature:(unsigned long long)arg1 ;
+(void)setFeature:(unsigned long long)arg1 enabled:(BOOL)arg2 ;
+(void)_setUserDefaultEnabled:(BOOL)arg1 forKey:(id)arg2 ;
+(id)observeChangesForFeature:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

