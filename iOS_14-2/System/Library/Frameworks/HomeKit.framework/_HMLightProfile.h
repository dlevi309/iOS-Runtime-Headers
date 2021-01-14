/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/_HMAccessoryProfile.h>

@class HMLightProfileSettings, HMLightProfile;

@interface _HMLightProfile : _HMAccessoryProfile {

	HMLightProfileSettings* _settings;

}

@property (readonly) HMLightProfile * lightProfile; 
@property (retain) HMLightProfileSettings * settings;              //@synthesize settings=_settings - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSettings:(HMLightProfileSettings *)arg1 ;
-(HMLightProfileSettings *)settings;
-(id)initWithCoder:(id)arg1 ;
-(HMLightProfile *)lightProfile;
-(void)handleSettingsDidUpdate:(id)arg1 ;
-(id)initWithUUID:(id)arg1 services:(id)arg2 settings:(id)arg3 ;
-(void)_registerNotificationHandlers;
@end

