/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSHistoryStore;
@class NSSet, NSMutableSet, NSMapTable;

@interface WBSHistoryDeletionPlan : NSObject {

	id<WBSHistoryStore> _store;
	NSSet* _excludedItems;
	NSSet* _excludedVisits;
	NSMutableSet* _discoveredItemsToDelete;
	BOOL _wasPrepared;
	NSSet* _triggeringItems;
	NSSet* _triggeringVisits;
	NSSet* _discoveredVisitsToDelete;
	NSMapTable* _updatedLastVisitsByItem;

}

@property (nonatomic,readonly) NSSet * triggeringItems;                                                     //@synthesize triggeringItems=_triggeringItems - In the implementation block
@property (nonatomic,readonly) NSSet * triggeringVisits;                                                    //@synthesize triggeringVisits=_triggeringVisits - In the implementation block
@property (nonatomic,readonly) NSSet * discoveredItemsToDelete;                                             //@synthesize discoveredItemsToDelete=_discoveredItemsToDelete - In the implementation block
@property (nonatomic,readonly) NSSet * discoveredVisitsToDelete;                                            //@synthesize discoveredVisitsToDelete=_discoveredVisitsToDelete - In the implementation block
@property (nonatomic,readonly) NSSet * allItemsToDelete; 
@property (nonatomic,readonly) NSSet * allVisitsToDeleteExcludingVisitsFromItemsBeingDeleted; 
@property (nonatomic,readonly) NSMapTable * allVisitsToDeleteByItemExcludingItemsBeingDeleted; 
@property (nonatomic,readonly) NSMapTable * updatedLastVisitsByItem;                                        //@synthesize updatedLastVisitsByItem=_updatedLastVisitsByItem - In the implementation block
@property (nonatomic,readonly) BOOL wasPrepared;                                                            //@synthesize wasPrepared=_wasPrepared - In the implementation block
-(void)execute;
-(void)prepare;
-(NSSet *)discoveredItemsToDelete;
-(NSMapTable *)allVisitsToDeleteByItemExcludingItemsBeingDeleted;
-(NSMapTable *)updatedLastVisitsByItem;
-(id)initWithSQLiteStore:(id)arg1 triggeringItems:(id)arg2 excludingItems:(id)arg3 visits:(id)arg4 reason:(long long)arg5 ;
-(NSSet *)allItemsToDelete;
-(NSSet *)allVisitsToDeleteExcludingVisitsFromItemsBeingDeleted;
-(void)_prepareWithTriggeringItems:(id)arg1 triggeringVisits:(id)arg2 ;
-(id)_extraVisitsToDeleteWhenDeletingItems:(id)arg1 visits:(id)arg2 ;
-(id)_extraVisitsToDeleteWhenDeletingItems:(id)arg1 visits:(id)arg2 relatedVisitKey:(id)arg3 relatedVisitsQueryFactory:(/*^block*/id)arg4 ;
-(id)initWithSQLiteStore:(id)arg1 triggeringVisits:(id)arg2 excludingItems:(id)arg3 visits:(id)arg4 ;
-(NSSet *)triggeringItems;
-(NSSet *)triggeringVisits;
-(NSSet *)discoveredVisitsToDelete;
-(BOOL)wasPrepared;
@end

