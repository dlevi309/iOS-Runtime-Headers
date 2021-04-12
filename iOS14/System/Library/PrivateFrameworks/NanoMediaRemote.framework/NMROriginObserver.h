/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NMROrigin *)origin;
-(id<NMROriginObserverDelegate>)delegate;
-(void)beginObserving;
-(NMRPlaybackQueue *)playbackQueue;
-(void)setDelegate:(id)arg1;
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

