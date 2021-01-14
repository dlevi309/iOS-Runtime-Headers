/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPShuffleableSectionedIdentifierListDataSource.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MPCQueueControllerDataSourceMPCQueueControllerDataSourceStateRestoring;
@class MPPlaceholderAVItem, MPPlaybackContext, NSString, MPCPlaybackEngineEventStream;

@interface _MPCQueueControllerDataSourceState : NSObject <MPShuffleableSectionedIdentifierListDataSource, NSSecureCoding> {

	SCD_Struct_MP10 _supportedMethods;
	BOOL _frozen;
	os_unfair_lock_s _stateLock;
	MPPlaceholderAVItem* _tailPlaceholderItem;
	id<MPCQueueControllerDataSource><MPCQueueControllerDataSourceStateRestoring> _dataSource;
	MPPlaybackContext* _playbackContext;
	MPPlaybackContext* _originalPlaybackContext;
	long long _state;
	NSString* _sectionIdentifier;
	NSString* _preferredStartItemIdentifier;
	MPCPlaybackEngineEventStream* _eventStream;
	long long _supplementalPlaybackContextBehavior;
	MPPlaybackContext* _supplementalPlaybackContext;

}

@property (nonatomic,readonly) os_unfair_lock_s stateLock;                                                                           //@synthesize stateLock=_stateLock - In the implementation block
@property (nonatomic,readonly) long long supplementalPlaybackContextBehavior;                                                        //@synthesize supplementalPlaybackContextBehavior=_supplementalPlaybackContextBehavior - In the implementation block
@property (nonatomic,readonly) MPPlaybackContext * supplementalPlaybackContext;                                                      //@synthesize supplementalPlaybackContext=_supplementalPlaybackContext - In the implementation block
@property (nonatomic,readonly) id<MPCQueueControllerDataSource><MPCQueueControllerDataSourceStateRestoring> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) MPPlaybackContext * playbackContext;                                                                  //@synthesize playbackContext=_playbackContext - In the implementation block
@property (nonatomic,readonly) BOOL shouldAddOriginalPlaybackContextAfterReplacement; 
@property (nonatomic,readonly) MPPlaybackContext * originalPlaybackContext;                                                          //@synthesize originalPlaybackContext=_originalPlaybackContext - In the implementation block
@property (assign,nonatomic) long long state;                                                                                        //@synthesize state=_state - In the implementation block
@property (assign,getter=isFrozen,nonatomic) BOOL frozen;                                                                            //@synthesize frozen=_frozen - In the implementation block
@property (nonatomic,readonly) NSString * sectionIdentifier;                                                                         //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * preferredStartItemIdentifier;                                                              //@synthesize preferredStartItemIdentifier=_preferredStartItemIdentifier - In the implementation block
@property (nonatomic,readonly) MPPlaceholderAVItem * tailPlaceholderItem;                                                            //@synthesize tailPlaceholderItem=_tailPlaceholderItem - In the implementation block
@property (nonatomic,readonly) BOOL containsLiveStream; 
@property (assign,nonatomic,__weak) MPCPlaybackEngineEventStream * eventStream;                                                      //@synthesize eventStream=_eventStream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setFrozen:(BOOL)arg1 ;
-(MPCPlaybackEngineEventStream *)eventStream;
-(NSString *)sectionIdentifier;
-(id)initWithPlaybackContext:(id)arg1 ;
-(void)reloadSection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id<MPCQueueControllerDataSource><MPCQueueControllerDataSourceStateRestoring>)dataSource;
-(NSString *)description;
-(long long)supplementalPlaybackContextBehavior;
-(os_unfair_lock_s)stateLock;
-(void)setState:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(MPPlaybackContext *)playbackContext;
-(void)setEventStream:(MPCPlaybackEngineEventStream *)arg1 ;
-(BOOL)canSkipItem:(id)arg1 ;
-(BOOL)section:(id)arg1 shouldShuffleExcludeItem:(id)arg2 ;
-(BOOL)isFrozen;
-(BOOL)section:(id)arg1 supportsShuffleType:(long long)arg2 ;
-(id)itemForItem:(id)arg1 inSection:(id)arg2 ;
-(BOOL)containsLiveStream;
-(void)itemDidBeginPlayback:(id)arg1 ;
-(BOOL)shouldUsePlaceholderForItem:(id)arg1 inSection:(id)arg2 ;
-(id)firstItemIntersectingIdentifierSet:(id)arg1 ;
-(MPPlaybackContext *)originalPlaybackContext;
-(MPPlaybackContext *)supplementalPlaybackContext;
-(BOOL)shouldRequestAdditionalItemsAtTail;
-(void)_buildPlaceholder;
-(void)_inLock_buildPlaceholder;
-(BOOL)shouldAddOriginalPlaybackContextAfterReplacement;
-(long long)prefetchThreshold;
-(BOOL)shouldShowPlaceholderAtTail;
-(void)loadAdditionalItemsIfNeededWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(MPPlaceholderAVItem *)tailPlaceholderItem;
-(void)updatePlaybackContext;
-(NSString *)preferredStartItemIdentifier;
@end

