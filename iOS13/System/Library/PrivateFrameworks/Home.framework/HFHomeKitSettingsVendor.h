/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

@class HMHome, NSSet, HFHomeKitSettingsAdapterManager, HFHomeKitSettingsValueManager, HMSettings;


@protocol HFHomeKitSettingsVendor <HFHomeKitObject,HFGroupableItemProtocol>
@property (nonatomic,readonly) HMHome * hf_home; 
@property (nonatomic,readonly) NSSet * hf_dependentHomeKitObjectsForDownstreamItems; 
@property (nonatomic,readonly) HFHomeKitSettingsAdapterManager * hf_settingsAdapterManager; 
@property (nonatomic,readonly) HFHomeKitSettingsValueManager * hf_settingsValueManager; 
@property (nonatomic,readonly) BOOL hasValidSettings; 
@property (readonly) HMSettings * settings; 
@required
-(HMSettings *)settings;
-(HMHome *)hf_home;
-(NSSet *)hf_dependentHomeKitObjectsForDownstreamItems;
-(HFHomeKitSettingsAdapterManager *)hf_settingsAdapterManager;
-(HFHomeKitSettingsValueManager *)hf_settingsValueManager;
-(BOOL)hasValidSettings;

@end

