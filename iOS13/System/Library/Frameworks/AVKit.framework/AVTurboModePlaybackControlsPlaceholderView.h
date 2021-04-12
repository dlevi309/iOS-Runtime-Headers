/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class AVStyleSheet, AVPlayerController, NSString, NSValue, AVVolumeButtonControl, UIView, AVButton, AVObservationController;

@interface AVTurboModePlaybackControlsPlaceholderView : UIView {

	AVStyleSheet* _styleSheet;
	AVPlayerController* _playerController;
	long long _preferredUnobscuredArea;
	long long _includedControlType;
	NSString* _volumeButtonMicaPackageStateName;
	NSValue* _overrideLayoutMarginsWhenEmbeddedInline;
	AVVolumeButtonControl* _volumeButton;
	UIView* _prominentPlayButtonContainer;
	AVButton* _prominentPlayButton;
	UIView* _volumeButtonContainer;
	UIView* _contentView;
	AVObservationController* _observationController;
	CGAffineTransform _overrideTransformForProminentPlayButton;

}

@property (nonatomic,retain) UIView * prominentPlayButtonContainer;                                  //@synthesize prominentPlayButtonContainer=_prominentPlayButtonContainer - In the implementation block
@property (assign,nonatomic,__weak) AVButton * prominentPlayButton;                                  //@synthesize prominentPlayButton=_prominentPlayButton - In the implementation block
@property (nonatomic,retain) UIView * volumeButtonContainer;                                         //@synthesize volumeButtonContainer=_volumeButtonContainer - In the implementation block
@property (assign,nonatomic,__weak) AVVolumeButtonControl * volumeButton;                            //@synthesize volumeButton=_volumeButton - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                                 //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) AVObservationController * observationController;                      //@synthesize observationController=_observationController - In the implementation block
@property (assign,nonatomic) long long includedControlType;                                          //@synthesize includedControlType=_includedControlType - In the implementation block
@property (nonatomic,retain) AVStyleSheet * styleSheet;                                              //@synthesize styleSheet=_styleSheet - In the implementation block
@property (nonatomic,retain) AVPlayerController * playerController;                                  //@synthesize playerController=_playerController - In the implementation block
@property (assign,nonatomic) long long preferredUnobscuredArea;                                      //@synthesize preferredUnobscuredArea=_preferredUnobscuredArea - In the implementation block
@property (nonatomic,copy) NSString * volumeButtonMicaPackageStateName;                              //@synthesize volumeButtonMicaPackageStateName=_volumeButtonMicaPackageStateName - In the implementation block
@property (assign,nonatomic) CGAffineTransform overrideTransformForProminentPlayButton;              //@synthesize overrideTransformForProminentPlayButton=_overrideTransformForProminentPlayButton - In the implementation block
@property (nonatomic,retain) NSValue * overrideLayoutMarginsWhenEmbeddedInline;                      //@synthesize overrideLayoutMarginsWhenEmbeddedInline=_overrideLayoutMarginsWhenEmbeddedInline - In the implementation block
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(UIView *)contentView;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(AVStyleSheet *)styleSheet;
-(void)setPreferredUnobscuredArea:(long long)arg1 ;
-(long long)preferredUnobscuredArea;
-(AVButton *)prominentPlayButton;
-(void)setProminentPlayButton:(AVButton *)arg1 ;
-(void)setStyleSheet:(AVStyleSheet *)arg1 ;
-(AVObservationController *)observationController;
-(void)setOverrideTransformForProminentPlayButton:(CGAffineTransform)arg1 ;
-(void)setOverrideLayoutMarginsWhenEmbeddedInline:(NSValue *)arg1 ;
-(CGAffineTransform)overrideTransformForProminentPlayButton;
-(NSValue *)overrideLayoutMarginsWhenEmbeddedInline;
-(id)initWithFrame:(CGRect)arg1 styleSheet:(id)arg2 ;
-(BOOL)hasVisibleControls;
-(void)setIncludedControlType:(long long)arg1 ;
-(void)setVolumeButtonMicaPackageStateName:(NSString *)arg1 ;
-(void)_updateFramesAndHitRectInsets;
-(CGRect)_frameForIncludedViewType:(long long)arg1 ;
-(void)_makeVolumeButtonAndContainerIfNeeded;
-(id)_makeVolumeButtonAndContainer;
-(void)_makeProminentPlayButtonAndContainerIfNeeded;
-(id)_makeProminentPlayButtonAndContainer;
-(long long)includedControlType;
-(NSString *)volumeButtonMicaPackageStateName;
-(AVVolumeButtonControl *)volumeButton;
-(void)setVolumeButton:(AVVolumeButtonControl *)arg1 ;
-(UIView *)prominentPlayButtonContainer;
-(void)setProminentPlayButtonContainer:(UIView *)arg1 ;
-(UIView *)volumeButtonContainer;
-(void)setVolumeButtonContainer:(UIView *)arg1 ;
@end

