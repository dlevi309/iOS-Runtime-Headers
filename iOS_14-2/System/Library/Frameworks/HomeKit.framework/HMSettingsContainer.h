/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

@class HMSettings;


@protocol HMSettingsContainer <NSObject>
@property (readonly) HMSettings * settings; 
@property (readonly) HMSettings * privateSettings; 
@property (readonly) BOOL settingsInitialized; 
@required
-(HMSettings *)settings;
-(BOOL)settingsInitialized;
-(HMSettings *)privateSettings;

@end

