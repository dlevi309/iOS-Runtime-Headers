/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HMRoom, HFCameraItemProvider, HFReorderableHomeKitItemList;

@interface HUGridCameraItemManager : HFItemManager {

	BOOL _onlyShowsFavorites;
	HMRoom* _room;
	HFCameraItemProvider* _cameraItemProvider;
	HFReorderableHomeKitItemList* _clientReorderableCameraList;

}

@property (nonatomic,retain) HFCameraItemProvider * cameraItemProvider;                               //@synthesize cameraItemProvider=_cameraItemProvider - In the implementation block
@property (nonatomic,retain) HFReorderableHomeKitItemList * clientReorderableCameraList;              //@synthesize clientReorderableCameraList=_clientReorderableCameraList - In the implementation block
@property (nonatomic,retain) HMRoom * room;                                                           //@synthesize room=_room - In the implementation block
@property (assign,nonatomic) BOOL onlyShowsFavorites;                                                 //@synthesize onlyShowsFavorites=_onlyShowsFavorites - In the implementation block
@property (nonatomic,retain) HFReorderableHomeKitItemList * reorderableCameraList; 
-(HMRoom *)room;
-(void)_updateFilters;
-(void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1 ;
-(BOOL)_requiresNotificationsForCharacteristic:(id)arg1 ;
-(void)setRoom:(HMRoom *)arg1 ;
-(HFReorderableHomeKitItemList *)reorderableCameraList;
-(void)setReorderableCameraList:(HFReorderableHomeKitItemList *)arg1 ;
-(id)_itemForSorting;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(id)matchingItemForHomeKitObject:(id)arg1 ;
-(BOOL)onlyShowsFavorites;
-(void)setOnlyShowsFavorites:(BOOL)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(HFReorderableHomeKitItemList *)clientReorderableCameraList;
-(void)setClientReorderableCameraList:(HFReorderableHomeKitItemList *)arg1 ;
-(void)setCameraItemProvider:(HFCameraItemProvider *)arg1 ;
-(HFCameraItemProvider *)cameraItemProvider;
-(id)initWithDelegate:(id)arg1 room:(id)arg2 ;
-(id)cameraItemAssociatedWithCameraProfile:(id)arg1 ;
@end

