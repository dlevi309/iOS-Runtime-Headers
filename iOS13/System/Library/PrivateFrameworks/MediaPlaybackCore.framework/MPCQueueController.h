/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPShuffleableSectionedIdentifierListDelegate.h>
#import <libobjc.A.dylib/MPSectionedIdentifierListAnnotationDelegate.h>
#import <libobjc.A.dylib/MPAVQueueController.h>
#import <libobjc.A.dylib/MSVSegmentedCoding.h>

@protocol MPAVQueueControllerDelegate, MPAVQueueCoordinating;
@class NSString, MPAVItem, NSUserDefaults, NSError, NSMutableDictionary, MPShuffleableSectionedIdentifierList;

@interface MPCQueueController : NSObject <MPShuffleableSectionedIdentifierListDelegate, MPSectionedIdentifierListAnnotationDelegate, MPAVQueueController, MSVSegmentedCoding> {

	unsigned long long _stateHandle;
	NSUserDefaults* _defaults;
	BOOL _hasUserMutations;
	BOOL _allowsQueueModifications;
	MPAVItem* _currentItem;
	id<MPAVQueueControllerDelegate> _delegate;
	id<MPAVQueueCoordinating> _queueCoordinator;
	long long _repeatType;
	long long _shuffleType;
	NSString* _nextContentItemID;
	NSString* _deferredNextContentItemAnchorID;
	NSError* _restorationError;
	NSMutableDictionary* _coderVersions;
	long long _nextContentItemIDReason;
	long long _state;
	MPShuffleableSectionedIdentifierList* _identifierList;
	NSMutableDictionary* _dataSources;

}

