/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoPlaybackEventTrackerFactory.h>

@protocol SVVideoPlaybackEventTrackerFactory <NSObject>
@required
-(id)createEventTrackerForVideo:(id)arg1;

@end


@protocol SVVideoPlaybackStateObserverFactory, SVVideoLoadingStateObserverFactory;
@class NSString;

@interface SVVideoPlaybackEventTrackerFactory : NSObject <SVVideoPlaybackEventTrackerFactory> {

	id<SVVideoPlaybackStateObserverFactory> _playbackStateObserverFactory;
	id<SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;

}

@property (nonatomic,readonly) id<SVVideoPlaybackStateObserverFactory> playbackStateObserverFactory;              //@synthesize playbackStateObserverFactory=_playbackStateObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoLoadingStateObserverFactory> loadingStateObserverFactory;                //@synthesize loadingStateObserverFactory=_loadingStateObserverFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createEventTrackerForVideo:(id)arg1 ;
-(id<SVVideoLoadingStateObserverFactory>)loadingStateObserverFactory;
-(id<SVVideoPlaybackStateObserverFactory>)playbackStateObserverFactory;
-(id)initWithPlaybackStateObserverFactory:(id)arg1 loadingStateObserverFactory:(id)arg2 ;
@end

