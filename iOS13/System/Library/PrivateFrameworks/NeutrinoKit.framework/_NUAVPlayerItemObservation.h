/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
*/


@class AVPlayerItem;

@interface _NUAVPlayerItemObservation : NSObject {

	BOOL _registeredKVO;
	AVPlayerItem* _playerItem;

}

@property (nonatomic,retain) AVPlayerItem * playerItem;              //@synthesize playerItem=_playerItem - In the implementation block
@property (assign,nonatomic) BOOL registeredKVO;                     //@synthesize registeredKVO=_registeredKVO - In the implementation block
-(AVPlayerItem *)playerItem;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(BOOL)registeredKVO;
-(void)setRegisteredKVO:(BOOL)arg1 ;
@end

