/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

@class HMSettingGroup;


@protocol HMSettingsOwner
@property (__weak) id<HMSettingsDelegate> delegate; 
@property (readonly) HMSettingGroup * rootGroup; 
@required
-(id<HMSettingsDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(HMSettingGroup *)rootGroup;

@end

