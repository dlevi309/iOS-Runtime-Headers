/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>
#import <libobjc.A.dylib/HULocationDeviceManagerObserver.h>

@protocol HFMediaProfileContainer;
@class NSSet, NSArray, HMHome, HFUserItem, HFItemProvider, HFItem, HULocationDeviceManager, HMAssistantAccessControl, NAFuture, NSString;

@interface HUPersonalRequestsDevicesItemModule : HFItemModule <HULocationDeviceManagerObserver> {

	BOOL _onlyShowDeviceSwitches;
	NSSet* _itemProviders;
	id<HFMediaProfileContainer> _sourceMediaProfileContainer;
	NSArray* _supportedMULanguageCodes;
	HMHome* _home;
	HFUserItem* _sourceItem;
	HFItemProvider* _personalRequestsDevicesProvider;
	HFItem* _footerItem;
	HFItem* _personalRequestsToggleItem;
	HULocationDeviceManager* _locationDeviceManager;

}

@property (nonatomic,readonly) NSSet * itemProviders;                                              //@synthesize itemProviders=_itemProviders - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                      //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HFUserItem * sourceItem;                                            //@synthesize sourceItem=_sourceItem - In the implementation block
@property (nonatomic,readonly) HMAssistantAccessControl * accessControl; 
@property (nonatomic,retain) HFItemProvider * personalRequestsDevicesProvider;                     //@synthesize personalRequestsDevicesProvider=_personalRequestsDevicesProvider - In the implementation block
@property (nonatomic,readonly) HFItem * footerItem;                                                //@synthesize footerItem=_footerItem - In the implementation block
@property (nonatomic,readonly) HFItem * personalRequestsToggleItem;                                //@synthesize personalRequestsToggleItem=_personalRequestsToggleItem - In the implementation block
@property (assign,nonatomic) BOOL onlyShowDeviceSwitches;                                          //@synthesize onlyShowDeviceSwitches=_onlyShowDeviceSwitches - In the implementation block
@property (nonatomic,readonly) HULocationDeviceManager * locationDeviceManager;                    //@synthesize locationDeviceManager=_locationDeviceManager - In the implementation block
@property (nonatomic,copy) NSArray * personalRequestsDevices; 
@property (nonatomic,retain) id<HFMediaProfileContainer> sourceMediaProfileContainer;              //@synthesize sourceMediaProfileContainer=_sourceMediaProfileContainer - In the implementation block
@property (nonatomic,readonly) NAFuture * activeLocationDeviceFuture; 
@property (nonatomic,retain) NSArray * supportedMULanguageCodes;                                   //@synthesize supportedMULanguageCodes=_supportedMULanguageCodes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HMAssistantAccessControl *)accessControl;
-(HMHome *)home;
-(NSSet *)itemProviders;
-(HFItem *)footerItem;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)registerForExternalUpdates;
-(void)unregisterForExternalUpdates;
-(HFUserItem *)sourceItem;
-(void)turnOnPersonalRequestsForAllVoiceRecognitionCapablePersonalRequestsDevices;
-(void)setPersonalRequestsDevices:(NSArray *)arg1 ;
-(NSArray *)personalRequestsDevices;
-(NSArray *)supportedMULanguageCodes;
-(void)setSupportedMULanguageCodes:(NSArray *)arg1 ;
-(NAFuture *)activeLocationDeviceFuture;
-(BOOL)onlyShowDeviceSwitches;
-(void)_createItemProviders;
-(HULocationDeviceManager *)locationDeviceManager;
-(id<HFMediaProfileContainer>)sourceMediaProfileContainer;
-(BOOL)isCurrentIOSDeviceOnSameVoiceRecognitionLanguageAsPersonalRequestsDeviceForItem:(id)arg1 ;
-(void)setPersonalRequestsDevicesProvider:(HFItemProvider *)arg1 ;
-(HFItemProvider *)personalRequestsDevicesProvider;
-(HFItem *)personalRequestsToggleItem;
-(BOOL)_showPersonalRequestsItems;
-(void)turnOnAllPersonalRequestsDevices;
-(BOOL)_voiceRecognitionLanguage:(id)arg1 matchesMultiUserCapableHomePod:(id)arg2 ;
-(id)_commitUpdateToAccessControl:(id)arg1 ;
-(void)locationDeviceManager:(id)arg1 didUpdateActiveLocationDevice:(id)arg2 ;
-(id)initWithItemUpdater:(id)arg1 userItem:(id)arg2 home:(id)arg3 onlyShowDeviceSwitches:(BOOL)arg4 ;
-(BOOL)isItemPersonalRequestsToggle:(id)arg1 ;
-(BOOL)isItemPersonalRequestsDevice:(id)arg1 ;
-(BOOL)isItemPersonalRequestsFooter:(id)arg1 ;
-(void)toggleAllPersonalRequestsDevices;
-(id)updateLocationDeviceToThisDevice;
-(void)setSourceMediaProfileContainer:(id<HFMediaProfileContainer>)arg1 ;
-(void)setOnlyShowDeviceSwitches:(BOOL)arg1 ;
@end

