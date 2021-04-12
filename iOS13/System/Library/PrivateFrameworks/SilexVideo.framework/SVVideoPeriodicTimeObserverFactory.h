/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoPeriodicTimeObserverFactory.h>

@protocol SVVideoPeriodicTimeObserverFactory <NSObject>
@required
-(id)createPeriodicTimeObserverForVideo:(id)arg1;

@end


@protocol SVPlayerProviding, SVVideoPlaybackStateObserverFactory, SVTimeConverting;
@class NSString;

@interface SVVideoPeriodicTimeObserverFactory : NSObject <SVVideoPeriodicTimeObserverFactory> {

	id<SVPlayerProviding> _playerProvider;
	id<SVVideoPlaybackStateObserverFactory> _playbackStateObserverFactory;
	id<SVTimeConverting> _timeConverter;

}

@property (nonatomic,readonly) id<SVPlayerProviding> playerProvider;                                              //@synthesize playerProvider=_playerProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackStateObserverFactory> playbackStateObserverFactory;              //@synthesize playbackStateObserverFactory=_playbackStateObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVTimeConverting> timeConverter;                                                //@synthesize timeConverter=_timeConverter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createPeriodicTimeObserverForVideo:(id)arg1 ;
-(id<SVPlayerProviding>)playerProvider;
-(id<SVVideoPlaybackStateObserverFactory>)playbackStateObserverFactory;
-(id<SVTimeConverting>)timeConverter;
-(id)initWithPlayerProvider:(id)arg1 playbackStateObserverFactory:(id)arg2 timeConverter:(id)arg3 ;
@end

