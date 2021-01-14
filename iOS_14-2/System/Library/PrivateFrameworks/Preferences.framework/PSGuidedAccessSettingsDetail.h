/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <libobjc.A.dylib/PSSettingsDetail.h>

@class NSString;

@interface PSGuidedAccessSettingsDetail : NSObject <PSSettingsDetail>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)guidedAccessAvailability;
+(id)iconImage;
+(BOOL)guidedAccessHasPasscode;
+(void)setGuidedAccessSwitchEnabled:(BOOL)arg1 ;
+(void)enterGuidedAccessMode;
+(id)preferencesURL;
@end

