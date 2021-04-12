/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@protocol HFAccessorySettingDeviceOptionsAdapterUtilityDelegate, HFHomeKitSettingsVendor;
@class NAFuture, RPCompanionLinkClient, NSMutableArray;

@interface HFAccessorySettingDeviceOptionsAdapterUtility : NSObject {

	BOOL _isAccessoryReachableOverRapport;
	BOOL _isAccessoryGrouped;
	id<HFAccessorySettingDeviceOptionsAdapterUtilityDelegate> _delegate;
	NAFuture* _inProgressSysdiagnoseCollectionFuture;
	id<HFHomeKitSettingsVendor> _homeKitSettingsVendor;
	unsigned long long _mode;
	NAFuture* _linkIsActivatedFuture;
	NAFuture* _accessoryCompanionLinkDeviceFuture;
	NAFuture* _accessoryCompanionDevicesIDFuture;
	RPCompanionLinkClient* _client;
	NSMutableArray* _deviceIDArray;

}

@property (nonatomic,retain) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;                                      //@synthesize homeKitSettingsVendor=_homeKitSettingsVendor - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                                //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL isAccessoryReachableOverRapport;                                                   //@synthesize isAccessoryReachableOverRapport=_isAccessoryReachableOverRapport - In the implementation block
@property (nonatomic,readonly) NAFuture * linkIsActivatedFuture;                                                     //@synthesize linkIsActivatedFuture=_linkIsActivatedFuture - In the implementation block
@property (nonatomic,readonly) NAFuture * accessoryCompanionLinkDeviceFuture;                                        //@synthesize accessoryCompanionLinkDeviceFuture=_accessoryCompanionLinkDeviceFuture - In the implementation block
@property (nonatomic,readonly) NAFuture * accessoryCompanionDevicesIDFuture;                                         //@synthesize accessoryCompanionDevicesIDFuture=_accessoryCompanionDevicesIDFuture - In the implementation block
@property (nonatomic,readonly) RPCompanionLinkClient * client;                                                       //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NAFuture * inProgressSysdiagnoseCollectionFuture;                                       //@synthesize inProgressSysdiagnoseCollectionFuture=_inProgressSysdiagnoseCollectionFuture - In the implementation block
@property (assign,nonatomic) BOOL isAccessoryGrouped;                                                                //@synthesize isAccessoryGrouped=_isAccessoryGrouped - In the implementation block
@property (nonatomic,retain) NSMutableArray * deviceIDArray;                                                         //@synthesize deviceIDArray=_deviceIDArray - In the implementation block
@property (assign,nonatomic,__weak) id<HFAccessorySettingDeviceOptionsAdapterUtilityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HFAccessorySettingDeviceOptionsAdapterUtilityDelegate>)delegate;
-(void)setDelegate:(id<HFAccessorySettingDeviceOptionsAdapterUtilityDelegate>)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(RPCompanionLinkClient *)client;
-(unsigned long long)mode;
-(id)_home;
-(id)mediaProfileContainer;
-(id<HFHomeKitSettingsVendor>)homeKitSettingsVendor;
-(void)setHomeKitSettingsVendor:(id<HFHomeKitSettingsVendor>)arg1 ;
-(id)identifyAccessory;
-(void)_resetRapportClientWithInvalidation:(BOOL)arg1 ;
-(id)_sendRapportMessageWithIdentifier:(id)arg1 request:(id)arg2 options:(id)arg3 ;
-(id)_sendRapportMessageToGroupedAccessoryWithIdentifier:(id)arg1 request:(id)arg2 options:(id)arg3 ;
-(id)_homeKitAccessoryUniqueIdentifier;
-(NAFuture *)linkIsActivatedFuture;
-(NAFuture *)accessoryCompanionLinkDeviceFuture;
-(BOOL)isAccessoryGrouped;
-(id)_mediaSessionAccessoryUniqueIdentifier;
-(void)_updateDeviceForGroupedAccessory;
-(void)_updateDevice;
-(void)_setupRapportClient;
-(NSMutableArray *)deviceIDArray;
-(NAFuture *)accessoryCompanionDevicesIDFuture;
-(id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2 groupedAccessory:(BOOL)arg3 delegate:(id)arg4 ;
-(id)requestSysdiagnoseWithRequest:(id)arg1 options:(id)arg2 ;
-(id)restartAccessory;
-(id)restartAccessories;
-(NAFuture *)inProgressSysdiagnoseCollectionFuture;
-(void)setInProgressSysdiagnoseCollectionFuture:(NAFuture *)arg1 ;
-(BOOL)isAccessoryReachableOverRapport;
-(void)setIsAccessoryReachableOverRapport:(BOOL)arg1 ;
-(void)setIsAccessoryGrouped:(BOOL)arg1 ;
-(void)setDeviceIDArray:(NSMutableArray *)arg1 ;
@end

