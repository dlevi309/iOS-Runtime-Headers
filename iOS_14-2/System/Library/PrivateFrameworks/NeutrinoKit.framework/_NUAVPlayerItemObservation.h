/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
*/


@class AVPlayerItem;

@interface _NUAVPlayerItemObservation : NSObject {

	BOOL _registeredKVO;
	AVPlayerItem* _playerItem;

}

@property (nonatomic,retain) AVPlayerItem * playerItem;              //@synthesize playerItem=_playerItem - In the implementation block
@property (assign,nonatomic) BOOL registeredKVO;                     //@synthesize registeredKVO=_registeredKVO - In the implementation block
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(AVPlayerItem *)playerItem;
-(BOOL)registeredKVO;
-(void)setRegisteredKVO:(BOOL)arg1 ;
@end

