/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSHashTable, NSMutableSet, NSMapTable, NSMutableDictionary;

@interface PXLoadingStatusManager : NSObject {

	NSHashTable* _observers;
	BOOL __isUpdateScheduled;
	NSMutableSet* __invalidLoadingStatusItems;
	NSMapTable* __loadOperationTrackingIDsByItem;
	NSMapTable* __loadingStatusByItem;
	NSMutableDictionary* __itemByLoadOperationTrackingID;
	NSMutableDictionary* __loadingStatusByLoadOperationTrackingID;

}

@property (assign,setter=_setUpdateScheduled:,nonatomic) BOOL _isUpdateScheduled;                          //@synthesize _isUpdateScheduled=__isUpdateScheduled - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _invalidLoadingStatusItems;                                  //@synthesize _invalidLoadingStatusItems=__invalidLoadingStatusItems - In the implementation block
@property (nonatomic,readonly) NSMapTable * _loadOperationTrackingIDsByItem;                               //@synthesize _loadOperationTrackingIDsByItem=__loadOperationTrackingIDsByItem - In the implementation block
@property (nonatomic,readonly) NSMapTable * _loadingStatusByItem;                                          //@synthesize _loadingStatusByItem=__loadingStatusByItem - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _itemByLoadOperationTrackingID;                       //@synthesize _itemByLoadOperationTrackingID=__itemByLoadOperationTrackingID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _loadingStatusByLoadOperationTrackingID;              //@synthesize _loadingStatusByLoadOperationTrackingID=__loadingStatusByLoadOperationTrackingID - In the implementation block
-(void)unregisterObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(void)didCancelLoadOperationWithTrackingID:(id)arg1 ;
-(id)init;
-(BOOL)_isUpdateScheduled;
-(void)_updateNowIfNeeded;
-(void)_setLoadingStatus:(id)arg1 forLoadOperationTrackingID:(id)arg2 ;
-(id)loadingStatusForItem:(id)arg1 ;
-(void)_updateIfNeeded;
-(void)_updateLoadingStatusForItemsIfNeeded;
-(void)_invalidateLoadingStatusForItem:(id)arg1 ;
-(NSMapTable *)_loadingStatusByItem;
-(NSMutableDictionary *)_itemByLoadOperationTrackingID;
-(void)_setLoadingStatus:(id)arg1 forItem:(id)arg2 ;
-(id)willBeginLoadOperationWithItem:(id)arg1 ;
-(NSMapTable *)_loadOperationTrackingIDsByItem;
-(BOOL)_needsUpdate;
-(void)didUpdateLoadOperationWithTrackingID:(id)arg1 withProgress:(double)arg2 ;
-(NSMutableSet *)_invalidLoadingStatusItems;
-(void)_resetLoadingStatusForItemIfAppropriate:(id)arg1 ;
-(void)_updateLoadingStatusForItemIfNeeded:(id)arg1 ;
-(void)_setNeedsUpdate;
-(void)_setUpdateScheduled:(BOOL)arg1 ;
-(NSMutableDictionary *)_loadingStatusByLoadOperationTrackingID;
-(void)_updateLoadingStatusForItem:(id)arg1 ;
-(void)didCompleteLoadOperationWithTrackingID:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
@end

