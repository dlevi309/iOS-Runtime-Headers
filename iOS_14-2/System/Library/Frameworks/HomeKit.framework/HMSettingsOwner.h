/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

