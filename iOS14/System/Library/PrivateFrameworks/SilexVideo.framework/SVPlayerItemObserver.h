/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (setter=onChange:,nonatomic,copy) id changeBlock;                //@synthesize changeBlock=_changeBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AVPlayer *)player;
-(SVKeyValueObserver *)observer;
-(id)changeBlock;
-(AVPlayerItem *)item;
-(void)onChange:(/*^block*/id)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(void)setItem:(AVPlayerItem *)arg1 ;
@end

