/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableOrderedSet *)mutableInteractions;
-(_CDInteractionStore *)interactionStore;
-(NSPredicate *)predicate;
-(unsigned long long)size;
-(id)initWithInteractionStore:(id)arg1 size:(unsigned long long)arg2 queryPredicate:(id)arg3 filterBlock:(/*^block*/id)arg4 ;
-(void)refetch;
-(void)_refetch;
-(void)_cacheInteractions:(id)arg1 ;
-(void)interactionsRecorded:(id)arg1 ;
-(NSArray *)interactions;
-(id)filterBlock;
@end

