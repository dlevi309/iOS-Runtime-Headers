/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

@class NSString, MPAVItem;


@protocol MPAVQueueController <MPAVQueueCoordinatingDataSource>
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) BOOL hasUserMutations; 
@property (nonatomic,readonly) MPAVItem * currentItem; 
@property (assign,nonatomic,__weak) id<MPAVQueueControllerDelegate> delegate; 
@property (nonatomic,retain) id<MPAVQueueCoordinating> queueCoordinator; 
@property (nonatomic,readonly) long long displayCount; 
@property (assign,nonatomic) long long repeatType; 
@property (assign,nonatomic) long long shuffleType; 
@property (nonatomic,readonly) unsigned long long supportedInsertionPositions; 
@property (nonatomic,readonly) BOOL userCanChangeShuffleAndRepeatType; 
@property (assign,nonatomic) BOOL allowsQueueModifications; 
@optional
-(id)contentItemIDsFromOffset:(long long)arg1 toOffset:(long long)arg2 nowPlayingIndex:(long long*)arg3;

@required
-(id<MPAVQueueControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)reset;
-(NSString *)uniqueIdentifier;
-(MPAVItem *)currentItem;
-(id)contentItemIDWithCurrentItemOffset:(long long)arg1 mode:(long long)arg2 didReachEnd:(BOOL*)arg3;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id<MPAVQueueCoordinating>)queueCoordinator;
-(void)setQueueCoordinator:(id)arg1;
-(void)player:(id)arg1 currentItemDidChangeFromItem:(id)arg2 toItem:(id)arg3;
-(void)jumpToContentItemID:(id)arg1;
-(long long)shuffleType;
-(long long)repeatType;
-(void)setShuffleType:(long long)arg1;
-(unsigned long long)supportedInsertionPositions;
-(void)setRepeatType:(long long)arg1;
-(void)reshuffle;
-(BOOL)canSkipItem:(id)arg1;
-(long long)displayIndexForContentItemID:(id)arg1;
-(long long)displayCount;
-(id)contentItemIDAtIndex:(long long)arg1;
-(id)itemForContentItemID:(id)arg1;
-(BOOL)allowsQueueModifications;
-(void)setAllowsQueueModifications:(BOOL)arg1;
-(void)removeContentItemID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addPlaybackContext:(id)arg1 atPosition:(long long)arg2 jumpToIt:(BOOL)arg3 userModification:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(void)addPlaybackContext:(id)arg1 afterContentItemID:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)userCanChangeShuffleAndRepeatType;
-(void)addPlaybackContext:(id)arg1 atPosition:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)moveContentItemID:(id)arg1 afterContentItemID:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)hasUserMutations;
-(void)addPlaybackContext:(id)arg1 atPosition:(long long)arg2 jumpToIt:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(BOOL)isPlaceholderItemForContentItemID:(id)arg1;
-(void)updateLocationDependentPropertiesForItem:(id)arg1;
-(void)jumpToFirstContentItem;

@end

