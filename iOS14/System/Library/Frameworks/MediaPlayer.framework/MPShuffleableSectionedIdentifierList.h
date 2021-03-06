/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPSectionedIdentifierList.h>
#import <libobjc.A.dylib/_MPSSILDelegate.h>

@class _MPSSILImplementation, NSString;

@interface MPShuffleableSectionedIdentifierList : MPSectionedIdentifierList <_MPSSILDelegate> {

	_MPSSILImplementation* _shuffledList;
	long long _shuffleType;
	NSString* _shuffleStartingSectionIdentifier;
	NSString* _shuffleStartingItemIdentifier;

}

@property (nonatomic,copy) NSString * shuffleStartingSectionIdentifier;                                     //@synthesize shuffleStartingSectionIdentifier=_shuffleStartingSectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * shuffleStartingItemIdentifier;                                        //@synthesize shuffleStartingItemIdentifier=_shuffleStartingItemIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<MPShuffleableSectionedIdentifierListDelegate> delegate; 
@property (assign,nonatomic) long long shuffleType;                                                         //@synthesize shuffleType=_shuffleType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(long long)shuffleType;
-(NSString *)debugDescription;
-(void)setShuffleType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)didDequeueShuffledItemsInSSIL:(id)arg1 ;
-(void)safelyReshuffleAfterItem:(id)arg1 inSection:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 withExclusiveAccessToken:(id)arg2 ;
-(void)setShuffleType:(long long)arg1 startingItem:(id)arg2 inSection:(id)arg3 ;
-(void)setShuffleType:(long long)arg1 startingItem:(id)arg2 inSection:(id)arg3 randomSource:(id)arg4 ;
-(void)addDataSourceAtStart:(id)arg1 section:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)enumeratorWithOptions:(unsigned long long)arg1 startPosition:(id)arg2 endPosition:(id)arg3 withExclusiveAccessToken:(id)arg4 ;
-(void)removeItem:(id)arg1 fromSection:(id)arg2 ;
-(void)addDataSource:(id)arg1 section:(id)arg2 afterItem:(id)arg3 inSection:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)addDataSourceAtEnd:(id)arg1 section:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addDataSource:(id)arg1 section:(id)arg2 afterTailOfSection:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)moveItem:(id)arg1 fromSection:(id)arg2 afterItem:(id)arg3 inSection:(id)arg4 ;
-(void)addDataSourceAtStart:(id)arg1 section:(id)arg2 sequentially:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)replaceDataSource:(id)arg1 forSection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(BOOL)arg3 afterItem:(id)arg4 inSection:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)moveItemToStart:(id)arg1 fromSection:(id)arg2 ;
-(void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(BOOL)arg3 afterTailOfSection:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)moveItemToEnd:(id)arg1 fromSection:(id)arg2 ;
-(void)addDataSourceAtEnd:(id)arg1 section:(id)arg2 sequentially:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)moveItem:(id)arg1 fromSection:(id)arg2 afterHeadOfSection:(id)arg3 ;
-(void)moveItem:(id)arg1 fromSection:(id)arg2 afterTailOfSection:(id)arg3 ;
-(long long)_itemCountWithExclusiveAccessToken:(id)arg1 ;
-(void)dataSourceInsertItemsAtHead:(id)arg1 inSection:(id)arg2 ;
-(void)dataSourceInsertItems:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3 ;
-(void)dataSourceInsertItemsAtTail:(id)arg1 inSection:(id)arg2 ;
-(void)dataSourceRemoveItem:(id)arg1 fromSection:(id)arg2 ;
-(void)dataSourceReloadItem:(id)arg1 inSection:(id)arg2 ;
-(id)_candidateItemsWithExclusiveAccessToken:(id)arg1 ;
-(void)_dequeueCandidatesWithQuota:(long long)arg1 withExclusiveAccessToken:(id)arg2 ;
-(id)_shuffledListWithExclusiveAccessToken:(id)arg1 ;
-(void)addDataSource:(id)arg1 section:(id)arg2 afterHeadOfSection:(id)arg3 ;
-(NSString *)shuffleStartingSectionIdentifier;
-(void)setShuffleStartingSectionIdentifier:(NSString *)arg1 ;
-(NSString *)shuffleStartingItemIdentifier;
-(void)setShuffleStartingItemIdentifier:(NSString *)arg1 ;
@end

