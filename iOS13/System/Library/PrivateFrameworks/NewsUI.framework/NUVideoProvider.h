/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/SVVideo.h>
#import <libobjc.A.dylib/SVVideoProviding.h>

@protocol NUVideoItem, SVVideoMetadata, NUVideoEventTracker;
@class NSString;

@interface NUVideoProvider : NSObject <SVVideo, SVVideoProviding> {

	NSString* _identifier;
	id<NUVideoItem> _videoItem;
	id<SVVideoMetadata> _metadata;
	id<NUVideoEventTracker> _eventTracker;

}

@property (nonatomic,retain) id<SVVideoMetadata> metadata;                                                 //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) id<NUVideoEventTracker> eventTracker;                                         //@synthesize eventTracker=_eventTracker - In the implementation block
@property (getter=areNeighboringAdsAllowed,nonatomic,readonly) BOOL neighboringAdsAreAllowed; 
@property (nonatomic,copy,readonly) id<NUVideoItem> videoItem;                                             //@synthesize videoItem=_videoItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier;                                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long videoType; 
@property (nonatomic,readonly) BOOL allowsCallToActionBar; 
-(NSString *)identifier;
-(void)setMetadata:(id<SVVideoMetadata>)arg1 ;
-(id<SVVideoMetadata>)metadata;
-(id<NUVideoEventTracker>)eventTracker;
-(/*^block*/id)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)didAppear;
-(void)playbackStarted;
-(void)playbackPaused;
-(void)playbackResumed;
-(unsigned long long)videoType;
-(id<NUVideoItem>)videoItem;
-(void)playbackFinished;
-(void)didDisappear;
-(void)setEventTracker:(id<NUVideoEventTracker>)arg1 ;
-(void)playbackFailedWithError:(id)arg1 ;
-(void)muteStateChanged:(BOOL)arg1 ;
-(void)tappedNowPlaying;
-(void)tappedAdvance;
-(BOOL)allowsCallToActionBar;
-(void)tappedDiscoverMore;
-(void)playbackInitiated;
-(void)tappedCallToAction;
-(id)videoMetadataForCurrentState;
-(id)initWithVideoItem:(id)arg1 eventTracker:(id)arg2 ;
-(BOOL)areNeighboringAdsAllowed;
-(void)tappedReplay;
@end

