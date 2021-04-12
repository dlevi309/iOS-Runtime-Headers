/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <libobjc.A.dylib/MPRequestResponseControllerDelegate.h>
#import <libobjc.A.dylib/NMROriginObserver.h>
#import <libobjc.A.dylib/NMROriginCommandHandler.h>

@protocol OS_dispatch_queue, NMROriginObserverDelegate;
@class NMROrigin, NMRNowPlayingState, NMRPlaybackQueue, NSObject, MPCPlayerPath, MPRequestResponseController, NMRPlayerResponseNowPlayingState, NSString;

@interface NMROriginMediaPlaybackCoreController : NSObject <MPRequestResponseControllerDelegate, NMROriginObserver, NMROriginCommandHandler> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _isEnforcingApplicationFilter;
	MPCPlayerPath* _playerPath;
	unsigned long long _filteringOptions;
	MPRequestResponseController* _requestResponseController;
	NMRPlayerResponseNowPlayingState* _nowPlayingState;
	unsigned long long _numberOfConsecutiveFailuresToResolve;
	BOOL _shouldObserveLibraryAddStatus;
	BOOL shouldObserveArtwork;
	BOOL shouldObservePlaybackQueue;
	id<NMROriginObserverDelegate> _delegate;
	NMROrigin* _origin;
	NMRPlaybackQueue* playbackQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NMROrigin * origin;                                       //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) NMRNowPlayingState * nowPlayingState; 
@property (nonatomic,readonly) NMRPlaybackQueue * playbackQueue; 
@property (assign,nonatomic,__weak) id<NMROriginObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldObservePlaybackQueue; 
@property (assign,nonatomic) BOOL shouldObserveArtwork; 
@property (assign,nonatomic) BOOL shouldObserveLibraryAddStatus;                         //@synthesize shouldObserveLibraryAddStatus=_shouldObserveLibraryAddStatus - In the implementation block
-(NSString *)description;
-(id<NMROriginObserverDelegate>)delegate;
-(void)setDelegate:(id<NMROriginObserverDelegate>)arg1 ;
-(NMROrigin *)origin;
-(NMRPlaybackQueue *)playbackQueue;
-(void)controller:(id)arg1 defersResponseReplacement:(/*^block*/id)arg2 ;
-(BOOL)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2 ;
-(void)beginObserving;
-(void)endObserving;
-(NMRNowPlayingState *)nowPlayingState;
-(id)_requestResponseController;
-(void)_updateIsEnforcingApplicationFilterWithNowPlayingState:(id)arg1 ;
-(void)_notifyObserverOfUpdatedNowPlayingInfo;
-(void)_notifyObserverOfUpdatedNowPlayingApplicationBundleID;
-(void)_notifyObserverOfUpdatedPlaybackState;
-(void)_notifyObserverOfUpdatedSupportedCommands;
-(void)_notifyObserverOfUpdatedElapsedTime;
-(void)_notifyObserversOfUpdatedTimestamp;
-(void)_notifyObserversOfUpdatedPlaybackQueue;
-(void)_asyncToSerialQueueCheckingProcessWithBlock:(/*^block*/id)arg1 ;
-(void)updateNowPlayingStateWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldObservePlaybackQueue;
-(void)setShouldObservePlaybackQueue:(BOOL)arg1 ;
-(BOOL)shouldObserveArtwork;
-(void)setShouldObserveArtwork:(BOOL)arg1 ;
-(BOOL)shouldObserveLibraryAddStatus;
-(void)setShouldObserveLibraryAddStatus:(BOOL)arg1 ;
-(void)sendMediaRemoteCommand:(unsigned)arg1 options:(id)arg2 launchApp:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithPlayerPath:(id)arg1 options:(unsigned long long)arg2 ;
@end

