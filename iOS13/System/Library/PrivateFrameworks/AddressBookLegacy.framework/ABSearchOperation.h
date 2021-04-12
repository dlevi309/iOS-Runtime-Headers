/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/

#import <Foundation/NSOperation.h>

@protocol ABSearchOperationDelegate;
@class NSThread, NSPredicate, NSArray;

@interface ABSearchOperation : NSOperation {

	void* _addressBook;
	void* _internalSearchAddressBook;
	/*^block*/id _progressBlock;
	NSThread* _progressBlockThread;
	void* _context;
	id<ABSearchOperationDelegate> _delegate;
	unsigned _sortOrdering;
	NSPredicate* _predicate;
	NSArray* _prefetchProperties;

}

@property (nonatomic,copy) id progressBlock;                                      //@synthesize progressBlock=_progressBlock - In the implementation block
@property (assign,nonatomic) void* internalSearchAddressBook; 
@property (assign,nonatomic) void* addressBook; 
@property (nonatomic,retain) NSPredicate * predicate;                             //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * prefetchProperties;                          //@synthesize prefetchProperties=_prefetchProperties - In the implementation block
@property (assign,nonatomic) id<ABSearchOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) void* context;                                       //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) unsigned sortOrdering;                               //@synthesize sortOrdering=_sortOrdering - In the implementation block
+(id)personPredicateWithNameLike:(id)arg1 inSource:(void*)arg2 addressBook:(void*)arg3 ;
+(id)personPredicateWithNameLike:(id)arg1 inGroups:(id)arg2 sources:(id)arg3 addressBook:(void*)arg4 ;
+(id)personPredicateWithValue:(id)arg1 comparison:(long long)arg2 forProperty:(int)arg3 addressBook:(void*)arg4 ;
+(id)personPredicateWithPhoneLike:(id)arg1 countryHint:(id)arg2 addressBook:(void*)arg3 ;
+(id)personPredicateWithNameLike:(id)arg1 addressBook:(void*)arg2 ;
+(id)personPredicateWithName:(id)arg1 addressBook:(void*)arg2 ;
+(id)personPredicateWithNameLike:(id)arg1 inGroup:(void*)arg2 addressBook:(void*)arg3 ;
+(id)personPredicateWithNameLike:(id)arg1 inSource:(void*)arg2 includeSourceInResults:(BOOL)arg3 addressBook:(void*)arg4 ;
+(id)personPredicateWithNameLike:(id)arg1 inSource:(void*)arg2 includeSourceInResults:(BOOL)arg3 includePhotosInResults:(BOOL)arg4 addressBook:(void*)arg5 ;
+(id)personPredicateWithNameLike:(id)arg1 inAccount:(id)arg2 addressBook:(void*)arg3 ;
+(id)personPredicateWithNameOnly:(id)arg1 inAccount:(id)arg2 addressBook:(void*)arg3 ;
+(id)personPredicateWithAnyValueForProperty:(int)arg1 addressBook:(void*)arg2 ;
+(id)personPredicateWithGroup:(void*)arg1 addressBook:(void*)arg2 ;
-(void)dealloc;
-(id<ABSearchOperationDelegate>)delegate;
-(void)setDelegate:(id<ABSearchOperationDelegate>)arg1 ;
-(void)cancel;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)main;
-(BOOL)isConcurrent;
-(void*)context;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(void)setContext:(void*)arg1 ;
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1 ;
-(unsigned)sortOrdering;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
-(BOOL)predicateShouldContinue:(id)arg1 ;
-(void*)internalSearchAddressBook;
-(void)_mainThread_tellDelegateSearchFoundMatch:(void*)arg1 ;
-(void)setInternalSearchAddressBook:(void*)arg1 ;
-(NSArray *)prefetchProperties;
-(void)setPrefetchProperties:(NSArray *)arg1 ;
-(void)setSortOrdering:(unsigned)arg1 ;
@end

