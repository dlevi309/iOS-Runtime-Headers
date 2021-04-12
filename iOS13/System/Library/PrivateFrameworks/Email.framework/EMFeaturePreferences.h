/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class NSString;

@interface EMFeaturePreferences : NSObject <EFLoggable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
+(BOOL)featureEnabled:(unsigned long long)arg1 ;
+(id)log;
+(void)setFeature:(unsigned long long)arg1 enabled:(BOOL)arg2 ;
+(void)_registerForDefaultChanges;
+(BOOL)_featureEnabled:(unsigned long long)arg1 ;
+(id)defaultForFeature:(unsigned long long)arg1 ;
+(BOOL)_userDefaultEnabledForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
+(void)_setUserDefaultEnabled:(BOOL)arg1 forKey:(id)arg2 ;
+(BOOL)_hasUserDefaultValueForKey:(id)arg1 expectedValue:(id)arg2 ;
@end

