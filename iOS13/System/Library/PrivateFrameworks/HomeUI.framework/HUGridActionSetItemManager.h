/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HMRoom, HFActionSetItemProvider, HFReorderableHomeKitItemList;

@interface HUGridActionSetItemManager : HFItemManager {

	BOOL _onlyShowsFavorites;
	HMRoom* _room;
	unsigned long long _actionSetStyle;
	HFActionSetItemProvider* _actionSetItemProvider;
	HFReorderableHomeKitItemList* _clientReorderableActionSetList;

}

@property (nonatomic,retain) HFActionSetItemProvider * actionSetItemProvider;                            //@synthesize actionSetItemProvider=_actionSetItemProvider - In the implementation block
@property (nonatomic,retain) HFReorderableHomeKitItemList * clientReorderableActionSetList;              //@synthesize clientReorderableActionSetList=_clientReorderableActionSetList - In the implementation block
@property (nonatomic,retain) HMRoom * room;                                                              //@synthesize room=_room - In the implementation block
@property (assign,nonatomic) BOOL onlyShowsFavorites;                                                    //@synthesize onlyShowsFavorites=_onlyShowsFavorites - In the implementation block
@property (nonatomic,readonly) unsigned long long actionSetStyle;                                        //@synthesize actionSetStyle=_actionSetStyle - In the implementation block
@property (nonatomic,retain) HFReorderableHomeKitItemList * reorderableActionSetList; 
-(id)initWithDelegate:(id)arg1 ;
-(void)_updateFilters;
-(HMRoom *)room;
-(void)setRoom:(HMRoom *)arg1 ;
-(BOOL)onlyShowsFavorites;
-(void)setOnlyShowsFavorites:(BOOL)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(BOOL)_requiresNotificationsForCharacteristic:(id)arg1 ;
-(void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1 ;
-(id)_itemForSorting;
-(HFReorderableHomeKitItemList *)clientReorderableActionSetList;
-(void)setClientReorderableActionSetList:(HFReorderableHomeKitItemList *)arg1 ;
-(unsigned long long)actionSetStyle;
-(void)setActionSetItemProvider:(HFActionSetItemProvider *)arg1 ;
-(HFActionSetItemProvider *)actionSetItemProvider;
-(HFReorderableHomeKitItemList *)reorderableActionSetList;
-(void)setReorderableActionSetList:(HFReorderableHomeKitItemList *)arg1 ;
-(id)initWithDelegate:(id)arg1 actionSetStyle:(unsigned long long)arg2 room:(id)arg3 ;
-(id)actionSetItemAssociatedWithActionSet:(id)arg1 ;
@end

