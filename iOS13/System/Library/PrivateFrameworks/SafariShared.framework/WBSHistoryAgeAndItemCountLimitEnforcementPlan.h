/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSHistoryStore;
@class NSSet, WBSHistoryDeletionPlan;

@interface WBSHistoryAgeAndItemCountLimitEnforcementPlan : NSObject {

	id<WBSHistoryStore> _store;
	NSSet* _items;
	double _ageLimit;
	unsigned long long _itemCountLimit;
	long long _reason;
	NSSet* _itemsToKeep;
	NSSet* _itemsToDiscard;
	WBSHistoryDeletionPlan* _deletionPlan;

}

@property (nonatomic,readonly) NSSet * itemsToKeep;                                //@synthesize itemsToKeep=_itemsToKeep - In the implementation block
@property (nonatomic,readonly) NSSet * itemsToDiscard;                             //@synthesize itemsToDiscard=_itemsToDiscard - In the implementation block
@property (nonatomic,readonly) WBSHistoryDeletionPlan * deletionPlan;              //@synthesize deletionPlan=_deletionPlan - In the implementation block
-(void)execute;
-(void)prepare;
-(id)_itemsToDiscard;
-(id)initWithSQLiteStore:(id)arg1 items:(id)arg2 ageLimit:(double)arg3 itemCountLimit:(unsigned long long)arg4 reason:(long long)arg5 ;
-(NSSet *)itemsToKeep;
-(NSSet *)itemsToDiscard;
-(WBSHistoryDeletionPlan *)deletionPlan;
@end

