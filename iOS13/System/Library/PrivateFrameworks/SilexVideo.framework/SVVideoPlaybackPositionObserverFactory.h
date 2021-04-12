/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoPlaybackPositionObserverFactory.h>

@protocol SVVideoPlaybackPositionObserverFactory <NSObject>
@required
-(id)createPlaybackPositionObserverForVideo:(id)arg1;

@end


@protocol SVPlayerItemObserverFactory, SVPlayerTimeControlStatusObserverFactory;
@class NSString;

@interface SVVideoPlaybackPositionObserverFactory : NSObject <SVVideoPlaybackPositionObserverFactory> {

	id<SVPlayerItemObserverFactory> _playerItemObserverFactory;
	id<SVPlayerTimeControlStatusObserverFactory> _timeControlStatusObserverFactory;

}

@property (nonatomic,readonly) id<SVPlayerItemObserverFactory> playerItemObserverFactory;                                  //@synthesize playerItemObserverFactory=_playerItemObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVPlayerTimeControlStatusObserverFactory> timeControlStatusObserverFactory;              //@synthesize timeControlStatusObserverFactory=_timeControlStatusObserverFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVPlayerItemObserverFactory>)playerItemObserverFactory;
-(id)createPlaybackPositionObserverForVideo:(id)arg1 ;
-(id<SVPlayerTimeControlStatusObserverFactory>)timeControlStatusObserverFactory;
-(id)initWithPlayerItemObserverFactory:(id)arg1 timeControlStatusObserverFactory:(id)arg2 ;
@end

