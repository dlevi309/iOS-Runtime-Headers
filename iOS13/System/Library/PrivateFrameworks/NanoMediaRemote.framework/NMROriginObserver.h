/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

@class NMROrigin, NMRNowPlayingState, NMRPlaybackQueue;


@protocol NMROriginObserver
@property (nonatomic,readonly) NMROrigin * origin; 
@property (nonatomic,readonly) NMRNowPlayingState * nowPlayingState; 
@property (nonatomic,readonly) NMRPlaybackQueue * playbackQueue; 
@property (assign,nonatomic,__weak) id<NMROriginObserverDelegate> delegate; 
@property (assign,nonatomic) BOOL shouldObservePlaybackQueue; 
@property (assign,nonatomic) BOOL shouldObserveArtwork; 
@property (assign,nonatomic) BOOL shouldObserveLibraryAddStatus; 
@optional
-(void)preparePlayerRequestForNewPlaybackIntent;

@required
-(id<NMROriginObserverDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NMROrigin *)origin;
-(NMRPlaybackQueue *)playbackQueue;
-(void)beginObserving;
-(void)endObserving;
-(NMRNowPlayingState *)nowPlayingState;
-(void)updateNowPlayingStateWithCompletion:(/*^block*/id)arg1;
-(BOOL)shouldObservePlaybackQueue;
-(void)setShouldObservePlaybackQueue:(BOOL)arg1;
-(BOOL)shouldObserveArtwork;
-(void)setShouldObserveArtwork:(BOOL)arg1;
-(BOOL)shouldObserveLibraryAddStatus;
-(void)setShouldObserveLibraryAddStatus:(BOOL)arg1;

@end

