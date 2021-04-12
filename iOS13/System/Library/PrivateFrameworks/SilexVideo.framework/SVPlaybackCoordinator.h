/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@protocol SVPlayerItemLoading;
@class SVPlayer;

@interface SVPlaybackCoordinator : NSObject {

	SVPlayer* _player;
	id<SVPlayerItemLoading> _playerItemLoader;

}

@property (nonatomic,readonly) SVPlayer * player;                                     //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) id<SVPlayerItemLoading> playerItemLoader;              //@synthesize playerItemLoader=_playerItemLoader - In the implementation block
-(void)load;
-(void)pause;
-(void)play;
-(SVPlayer *)player;
-(id<SVPlayerItemLoading>)playerItemLoader;
-(id)initWithPlayer:(id)arg1 playerItemLoader:(id)arg2 ;
-(void)loadVideoIfNeeded;
@end

