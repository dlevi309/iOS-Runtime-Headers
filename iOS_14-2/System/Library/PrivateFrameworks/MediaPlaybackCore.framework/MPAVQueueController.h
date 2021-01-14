/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) BOOL autoPlayEnabled; 
@property (nonatomic,readonly) unsigned long long supportedInsertionPositions; 
@property (nonatomic,readonly) BOOL userCanChangeShuffleAndRepeatType; 
@property (assign,nonatomic) BOOL allowsQueueModifications; 
@property (nonatomic,readonly) BOOL userCanEnableAutoPlay; 
@property (nonatomic,copy,readonly) NSString * preferredFirstContentItemID; 
@optional
-(id)contentItemIDsFromOffset:(long long)arg1 toOffset:(long long)arg2 nowPlayingIndex:(long long*)arg3;

@required
-(long long)shuffleType;
-(void)reshuffle;
-(unsigned long long)supportedInsertionPositions;
-(NSString *)preferredFirstContentItemID;
-(BOOL)hasUserMutations;
-(void)setQueueCoordinator:(id)arg1;
-(void)addPlaybackContext:(id)arg1 atPosition:(long long)arg2 jumpToIt:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(long long)displayIndexForContentItemID:(id)arg1;
-(BOOL)userCanEnableAutoPlay;
-(id<MPAVQueueCoordinating>)queueCoordinator;
-(id<MPAVQueueControllerDelegate>)delegate;
-(void)moveContentItemID:(id)arg1 afterContentItemID:(id)arg2 completion:(/*^block*/id)arg3;
-(id)contentItemIDWithCurrentItemOffset:(long long)arg1 mode:(long long)arg2 didReachEnd:(BOOL*)arg3;
-(void)clearUpNext;
-(void)player:(id)arg1 currentItemDidChangeFromItem:(id)arg2 toItem:(id)arg3;
-(NSString *)uniqueIdentifier;
-(id)itemForContentItemID:(id)arg1;
-(BOOL)allowsQueueModifications;
-(void)jumpToContentItemID:(id)arg1 userInitiated:(BOOL)arg2;
-(void)setAutoPlayEnabled:(BOOL)arg1;
-(void)setDelegate:(id)arg1;
-(void)addPlaybackContext:(id)arg1 atPosition:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)jumpToFirstContentItem;
-(long long)repeatType;
-(BOOL)autoPlayEnabled;
-(void)removeContentItemID:(id)arg1 completion:(/*^block*/id)arg2;
-(MPAVItem *)currentItem;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)addPlaybackContext:(id)arg1 afterContentItemID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setShuffleType:(long long)arg1;
-(id)contentItemIDAtIndex:(long long)arg1;
-(void)addPlaybackContext:(id)arg1 atPosition:(long long)arg2 jumpToIt:(BOOL)arg3 userModification:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(void)reset;
-(long long)displayCount;
-(BOOL)userCanChangeShuffleAndRepeatType;
-(BOOL)isPlaceholderItemForContentItemID:(id)arg1;
-(void)jumpToContentItemID:(id)arg1;
-(void)setRepeatType:(long long)arg1;
-(BOOL)canSkipItem:(id)arg1;
-(void)moveContentItemID:(id)arg1 beforeContentItemID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setAllowsQueueModifications:(BOOL)arg1;
-(void)updateLocationDependentPropertiesForItem:(id)arg1;

@end

