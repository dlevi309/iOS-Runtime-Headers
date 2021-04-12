/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVPrefetcherFactory.h>

@protocol SVPrefetcherFactory <NSObject>
@required
-(id)createPrefetcherForVideo:(id)arg1 afterVideo:(id)arg2;

@end


@protocol SVVideoBufferObserverFactory, SVPrefetchPolicyHandler, SVPlaybackCoordinatorProviding, SVVideoLoadingStateObserverFactory, SVVideoLoadingProgressObserverFactory, SVVideoPlaybackProgressObserverFactory;
@class NSString;

@interface SVPrefetcherFactory : NSObject <SVPrefetcherFactory> {

	id<SVVideoBufferObserverFactory> _bufferObserverFactory;
	id<SVPrefetchPolicyHandler> _prefetchPolicyHandler;
	id<SVPlaybackCoordinatorProviding> _playbackCoordinatorProvider;
	id<SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
	id<SVVideoLoadingProgressObserverFactory> _loadingProgressObserverFactory;
	id<SVVideoPlaybackProgressObserverFactory> _playbackProgressObserverFactory;

}

@property (nonatomic,readonly) id<SVVideoBufferObserverFactory> bufferObserverFactory;                                  //@synthesize bufferObserverFactory=_bufferObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVPrefetchPolicyHandler> prefetchPolicyHandler;                                       //@synthesize prefetchPolicyHandler=_prefetchPolicyHandler - In the implementation block
@property (nonatomic,readonly) id<SVPlaybackCoordinatorProviding> playbackCoordinatorProvider;                          //@synthesize playbackCoordinatorProvider=_playbackCoordinatorProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoLoadingStateObserverFactory> loadingStateObserverFactory;                      //@synthesize loadingStateObserverFactory=_loadingStateObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoLoadingProgressObserverFactory> loadingProgressObserverFactory;                //@synthesize loadingProgressObserverFactory=_loadingProgressObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackProgressObserverFactory> playbackProgressObserverFactory;              //@synthesize playbackProgressObserverFactory=_playbackProgressObserverFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoPlaybackProgressObserverFactory>)playbackProgressObserverFactory;
-(id<SVPrefetchPolicyHandler>)prefetchPolicyHandler;
-(id<SVPlaybackCoordinatorProviding>)playbackCoordinatorProvider;
-(id<SVVideoBufferObserverFactory>)bufferObserverFactory;
-(id<SVVideoLoadingStateObserverFactory>)loadingStateObserverFactory;
-(id<SVVideoLoadingProgressObserverFactory>)loadingProgressObserverFactory;
-(id)createPrefetcherForVideo:(id)arg1 afterVideo:(id)arg2 ;
-(id)initWithPrefetchPolicyHandler:(id)arg1 bufferObserverFactory:(id)arg2 playbackCoordinatorProvider:(id)arg3 loadingStateObserverFactory:(id)arg4 loadingProgressObserverFactory:(id)arg5 playbackProgressObserverFactory:(id)arg6 ;
@end

