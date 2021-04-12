/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class SKUIMediaPlayerItemStatus, MPAVController, MPAVItem;

@interface SKUIMediaPlayer : NSObject {

	BOOL _playing;
	float _rate;
	SKUIMediaPlayerItemStatus* _playerItem;
	MPAVController* _player;
	MPAVItem* _currentItem;
	id _periodicTimeObserver;

}

@property (nonatomic,retain) SKUIMediaPlayerItemStatus * playerItem;              //@synthesize playerItem=_playerItem - In the implementation block
@property (assign,nonatomic,__weak) MPAVController * player;                      //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) MPAVItem * currentItem;                       //@synthesize currentItem=_currentItem - In the implementation block
@property (assign,nonatomic) float rate;                                          //@synthesize rate=_rate - In the implementation block
@property (nonatomic,retain) id periodicTimeObserver;                             //@synthesize periodicTimeObserver=_periodicTimeObserver - In the implementation block
@property (assign,nonatomic) BOOL playing;                                        //@synthesize playing=_playing - In the implementation block
-(MPAVController *)player;
-(void)setPlayer:(MPAVController *)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(void)setRate:(float)arg1 ;
-(void)setPlayerItem:(SKUIMediaPlayerItemStatus *)arg1 ;
-(float)rate;
-(MPAVItem *)currentItem;
-(void)setCurrentItem:(MPAVItem *)arg1 ;
-(BOOL)playing;
-(SKUIMediaPlayerItemStatus *)playerItem;
-(id)periodicTimeObserver;
-(void)setPeriodicTimeObserver:(id)arg1 ;
@end

