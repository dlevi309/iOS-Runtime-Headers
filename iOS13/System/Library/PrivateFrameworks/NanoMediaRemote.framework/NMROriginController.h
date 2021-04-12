/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <libobjc.A.dylib/NMROriginObserver.h>
#import <libobjc.A.dylib/NMROriginObserverDelegate.h>
#import <libobjc.A.dylib/NMROriginCommandHandler.h>

@protocol NMROriginObserverDelegate, NMROriginObserver, NMROriginCommandHandler;
@class NMROrigin, NMRNowPlayingState, NMRPlaybackQueue, NSString;

@interface NMROriginController : NSObject <NMROriginObserver, NMROriginObserverDelegate, NMROriginCommandHandler> {

	BOOL _isObserving;
	BOOL _hasPendingNowPlayingInfoChange;
	BOOL _hasPendingElapsedTimeChange;
	BOOL _hasPendingPlaybackStateChange;
	BOOL _hasPendingSupportedCommandsChange;
	BOOL _hasPendingNowPlayingApplicationBundleIdentifierChange;
	BOOL _hasPendingTimestampChange;
	BOOL _hasPendingPlaybackQueueChange;
	BOOL _shouldObserveArtwork;
	BOOL _shouldObservePlaybackQueue;
	BOOL _shouldObserveLibraryAddStatus;
	NMROrigin* _origin;
	id<NMROriginObserverDelegate> _delegate;
	id<NMROriginObserver> _originObserver;
	id<NMROriginCommandHandler> _originCommandHandler;

}

@property (nonatomic,retain) id<NMROriginObserver> originObserver;                          //@synthesize originObserver=_originObserver - In the implementation block
@property (nonatomic,retain) id<NMROriginCommandHandler> originCommandHandler;              //@synthesize originCommandHandler=_originCommandHandler - In the implementation block
@property (nonatomic,readonly) NMROrigin * origin;                                          //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) NMRNowPlayingState * nowPlayingState; 
@property (nonatomic,readonly) NMRPlaybackQueue * playbackQueue; 
@property (assign,nonatomic,__weak) id<NMROriginObserverDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldObservePlaybackQueue;                               //@synthesize shouldObservePlaybackQueue=_shouldObservePlaybackQueue - In the implementation block
@property (assign,nonatomic) BOOL shouldObserveArtwork;                                     //@synthesize shouldObserveArtwork=_shouldObserveArtwork - In the implementation block
@property (assign,nonatomic) BOOL shouldObserveLibraryAddStatus;                            //@synthesize shouldObserveLibraryAddStatus=_shouldObserveLibraryAddStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NMROriginObserverDelegate>)delegate;
-(void)setDelegate:(id<NMROriginObserverDelegate>)arg1 ;
-(NMROrigin *)origin;
-(NMRPlaybackQueue *)playbackQueue;
-(void)beginObserving;
-(void)endObserving;
-(NMRNowPlayingState *)nowPlayingState;
-(void)_notifyObserverOfUpdatedNowPlayingInfo;
-(void)_notifyObserverOfUpdatedPlaybackState;
-(void)_notifyObserverOfUpdatedSupportedCommands;
-(void)_notifyObserverOfUpdatedElapsedTime;
-(void)originObserver:(id)arg1 didUpdateNowPlayingInfoForOrigin:(id)arg2 ;
-(void)originObserver:(id)arg1 didUpdateNowPlayingApplicationBundleIdentifierForOrigin:(id)arg2 ;
-(void)originObserver:(id)arg1 didUpdatePlaybackStateForOrigin:(id)arg2 ;
-(void)originObserver:(id)arg1 didUpdateSupportedCommandsForOrigin:(id)arg2 ;
-(void)originObserver:(id)arg1 didUpdateElapsedTimeForOrigin:(id)arg2 ;
-(void)originObserver:(id)arg1 didUpdateTimestampForOrigin:(id)arg2 ;
-(void)originObserver:(id)arg1 didUpdatePlaybackQueueForOrigin:(id)arg2 ;
-(void)updateNowPlayingStateWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldObservePlaybackQueue;
-(void)setShouldObservePlaybackQueue:(BOOL)arg1 ;
-(BOOL)shouldObserveArtwork;
-(void)setShouldObserveArtwork:(BOOL)arg1 ;
-(BOOL)shouldObserveLibraryAddStatus;
-(void)setShouldObserveLibraryAddStatus:(BOOL)arg1 ;
-(void)sendMediaRemoteCommand:(unsigned)arg1 options:(id)arg2 launchApp:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setOriginObserver:(id<NMROriginObserver>)arg1 ;
-(void)setOriginCommandHandler:(id<NMROriginCommandHandler>)arg1 ;
-(id)initWithOrigin:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_notifyObserverOfUpdatedNowPlayingApplicationBundleIdentifier;
-(void)_notifyObserverOfUpdatedTimestamp;
-(void)_notifyObserverOfUpdatedPlaybackQueue;
-(id<NMROriginCommandHandler>)originCommandHandler;
-(id<NMROriginObserver>)originObserver;
@end

