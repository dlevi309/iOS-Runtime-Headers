/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPShuffleableSectionedIdentifierListDataSource.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MPCQueueControllerDataSourceMPCQueueControllerDataSourceStateRestoring;
@class MPPlaceholderAVItem, MPPlaybackContext, NSString;

@interface _MPCQueueControllerDataSourceState : NSObject <MPShuffleableSectionedIdentifierListDataSource, NSSecureCoding> {

	SCD_Struct_MP9 _supportedMethods;
	BOOL _frozen;
	os_unfair_lock_s _stateLock;
	MPPlaceholderAVItem* _tailPlaceholderItem;
	id<MPCQueueControllerDataSource><MPCQueueControllerDataSourceStateRestoring> _dataSource;
	MPPlaybackContext* _playbackContext;
	MPPlaybackContext* _originalPlaybackContext;
	long long _state;
	NSString* _sectionIdentifier;
	NSString* _preferredStartItemIdentifier;
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id<MPCQueueControllerDataSource><MPCQueueControllerDataSourceStateRestoring>)dataSource;
-(BOOL)isFrozen;
-(void)setFrozen:(BOOL)arg1 ;
-(os_unfair_lock_s)stateLock;
-(NSString *)sectionIdentifier;
-(long long)supplementalPlaybackContextBehavior;
-(BOOL)section:(id)arg1 shouldShuffleExcludeItem:(id)arg2 ;
-(id)initWithPlaybackContext:(id)arg1 ;
-(void)reloadSection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(MPPlaybackContext *)playbackContext;
-(BOOL)section:(id)arg1 supportsShuffleType:(long long)arg2 ;
-(id)itemForItem:(id)arg1 inSection:(id)arg2 ;
-(BOOL)containsLiveStream;
-(void)itemDidBeginPlayback:(id)arg1 ;
-(BOOL)canSkipItem:(id)arg1 ;
-(BOOL)shouldUsePlaceholderForItem:(id)arg1 inSection:(id)arg2 ;
-(id)firstItemIntersectingIdentifierSet:(id)arg1 ;
-(BOOL)shouldRequestAdditionalItemsAtTail;
-(void)_buildPlaceholder;
-(void)_inLock_buildPlaceholder;
-(BOOL)shouldAddOriginalPlaybackContextAfterReplacement;
-(BOOL)shouldShowPlaceholderAtTail;
-(void)loadAdditionalItemsIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(MPPlaceholderAVItem *)tailPlaceholderItem;
-(void)updatePlaybackContext;
-(MPPlaybackContext *)originalPlaybackContext;
-(NSString *)preferredStartItemIdentifier;
-(MPPlaybackContext *)supplementalPlaybackContext;
@end

