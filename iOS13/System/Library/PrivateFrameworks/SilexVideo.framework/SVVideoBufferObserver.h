/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoBufferObserving.h>

@protocol SVPlayerItemObserving;
@class SVKeyValueObserver, NSString;

@interface SVVideoBufferObserver : NSObject <SVVideoBufferObserving> {

	BOOL _playbackBufferFull;
	BOOL _playbackLikelyToKeepUp;
	/*^block*/id _changeBlock;
	id<SVPlayerItemObserving> _playerItemObserver;
	SVKeyValueObserver* _playbackBufferFullObserver;
	SVKeyValueObserver* _playbackLikelyToKeepUpObserver;

}

@property (assign,getter=isPlaybackBufferFull,nonatomic) BOOL playbackBufferFull;                      //@synthesize playbackBufferFull=_playbackBufferFull - In the implementation block
@property (assign,getter=isPlaybackLikelyToKeepUp,nonatomic) BOOL playbackLikelyToKeepUp;              //@synthesize playbackLikelyToKeepUp=_playbackLikelyToKeepUp - In the implementation block
@property (nonatomic,readonly) id<SVPlayerItemObserving> playerItemObserver;                           //@synthesize playerItemObserver=_playerItemObserver - In the implementation block
@property (nonatomic,readonly) SVKeyValueObserver * playbackBufferFullObserver;                        //@synthesize playbackBufferFullObserver=_playbackBufferFullObserver - In the implementation block
@property (nonatomic,readonly) SVKeyValueObserver * playbackLikelyToKeepUpObserver;                    //@synthesize playbackLikelyToKeepUpObserver=_playbackLikelyToKeepUpObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onChange:,nonatomic,copy) id changeBlock;                                            //@synthesize changeBlock=_changeBlock - In the implementation block
-(BOOL)isPlaybackLikelyToKeepUp;
-(BOOL)isPlaybackBufferFull;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1 ;
-(id)initWithPlayerItemObserver:(id)arg1 ;
-(id<SVPlayerItemObserving>)playerItemObserver;
-(void)setPlaybackBufferFull:(BOOL)arg1 ;
-(void)setPlaybackLikelyToKeepUp:(BOOL)arg1 ;
-(SVKeyValueObserver *)playbackBufferFullObserver;
-(SVKeyValueObserver *)playbackLikelyToKeepUpObserver;
@end

