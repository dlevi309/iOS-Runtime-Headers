/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VUIJSSettingsInterface.h>

@protocol VUIJSSettingsInterface <JSExport>
@required
-(id)userPreferences;
-(BOOL)sportsScoreSpoilersAllowed;
-(BOOL)privateModeEnabled;
-(id)consentedBrands;
-(id)deniedBrands;
-(unsigned long long)privacyFlowContentVersion;
-(void)forceUpdateWithCallback:(id)arg1;
-(id)appSettingsByChannelID;
-(id)wlkOverrides;
-(void)updateFeaturesConfiguration:(id)arg1;

@end


@interface VUIJSSettingsInterface : IKJSObject <VUIJSSettingsInterface>
-(void)dealloc;
-(id)userPreferences;
-(id)initWithAppContext:(id)arg1 ;
-(BOOL)sportsScoreSpoilersAllowed;
-(void)_handleSettingsDidChange:(id)arg1 ;
-(BOOL)privateModeEnabled;
-(id)consentedBrands;
-(id)deniedBrands;
-(unsigned long long)privacyFlowContentVersion;
-(void)forceUpdateWithCallback:(id)arg1 ;
-(id)appSettingsByChannelID;
-(id)wlkOverrides;
-(void)updateFeaturesConfiguration:(id)arg1 ;
@end

