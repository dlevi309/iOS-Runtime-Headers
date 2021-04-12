/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoPlaybackStateObserverFactory.h>

@protocol SVVideoPlaybackStateObserverFactory <NSObject>
@required
-(id)createPlaybackStateObserverForVideo:(id)arg1;

@end


@protocol SVPlayerStatusObserverFactory, SVVideoPlaybackPositionObserverFactory, SVPlayerTimeControlStatusObserverFactory;
@class NSString;

@interface SVVideoPlaybackStateObserverFactory : NSObject <SVVideoPlaybackStateObserverFactory> {

	id<SVPlayerStatusObserverFactory> _statusObserverFactory;
	id<SVVideoPlaybackPositionObserverFactory> _playbackPositionObserverFactory;
	id<SVPlayerTimeControlStatusObserverFactory> _timeControlStatusObserverFactory;

}

@property (nonatomic,readonly) id<SVPlayerStatusObserverFactory> statusObserverFactory;                                    //@synthesize statusObserverFactory=_statusObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackPositionObserverFactory> playbackPositionObserverFactory;                 //@synthesize playbackPositionObserverFactory=_playbackPositionObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVPlayerTimeControlStatusObserverFactory> timeControlStatusObserverFactory;              //@synthesize timeControlStatusObserverFactory=_timeControlStatusObserverFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createPlaybackStateObserverForVideo:(id)arg1 ;
-(id<SVPlayerStatusObserverFactory>)statusObserverFactory;
-(id<SVVideoPlaybackPositionObserverFactory>)playbackPositionObserverFactory;
-(id<SVPlayerTimeControlStatusObserverFactory>)timeControlStatusObserverFactory;
-(id)initWithStatusObserverFactory:(id)arg1 playbackPositionObserverFactory:(id)arg2 timeControlStatusObserverFactory:(id)arg3 ;
@end

