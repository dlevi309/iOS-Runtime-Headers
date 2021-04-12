/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoPlaybackPositionObserving.h>

@protocol SVPlayerItemObserving, SVPlayerTimeControlStatusObserving;
@class NSString;

@interface SVVideoPlaybackPositionObserver : NSObject <SVVideoPlaybackPositionObserving> {

	unsigned long long _position;
	/*^block*/id _changeBlock;
	id<SVPlayerItemObserving> _playerItemObserver;
	id<SVPlayerTimeControlStatusObserving> _timeControlStatusObserver;

}

@property (nonatomic,readonly) id<SVPlayerItemObserving> playerItemObserver;                                  //@synthesize playerItemObserver=_playerItemObserver - In the implementation block
@property (nonatomic,readonly) id<SVPlayerTimeControlStatusObserving> timeControlStatusObserver;              //@synthesize timeControlStatusObserver=_timeControlStatusObserver - In the implementation block
@property (assign,nonatomic) unsigned long long position;                                                     //@synthesize position=_position - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onChange:,nonatomic,copy) id changeBlock;                                                   //@synthesize changeBlock=_changeBlock - In the implementation block
-(unsigned long long)position;
-(void)setPosition:(unsigned long long)arg1 ;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1 ;
-(void)playerItemPlayedToEnd:(id)arg1 ;
-(id)initWithPlayerItemObserver:(id)arg1 timeControlStatusObserver:(id)arg2 ;
-(id<SVPlayerItemObserving>)playerItemObserver;
-(id<SVPlayerTimeControlStatusObserving>)timeControlStatusObserver;
@end

