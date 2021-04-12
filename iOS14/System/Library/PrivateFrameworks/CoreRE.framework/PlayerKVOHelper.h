/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
*/


@class AVPlayer;

@interface PlayerKVOHelper : NSObject {

	AVPlayer* _player;
	/*^block*/id _block;

}

@property (nonatomic,retain) AVPlayer * player;              //@synthesize player=_player - In the implementation block
@property (nonatomic,copy) id block;                         //@synthesize block=_block - In the implementation block
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)dealloc;
-(id)initWithPlayer:(id)arg1 block:(/*^block*/id)arg2 ;
@end

