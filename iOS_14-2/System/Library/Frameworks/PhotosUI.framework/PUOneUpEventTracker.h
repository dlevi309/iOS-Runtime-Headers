/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXViewControllerEventTracker.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingVideoPlayerChangeObserver.h>
#import <libobjc.A.dylib/PUOneUpEventTracker.h>

@protocol PUOneUpEventTracker <PXViewControllerEventTracker>
@required
-(void)logUserWillPlayLivePhoto:(id)arg1;
-(void)logUserDidPlayLivePhoto:(id)arg1;
-(void)logVitalityDidEndForLivePhoto:(id)arg1;
-(void)logAppliedEffectSuggestion:(id)arg1 toLivePhoto:(id)arg2;

@end


@protocol PUDisplayAsset;
@class PUBrowsingViewModel, NSString, PXAssetAnalyzer, PXAssetMetadataDonator, PUBrowsingVideoPlayer, NSMutableDictionary;

@interface PUOneUpEventTracker : PXViewControllerEventTracker <PXChangeObserver, PUBrowsingViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PUOneUpEventTracker> {

	BOOL _isSessionActive;
	BOOL _currentlyStreamingVideoIsActuallyPlaying;
	BOOL _currentlyStreamingVideoIsStalled;
	BOOL _currentlyStreamingVideoDidStartActualPlayback;
	PUBrowsingViewModel* _viewModel;
	long long _presentationOrigin;
	NSString* _viewClassName;
	long long _sessionSignpost;
	id<PUDisplayAsset> _currentlyViewedAsset;
	double _currentlyViewedAssetTimestamp;
	long long _currentlyViewedAssetGeneration;
	long long _currentAssetSignpost;
	long long _currentAssetDisplayIntervalSignpost;
	PXAssetAnalyzer* _assetAnalyzer;
	PXAssetMetadataDonator* _assetMetadataDonator;
	PUBrowsingVideoPlayer* _currentVideoPlayer;
	id<PUDisplayAsset> _currentVideoAsset;
	id<PUDisplayAsset> _currentlyPlayingVideoAsset;
	double _currentlyPlayingVideoAssetTimestamp;
	id<PUDisplayAsset> _currentlyStreamingVideoAsset;
	long long _currentlyStreamingVideoStallsCount;
	long long _currentlyPlayingLivePhotoSignpost;
	long long _currentlyPlayingVideoSignpost;
	long long _currentlyPlayingStreamedVideoSignpost;
	long long _currentlyPlayingStreamedVideoStartSignpost;

}

