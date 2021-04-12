/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
*/

#import <NeutrinoKit/NeutrinoKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NUAVPlayerViewDelegate;
@class AVPlayer;

@interface NUAVPlayerView : UIView {

	Ai _updateReadyForDisplayID;
	BOOL _observerDetached;
	BOOL _readyForDisplay;
	AVPlayer* _player;
	id<NUAVPlayerViewDelegate> _delegate;

}

@property (assign,setter=_setReadyForDisplay:,getter=isReadyForDisplay,nonatomic) BOOL readyForDisplay;              //@synthesize readyForDisplay=_readyForDisplay - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                                      //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) id<NUAVPlayerViewDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
+(Class)layerClass;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<NUAVPlayerViewDelegate>)delegate;
-(void)setDelegate:(id<NUAVPlayerViewDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(BOOL)isReadyForDisplay;
-(void)dispose;
-(void)_setReadyForDisplay:(BOOL)arg1 ;
-(void)_updateReadyForDisplayWithID:(A)arg1 :(int)arg2 ;
@end

