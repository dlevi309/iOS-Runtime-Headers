/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VUIJSSettingsInterface.h>

@protocol VUIJSSettingsInterface <JSExport>
@required
-(id)userPreferences;
-(BOOL)sportsScoreSpoilersAllowed;
-(id)deniedBrands;
-(id)consentedBrands;
-(BOOL)privateModeEnabled;
-(unsigned long long)privacyFlowContentVersion;
-(void)forceUpdateWithCallback:(id)arg1;
-(id)appSettingsByChannelID;
-(id)wlkOverrides;
-(void)updateFeaturesConfiguration:(id)arg1;

@end


@interface VUIJSSettingsInterface : IKJSObject <VUIJSSettingsInterface>
-(id)userPreferences;
-(BOOL)sportsScoreSpoilersAllowed;
-(id)deniedBrands;
-(id)consentedBrands;
-(BOOL)privateModeEnabled;
-(void)dealloc;
-(id)initWithAppContext:(id)arg1 ;
-(void)_handleSettingsDidChange:(id)arg1 ;
-(unsigned long long)privacyFlowContentVersion;
-(void)forceUpdateWithCallback:(id)arg1 ;
-(id)appSettingsByChannelID;
-(id)wlkOverrides;
-(void)updateFeaturesConfiguration:(id)arg1 ;
@end

