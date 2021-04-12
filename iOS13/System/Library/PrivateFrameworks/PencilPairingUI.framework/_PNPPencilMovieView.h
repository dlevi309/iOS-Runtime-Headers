/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
*/

#import <UIKitCore/UIView.h>

@class AVPlayer;

@interface _PNPPencilMovieView : UIView {

	AVPlayer* _player;
	BOOL _repeat;

}
+(Class)layerClass;
+(double)_playbackRate;
-(void)teardown;
-(void)prepare;
-(id)_playerLayer;
-(void)completeRevolutionWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_applyFilterToLayer;
-(void)_playbackEnded;
@end

