/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVPlayerItemObserving.h>

@class AVPlayerItem, AVPlayer, SVKeyValueObserver, NSString;

@interface SVPlayerItemObserver : NSObject <SVPlayerItemObserving> {

	/*^block*/id _changeBlock;
	AVPlayerItem* _item;
	AVPlayer* _player;
	SVKeyValueObserver* _observer;

}

@property (nonatomic,readonly) AVPlayer * player;                          //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) SVKeyValueObserver * observer;              //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic,__weak) AVPlayerItem * item;                   //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onChange:,nonatomic,copy) id changeBlock;                //@synthesize changeBlock=_changeBlock - In the implementation block
-(SVKeyValueObserver *)observer;
-(AVPlayerItem *)item;
-(void)setItem:(AVPlayerItem *)arg1 ;
-(AVPlayer *)player;
-(id)initWithPlayer:(id)arg1 ;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1 ;
@end

