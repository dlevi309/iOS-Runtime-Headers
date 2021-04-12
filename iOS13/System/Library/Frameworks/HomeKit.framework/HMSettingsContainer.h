/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

@class HMSettings;


@protocol HMSettingsContainer <NSObject>
@property (readonly) HMSettings * settings; 
@property (readonly) HMSettings * privateSettings; 
@required
-(HMSettings *)settings;
-(HMSettings *)privateSettings;

@end