@property (nonatomic,readonly) NSString * viewClassName;                                        //@synthesize viewClassName=_viewClassName - In the implementation block
@property (assign,nonatomic) BOOL isSessionActive;                                              //@synthesize isSessionActive=_isSessionActive - In the implementation block
@property (assign,nonatomic) long long sessionSignpost;                                         //@synthesize sessionSignpost=_sessionSignpost - In the implementation block
@property (nonatomic,retain) id<PUDisplayAsset> currentlyViewedAsset;                           //@synthesize currentlyViewedAsset=_currentlyViewedAsset - In the implementation block
@property (nonatomic,readonly) double currentlyViewedAssetTimestamp;                            //@synthesize currentlyViewedAssetTimestamp=_currentlyViewedAssetTimestamp - In the implementation block
@property (nonatomic,readonly) long long currentlyViewedAssetGeneration;                        //@synthesize currentlyViewedAssetGeneration=_currentlyViewedAssetGeneration - In the implementation block
@property (assign,nonatomic) long long currentAssetSignpost;                                    //@synthesize currentAssetSignpost=_currentAssetSignpost - In the implementation block
@property (assign,nonatomic) long long currentAssetDisplayIntervalSignpost;                     //@synthesize currentAssetDisplayIntervalSignpost=_currentAssetDisplayIntervalSignpost - In the implementation block
@property (nonatomic,readonly) PXAssetAnalyzer * assetAnalyzer;                                 //@synthesize assetAnalyzer=_assetAnalyzer - In the implementation block
@property (nonatomic,readonly) PXAssetMetadataDonator * assetMetadataDonator;                   //@synthesize assetMetadataDonator=_assetMetadataDonator - In the implementation block
@property (nonatomic,retain) PUBrowsingVideoPlayer * currentVideoPlayer;                        //@synthesize currentVideoPlayer=_currentVideoPlayer - In the implementation block
@property (nonatomic,readonly) id<PUDisplayAsset> currentVideoAsset;                            //@synthesize currentVideoAsset=_currentVideoAsset - In the implementation block
@property (nonatomic,retain) id<PUDisplayAsset> currentlyPlayingVideoAsset;                     //@synthesize currentlyPlayingVideoAsset=_currentlyPlayingVideoAsset - In the implementation block
@property (nonatomic,readonly) double currentlyPlayingVideoAssetTimestamp;                      //@synthesize currentlyPlayingVideoAssetTimestamp=_currentlyPlayingVideoAssetTimestamp - In the implementation block
@property (nonatomic,retain) id<PUDisplayAsset> currentlyStreamingVideoAsset;                   //@synthesize currentlyStreamingVideoAsset=_currentlyStreamingVideoAsset - In the implementation block
@property (assign,nonatomic) BOOL currentlyStreamingVideoIsActuallyPlaying;                     //@synthesize currentlyStreamingVideoIsActuallyPlaying=_currentlyStreamingVideoIsActuallyPlaying - In the implementation block
@property (assign,nonatomic) BOOL currentlyStreamingVideoIsStalled;                             //@synthesize currentlyStreamingVideoIsStalled=_currentlyStreamingVideoIsStalled - In the implementation block
@property (assign,nonatomic) long long currentlyStreamingVideoStallsCount;                      //@synthesize currentlyStreamingVideoStallsCount=_currentlyStreamingVideoStallsCount - In the implementation block
@property (assign,nonatomic) BOOL currentlyStreamingVideoDidStartActualPlayback;                //@synthesize currentlyStreamingVideoDidStartActualPlayback=_currentlyStreamingVideoDidStartActualPlayback - In the implementation block
@property (assign,nonatomic) long long currentlyPlayingLivePhotoSignpost;                       //@synthesize currentlyPlayingLivePhotoSignpost=_currentlyPlayingLivePhotoSignpost - In the implementation block
@property (assign,nonatomic) long long currentlyPlayingVideoSignpost;                           //@synthesize currentlyPlayingVideoSignpost=_currentlyPlayingVideoSignpost - In the implementation block
@property (assign,nonatomic) long long currentlyPlayingStreamedVideoSignpost;                   //@synthesize currentlyPlayingStreamedVideoSignpost=_currentlyPlayingStreamedVideoSignpost - In the implementation block
@property (assign,nonatomic) long long currentlyPlayingStreamedVideoStartSignpost;              //@synthesize currentlyPlayingStreamedVideoStartSignpost=_currentlyPlayingStreamedVideoStartSignpost - In the implementation block
@property (nonatomic,readonly) PUBrowsingViewModel * viewModel;                                 //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) long long presentationOrigin;                                    //@synthesize presentationOrigin=_presentationOrigin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSMutableDictionary * payload; 
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)setCurrentAssetSignpost:(long long)arg1 ;
-(id)init;
-(long long)currentlyPlayingStreamedVideoSignpost;
-(void)_logDidEndSession;
-(double)currentlyPlayingVideoAssetTimestamp;
-(void)_logDidStartPlaybackOfStreamedVideoAsset:(id)arg1 ;
-(double)currentlyViewedAssetTimestamp;
-(void)setCurrentlyViewedAsset:(id<PUDisplayAsset>)arg1 ;
-(void)logUserWillPlayLivePhoto:(id)arg1 ;
-(BOOL)currentlyStreamingVideoDidStartActualPlayback;
-(id<PUDisplayAsset>)currentlyStreamingVideoAsset;
-(void)setCurrentlyStreamingVideoAsset:(id<PUDisplayAsset>)arg1 ;
-(void)setCurrentlyPlayingLivePhotoSignpost:(long long)arg1 ;
-(void)_updateIsSessionActive;
-(void)_logDidEndPlayingVideoAsset:(id)arg1 duration:(double)arg2 ;
-(PUBrowsingViewModel *)viewModel;
-(void)setCurrentlyStreamingVideoStallsCount:(long long)arg1 ;
-(PUBrowsingVideoPlayer *)currentVideoPlayer;
-(long long)currentAssetSignpost;
-(void)_updateCurrentVideoPlayer;
-(void)_invalidateIsSessionActive;
-(void)_handleLongEnoughViewDurationWithGeneration:(long long)arg1 ;
-(void)logUserDidPlayLivePhoto:(id)arg1 ;
-(long long)currentlyViewedAssetGeneration;
-(void)logVitalityDidEndForLivePhoto:(id)arg1 ;
-(long long)presentationOrigin;
-(void)setCurrentlyStreamingVideoIsStalled:(BOOL)arg1 ;
-(void)setCurrentAssetDisplayIntervalSignpost:(long long)arg1 ;
-(BOOL)currentlyStreamingVideoIsStalled;
-(NSString *)viewClassName;
-(long long)currentlyPlayingLivePhotoSignpost;
-(long long)currentAssetDisplayIntervalSignpost;
-(long long)currentlyPlayingVideoSignpost;
-(void)_logDidEndViewingAsset:(id)arg1 duration:(double)arg2 ;
-(void)setCurrentlyPlayingStreamedVideoStartSignpost:(long long)arg1 ;
-(void)_logDidStartPlayingVideoAsset:(id)arg1 ;
-(void)_updateCurrentlyViewedAsset;
-(long long)currentlyStreamingVideoStallsCount;
-(void)_invalidateCurrentVideoProperties;
-(PXAssetAnalyzer *)assetAnalyzer;
-(long long)sessionSignpost;
-(void)setCurrentlyPlayingStreamedVideoSignpost:(long long)arg1 ;
-(void)setCurrentlyPlayingVideoAsset:(id<PUDisplayAsset>)arg1 ;
-(long long)currentlyPlayingStreamedVideoStartSignpost;
-(void)setIsSessionActive:(BOOL)arg1 ;
-(void)setCurrentVideoPlayer:(PUBrowsingVideoPlayer *)arg1 ;
-(id<PUDisplayAsset>)currentlyViewedAsset;
-(void)logAppliedEffectSuggestion:(id)arg1 toLivePhoto:(id)arg2 ;
-(id)initWithViewModel:(id)arg1 presentationOrigin:(long long)arg2 ;
-(BOOL)isSessionActive;
-(void)setSessionSignpost:(long long)arg1 ;
-(void)_logDidStartActualPlaybackOfStreamedVideoAsset:(id)arg1 ;
-(void)setCurrentlyStreamingVideoDidStartActualPlayback:(BOOL)arg1 ;
-(void)_logDidStartViewingAsset:(id)arg1 ;
-(id<PUDisplayAsset>)currentlyPlayingVideoAsset;
-(void)_logDidStartSession;
-(void)setCurrentlyPlayingVideoSignpost:(long long)arg1 ;
-(void)_updateCurrentVideoProperties;
-(void)_invalidateCurrentVideoPlayer;
-(id<PUDisplayAsset>)currentVideoAsset;
-(BOOL)currentlyStreamingVideoIsActuallyPlaying;
-(void)setCurrentlyStreamingVideoIsActuallyPlaying:(BOOL)arg1 ;
-(PXAssetMetadataDonator *)assetMetadataDonator;
-(void)_logWillEndPlaybackOfStreamedVideoAsset:(id)arg1 ;
-(void)_invalidateCurrentlyViewedAsset;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

