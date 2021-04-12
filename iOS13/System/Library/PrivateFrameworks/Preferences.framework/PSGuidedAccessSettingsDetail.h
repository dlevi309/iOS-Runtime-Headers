/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <libobjc.A.dylib/PSSettingsDetail.h>

@class NSString;

@interface PSGuidedAccessSettingsDetail : NSObject <PSSettingsDetail>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)iconImage;
+(unsigned long long)guidedAccessAvailability;
+(id)preferencesURL;
+(BOOL)guidedAccessHasPasscode;
+(void)setGuidedAccessSwitchEnabled:(BOOL)arg1 ;
+(void)enterGuidedAccessMode;
@end

