/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class NSUUID, HFAccessoryItemProvider, HFGenericAccessoryItemProvider, HFProgrammableSwitchItemProvider, HFTargetControlItemProvider, HFMediaAccessoryItemProvider, HFServiceItemProvider, HFCameraItemProvider;

@interface HUQuickControlPresentationItemManager : HFItemManager {

	NSUUID* _homeKitObjectUUID;
	unsigned long long _presentationItemType;
	HFAccessoryItemProvider* _accessoryItemProvider;
	HFGenericAccessoryItemProvider* _genericItemProvider;
	HFProgrammableSwitchItemProvider* _programmableSwitchItemProvider;
	HFTargetControlItemProvider* _targetControlItemProvider;
	HFMediaAccessoryItemProvider* _mediaAccessoryItemProvider;
	HFServiceItemProvider* _serviceItemProvider;
	HFCameraItemProvider* _cameraItemProvider;

}

@property (nonatomic,retain) HFAccessoryItemProvider * accessoryItemProvider;                                //@synthesize accessoryItemProvider=_accessoryItemProvider - In the implementation block
@property (nonatomic,retain) HFGenericAccessoryItemProvider * genericItemProvider;                           //@synthesize genericItemProvider=_genericItemProvider - In the implementation block
@property (nonatomic,retain) HFProgrammableSwitchItemProvider * programmableSwitchItemProvider;              //@synthesize programmableSwitchItemProvider=_programmableSwitchItemProvider - In the implementation block
@property (nonatomic,retain) HFTargetControlItemProvider * targetControlItemProvider;                        //@synthesize targetControlItemProvider=_targetControlItemProvider - In the implementation block
@property (nonatomic,retain) HFMediaAccessoryItemProvider * mediaAccessoryItemProvider;                      //@synthesize mediaAccessoryItemProvider=_mediaAccessoryItemProvider - In the implementation block
@property (nonatomic,retain) HFServiceItemProvider * serviceItemProvider;                                    //@synthesize serviceItemProvider=_serviceItemProvider - In the implementation block
@property (nonatomic,retain) HFCameraItemProvider * cameraItemProvider;                                      //@synthesize cameraItemProvider=_cameraItemProvider - In the implementation block
@property (nonatomic,readonly) NSUUID * homeKitObjectUUID;                                                   //@synthesize homeKitObjectUUID=_homeKitObjectUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long presentationItemType;                                      //@synthesize presentationItemType=_presentationItemType - In the implementation block
-(void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)initWithHomeKitObjectUUID:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setServiceItemProvider:(HFServiceItemProvider *)arg1 ;
-(HFServiceItemProvider *)serviceItemProvider;
-(void)setCameraItemProvider:(HFCameraItemProvider *)arg1 ;
-(HFCameraItemProvider *)cameraItemProvider;
-(void)setProgrammableSwitchItemProvider:(HFProgrammableSwitchItemProvider *)arg1 ;
-(void)setTargetControlItemProvider:(HFTargetControlItemProvider *)arg1 ;
-(void)setAccessoryItemProvider:(HFAccessoryItemProvider *)arg1 ;
-(void)setGenericItemProvider:(HFGenericAccessoryItemProvider *)arg1 ;
-(void)setMediaAccessoryItemProvider:(HFMediaAccessoryItemProvider *)arg1 ;
-(HFProgrammableSwitchItemProvider *)programmableSwitchItemProvider;
-(HFTargetControlItemProvider *)targetControlItemProvider;
-(HFAccessoryItemProvider *)accessoryItemProvider;
-(HFGenericAccessoryItemProvider *)genericItemProvider;
-(HFMediaAccessoryItemProvider *)mediaAccessoryItemProvider;
-(NSUUID *)homeKitObjectUUID;
-(unsigned long long)presentationItemType;
@end

