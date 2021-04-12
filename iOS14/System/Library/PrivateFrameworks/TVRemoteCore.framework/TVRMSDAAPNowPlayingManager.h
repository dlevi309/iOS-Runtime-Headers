/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol OS_dispatch_source, TVRMSDAAPNowPlayingManagerDelegate;
@class TVRMSDAAPRequestManager, TVRMSNowPlayingInfo, TVRMSControlInterface, NSURLSessionDataTask, NSObject, NSString, NSArray, NSNumber;

@interface TVRMSDAAPNowPlayingManager : NSObject {

	TVRMSDAAPRequestManager* _requestManager;
	TVRMSNowPlayingInfo* _currentNowPlayingInfo;
	TVRMSControlInterface* _controlInterface;
	NSURLSessionDataTask* _nowPlayingInfoRequest;
	NSURLSessionDataTask* _artworkRequest;
	NSURLSessionDataTask* _audioRoutesRequest;
	NSURLSessionDataTask* _volumeRequest;
	NSObject*<OS_dispatch_source> _artworkRetryTimer;
	long long _requestBackoffInterval;
	long long _artworkRequestBackoffInterval;
	NSString* _currentArtworkIdentifier;
	NSArray* _currentAudioRoutes;
	NSNumber* _lastVolume;
	BOOL _isObserving;
	BOOL _observing;
	id<TVRMSDAAPNowPlayingManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVRMSDAAPNowPlayingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TVRMSControlInterface * controlInterface;                            //@synthesize controlInterface=_controlInterface - In the implementation block
@property (getter=isObserving,nonatomic,readonly) BOOL observing;                                 //@synthesize observing=_observing - In the implementation block
-(id<TVRMSDAAPNowPlayingManagerDelegate>)delegate;
-(BOOL)isObserving;
-(void)setDelegate:(id<TVRMSDAAPNowPlayingManagerDelegate>)arg1 ;
-(TVRMSControlInterface *)controlInterface;
-(void)setControlInterface:(TVRMSControlInterface *)arg1 ;
-(id)initWithRequestManager:(id)arg1 ;
-(void)_requestArtworkDataIfNecessaryForNowPlayingInfo:(id)arg1 ;
-(void)_requestAudioRoutes;
-(void)_requestVolume;
-(void)_refreshNowPlayingInfoRequest;
-(void)_requestNowPlayingInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cancelArtworkRetryTimer;
-(void)beginObservingNowPlaying;
-(void)_scheduleArtworkRetryForNowPlayingInfo:(id)arg1 delay:(double)arg2 ;
-(BOOL)_audioRoutes:(id)arg1 equalAudioRoutes:(id)arg2 ;
-(void)endObservingNowPlaying;
@end

