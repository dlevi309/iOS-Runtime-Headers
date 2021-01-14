/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>
#import <libobjc.A.dylib/HFHomeObserver.h>

@class HFItem, HUSoftwareUpdateFetchItem, HUSoftwareUpdateItemModule, NAFuture, HMHome, HUFirmwareUpdateItemModule, NSString;

@interface HUSoftwareUpdateStandaloneItemManager : HFItemManager <HFHomeObserver> {

	HFItem* _autoUpdateItem;
	HUSoftwareUpdateFetchItem* _fetchItem;
	HUSoftwareUpdateItemModule* _softwareUpdateModule;
	NAFuture* _softwareUpdateFetchFuture;
	HMHome* _overrideHome;
	HUFirmwareUpdateItemModule* _firmwareUpdateModule;

}

@property (nonatomic,retain) HFItem * autoUpdateItem;                                        //@synthesize autoUpdateItem=_autoUpdateItem - In the implementation block
@property (nonatomic,retain) HMHome * overrideHome;                                          //@synthesize overrideHome=_overrideHome - In the implementation block
@property (nonatomic,retain) HUSoftwareUpdateFetchItem * fetchItem;                          //@synthesize fetchItem=_fetchItem - In the implementation block
@property (nonatomic,retain) HUSoftwareUpdateItemModule * softwareUpdateModule;              //@synthesize softwareUpdateModule=_softwareUpdateModule - In the implementation block
@property (nonatomic,retain) HUFirmwareUpdateItemModule * firmwareUpdateModule;              //@synthesize firmwareUpdateModule=_firmwareUpdateModule - In the implementation block
@property (nonatomic,retain) NAFuture * softwareUpdateFetchFuture;                           //@synthesize softwareUpdateFetchFuture=_softwareUpdateFetchFuture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)home:(id)arg1 didUpdateAutomaticSoftwareUpdateEnabled:(BOOL)arg2 ;
-(id)_homeFuture;
-(id)initWithDelegate:(id)arg1 home:(id)arg2 ;
-(HMHome *)overrideHome;
-(void)setOverrideHome:(HMHome *)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(HUSoftwareUpdateItemModule *)softwareUpdateModule;
-(HFItem *)autoUpdateItem;
-(HUSoftwareUpdateFetchItem *)fetchItem;
-(NAFuture *)softwareUpdateFetchFuture;
-(id)triggerSoftwareUpdateFetch;
-(void)setSoftwareUpdateFetchFuture:(NAFuture *)arg1 ;
-(void)setAutoUpdateItem:(HFItem *)arg1 ;
-(void)setFetchItem:(HUSoftwareUpdateFetchItem *)arg1 ;
-(void)setSoftwareUpdateModule:(HUSoftwareUpdateItemModule *)arg1 ;
-(HUFirmwareUpdateItemModule *)firmwareUpdateModule;
-(void)setFirmwareUpdateModule:(HUFirmwareUpdateItemModule *)arg1 ;
@end

