/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>
#import <libobjc.A.dylib/HFHomeObserver.h>

@class HFItem, HUSoftwareUpdateFetchItem, HUSoftwareUpdateItemModule, NAFuture, HMHome, NSString;

@interface HUSoftwareUpdateStandaloneItemManager : HFItemManager <HFHomeObserver> {

	HFItem* _autoUpdateItem;
	HUSoftwareUpdateFetchItem* _fetchItem;
	HUSoftwareUpdateItemModule* _softwareUpdateModule;
	NAFuture* _softwareUpdateFetchFuture;
	HMHome* _overrideHome;

}

@property (nonatomic,retain) HFItem * autoUpdateItem;                                        //@synthesize autoUpdateItem=_autoUpdateItem - In the implementation block
@property (nonatomic,retain) HMHome * overrideHome;                                          //@synthesize overrideHome=_overrideHome - In the implementation block
@property (nonatomic,retain) HUSoftwareUpdateFetchItem * fetchItem;                          //@synthesize fetchItem=_fetchItem - In the implementation block
@property (nonatomic,retain) HUSoftwareUpdateItemModule * softwareUpdateModule;              //@synthesize softwareUpdateModule=_softwareUpdateModule - In the implementation block
@property (nonatomic,retain) NAFuture * softwareUpdateFetchFuture;                           //@synthesize softwareUpdateFetchFuture=_softwareUpdateFetchFuture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)home:(id)arg1 didUpdateAutomaticSoftwareUpdateEnabled:(BOOL)arg2 ;
-(void)setFetchItem:(HUSoftwareUpdateFetchItem *)arg1 ;
-(HUSoftwareUpdateFetchItem *)fetchItem;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)_homeFuture;
-(id)initWithDelegate:(id)arg1 home:(id)arg2 ;
-(HMHome *)overrideHome;
-(void)setOverrideHome:(HMHome *)arg1 ;
-(HUSoftwareUpdateItemModule *)softwareUpdateModule;
-(void)setSoftwareUpdateModule:(HUSoftwareUpdateItemModule *)arg1 ;
-(HFItem *)autoUpdateItem;
-(NAFuture *)softwareUpdateFetchFuture;
-(id)triggerSoftwareUpdateFetch;
-(void)setSoftwareUpdateFetchFuture:(NAFuture *)arg1 ;
-(void)setAutoUpdateItem:(HFItem *)arg1 ;
@end

