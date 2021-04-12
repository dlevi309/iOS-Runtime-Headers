/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

@class HFAccessorySettingsEntity, NSString;


@protocol HFHomeKitSettingItemProtocol <HFHomeKitItemProtocol>
@property (nonatomic,readonly) id<HFHomeKitSettingsVendor> homeKitSettingsVendor; 
@property (nonatomic,readonly) HFAccessorySettingsEntity * entity; 
@property (nonatomic,readonly) NSString * settingKeyPath; 
@required
-(HFAccessorySettingsEntity *)entity;
-(id<HFHomeKitSettingsVendor>)homeKitSettingsVendor;
-(NSString *)settingKeyPath;

@end

