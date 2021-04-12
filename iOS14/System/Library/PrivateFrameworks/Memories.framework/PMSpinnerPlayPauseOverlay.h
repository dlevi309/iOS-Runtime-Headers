/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface PMSpinnerPlayPauseOverlay : UIView {

	unsigned long long _displayState;
	UIView* _spinnerView;
	UIView* _playPauseButton;

}

@property (nonatomic,retain) UIView * spinnerView;                         //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,retain) UIView * playPauseButton;                     //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (assign,nonatomic) unsigned long long displayState;              //@synthesize displayState=_displayState - In the implementation block
-(void)setup;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setShowAsPause:(BOOL)arg1 ;
-(void)setSpinnerView:(UIView *)arg1 ;
-(UIView *)spinnerView;
-(UIView *)playPauseButton;
-(id)initWithCoder:(id)arg1 ;
-(void)setPlayPauseButton:(UIView *)arg1 ;
-(void)setDisplayState:(unsigned long long)arg1 ;
-(unsigned long long)displayState;
@end