@property (nonatomic,copy) NSString * nextContentItemID;                                         //@synthesize nextContentItemID=_nextContentItemID - In the implementation block
@property (nonatomic,copy) NSString * deferredNextContentItemAnchorID;                           //@synthesize deferredNextContentItemAnchorID=_deferredNextContentItemAnchorID - In the implementation block
@property (nonatomic,copy) NSError * restorationError;                                           //@synthesize restorationError=_restorationError - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * coderVersions;                                //@synthesize coderVersions=_coderVersions - In the implementation block
@property (assign,nonatomic) long long nextContentItemIDReason;                                  //@synthesize nextContentItemIDReason=_nextContentItemIDReason - In the implementation block
@property (assign,nonatomic) long long state;                                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) MPShuffleableSectionedIdentifierList * identifierList;              //@synthesize identifierList=_identifierList - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dataSources;                                  //@synthesize dataSources=_dataSources - In the implementation block
@property (nonatomic,readonly) BOOL containsTransportableContent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) BOOL hasUserMutations;                                            //@synthesize hasUserMutations=_hasUserMutations - In the implementation block
@property (nonatomic,readonly) MPAVItem * currentItem;                                           //@synthesize currentItem=_currentItem - In the implementation block
@property (assign,nonatomic,__weak) id<MPAVQueueControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<MPAVQueueCoordinating> queueCoordinator;                         //@synthesize queueCoordinator=_queueCoordinator - In the implementation block
@property (nonatomic,readonly) long long displayCount; 
@property (assign,nonatomic) long long repeatType;                                               //@synthesize repeatType=_repeatType - In the implementation block
@property (assign,nonatomic) long long shuffleType;                                              //@synthesize shuffleType=_shuffleType - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedInsertionPositions; 
@property (nonatomic,readonly) BOOL userCanChangeShuffleAndRepeatType; 
@property (assign,nonatomic) BOOL allowsQueueModifications;                                      //@synthesize allowsQueueModifications=_allowsQueueModifications - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)describePlayer:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<MPAVQueueControllerDelegate>)delegate;
-(void)setDelegate:(id<MPAVQueueControllerDelegate>)arg1 ;
-(long long)state;
-(void)reset;
-(NSString *)uniqueIdentifier;
-(void)setState:(long long)arg1 ;
-(NSMutableDictionary *)dataSources;
-(MPAVItem *)currentItem;
-(void)setDataSources:(NSMutableDictionary *)arg1 ;
-(id)contentItemIDWithCurrentItemOffset:(long long)arg1 mode:(long long)arg2 didReachEnd:(BOOL*)arg3 ;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<MPAVQueueCoordinating>)queueCoordinator;
-(void)setQueueCoordinator:(id<MPAVQueueCoordinating>)arg1 ;
-(void)player:(id)arg1 currentItemDidChangeFromItem:(id)arg2 toItem:(id)arg3 ;
-(void)jumpToContentItemID:(id)arg1 ;
-(long long)shuffleType;
-(long long)repeatType;
-(void)didDequeueShuffledItemsInSectionedIdentifierList:(id)arg1 ;
-(void)sectionedIdentifierList:(id)arg1 dataSourceDidChangeItems:(id)arg2 inSection:(id)arg3 ;
-(void)sectionedIdentifierList:(id)arg1 dataSourceDidAddItems:(id)arg2 toSection:(id)arg3 ;
-(void)sectionedIdentifierList:(id)arg1 dataSourceDidUpdateSection:(id)arg2 ;
-(void)setShuffleType:(long long)arg1 ;
-(unsigned long long)supportedInsertionPositions;
-(void)setRepeatType:(long long)arg1 ;
-(void)reloadItemsKeepingCurrentItem:(BOOL)arg1 ;
-(void)queueCoordinatorDidChangeItems:(id)arg1 ;
-(id)queueCoordinator:(id)arg1 itemToFollowItem:(id)arg2 ;
-(void)queueCoordinator:(id)arg1 failedToLoadItem:(id)arg2 ;
-(void)reshuffle;
-(id)debugDescriptionForItem:(id)arg1 inSection:(id)arg2 ;
-(id)debugDescriptionForSection:(id)arg1 ;
-(id)segmentForCodingKey:(id)arg1 ;
-(long long)versionForSegment:(id)arg1 ;
-(void)didRestoreVersion:(long long)arg1 forSegment:(id)arg2 ;
-(BOOL)containsTransportableContent;
-(BOOL)canSkipItem:(id)arg1 ;
-(long long)displayIndexForContentItemID:(id)arg1 ;
-(long long)displayCount;
-(id)contentItemIDAtIndex:(long long)arg1 ;
-(id)itemForContentItemID:(id)arg1 ;
-(BOOL)allowsQueueModifications;
-(void)setAllowsQueueModifications:(BOOL)arg1 ;
-(void)removeContentItemID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addPlaybackContext:(id)arg1 atPosition:(long long)arg2 jumpToIt:(BOOL)arg3 userModification:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)addPlaybackContext:(id)arg1 afterContentItemID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)userCanChangeShuffleAndRepeatType;
-(id)firstContentItemIDForItemIntersectingIdentifierSet:(id)arg1 ;
-(void)addPlaybackContext:(id)arg1 atPosition:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)moveContentItemID:(id)arg1 afterContentItemID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasUserMutations;
-(void)addPlaybackContext:(id)arg1 atPosition:(long long)arg2 jumpToIt:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)finalizeStateRestorationWithAccountManager:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isPlaceholderItemForContentItemID:(id)arg1 ;
-(id)contentItemIDsFromOffset:(long long)arg1 toOffset:(long long)arg2 nowPlayingIndex:(long long*)arg3 ;
-(void)updateLocationDependentPropertiesForItem:(id)arg1 ;
-(MPShuffleableSectionedIdentifierList *)identifierList;
-(id)_stateDictionaryIncludingIdentifierList:(BOOL)arg1 ;
-(void)_highQualityMusicStreamingOnCellularDidChange:(id)arg1 ;
-(void)_soundCheckEnabledChangedNotification:(id)arg1 ;
-(void)_addPlaybackContext:(id)arg1 atPosition:(long long)arg2 afterContentItemID:(id)arg3 sectionIdentifier:(id)arg4 actions:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(NSError *)restorationError;
-(id)_itemForContentItemID:(id)arg1 allowReuse:(BOOL)arg2 ;
-(void)incrementVersionForSegment:(id)arg1 ;
-(id)_firstContentItemID;
-(void)setNextContentItemIDReason:(long long)arg1 ;
-(void)_applyVolumeNormalizationForQueuedItems;
-(NSString *)deferredNextContentItemAnchorID;
-(BOOL)_allDataSourcesSupportInsertionPositionLast;
-(void)resetWithIdentifier:(id)arg1 ;
-(id)_nextValidIdentifierPairStartingAtContentItemID:(id)arg1 wasInvalid:(BOOL*)arg2 ;
-(id)_itemForPair:(id)arg1 ;
-(id)_firstContentItemIDInSectionWithIdentifier:(id)arg1 ;
-(void)jumpToFirstContentItem;
-(NSString *)nextContentItemID;
-(void)setNextContentItemID:(NSString *)arg1 ;
-(void)setDeferredNextContentItemAnchorID:(NSString *)arg1 ;
-(void)setRestorationError:(NSError *)arg1 ;
-(NSMutableDictionary *)coderVersions;
-(void)setCoderVersions:(NSMutableDictionary *)arg1 ;
-(long long)nextContentItemIDReason;
-(void)setIdentifierList:(MPShuffleableSectionedIdentifierList *)arg1 ;
@end

