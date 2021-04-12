/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VisualPairing.framework/VisualPairing
*/

#import <VisualPairing/VisualPairing-Structs.h>
#import <UIKitCore/UIView.h>

@class AVQueuePlayer, AVPlayerLooper, AVPlayerItem, AVPlayerLayer;

@interface VPSpatialTutorialContentView : UIView {

	int _mode;
	AVQueuePlayer* _playerStereo;
	AVQueuePlayer* _playerSpatial;
	AVPlayerLooper* _looperStereo;
	AVPlayerLooper* _looperSpatial;
	AVPlayerItem* _playerItemStereo;
	AVPlayerItem* _playerItemSpatial;
	AVPlayerLayer* _playerLayerStereo;
	AVPlayerLayer* _playerLayerSpatial;
	BOOL _playersPlaying;
	BOOL _playersStartTriggered;
	MediaContentStatus _spatialStatus;
	MediaContentStatus _stereoStatus;

}
-(int)mode;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithMode:(int)arg1 ;
-(void)setMode:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 mode:(int)arg2 ;
-(void)startPlayers;
-(void)stopPlayers;
-(void)initPlayerStereo;
-(void)initPlayerSpatial;
-(void)updatePlayersValuesBasedOnMode;
-(void)syncPlayersWithRate:(float)arg1 ;
@end

