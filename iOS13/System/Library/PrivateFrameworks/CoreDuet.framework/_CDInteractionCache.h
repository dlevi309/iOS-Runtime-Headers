/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


#import <CoreDuet/CoreDuet-Structs.h>
@class _CDInteractionStore, NSPredicate, NSMutableOrderedSet, NSArray;

@interface _CDInteractionCache : NSObject {

	os_unfair_lock_s _lock;
	_CDInteractionStore* _interactionStore;
	unsigned long long _size;
	NSPredicate* _predicate;
	/*^block*/id _filterBlock;
	NSMutableOrderedSet* _mutableInteractions;

}

@property (nonatomic,readonly) NSMutableOrderedSet * mutableInteractions;              //@synthesize mutableInteractions=_mutableInteractions - In the implementation block
@property (nonatomic,readonly) _CDInteractionStore * interactionStore;                 //@synthesize interactionStore=_interactionStore - In the implementation block
@property (nonatomic,readonly) unsigned long long size;                                //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSPredicate * predicate;                                //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) id filterBlock;                                         //@synthesize filterBlock=_filterBlock - In the implementation block
@property (nonatomic,copy,readonly) NSArray * interactions; 
-(unsigned long long)size;
-(NSPredicate *)predicate;
-(void)_refetch;
-(void)interactionsRecorded:(id)arg1 ;
-(void)refetch;
-(_CDInteractionStore *)interactionStore;
-(void)_cacheInteractions:(id)arg1 ;
-(id)filterBlock;
-(NSMutableOrderedSet *)mutableInteractions;
-(id)initWithInteractionStore:(id)arg1 size:(unsigned long long)arg2 queryPredicate:(id)arg3 filterBlock:(/*^block*/id)arg4 ;
-(NSArray *)interactions;
@end

