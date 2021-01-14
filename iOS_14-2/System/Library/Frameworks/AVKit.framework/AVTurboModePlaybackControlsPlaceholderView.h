/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOverrideLayoutMarginsWhenEmbeddedInline:(NSValue *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(AVVolumeButtonControl *)volumeButton;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 styleSheet:(id)arg2 ;
-(BOOL)hasVisibleControls;
-(void)setIncludedControlType:(long long)arg1 ;
-(void)setVolumeButtonMicaPackageStateName:(NSString *)arg1 ;
-(void)_updateFramesAndHitRectInsets;
-(CGRect)_frameForIncludedViewType:(long long)arg1 ;
-(void)_makeVolumeButtonAndContainerIfNeeded;
-(id)_makeVolumeButtonAndContainer;
-(id)_makeProminentPlayButtonAndContainer;
-(void)_makeProminentPlayButtonAndContainerIfNeeded;
-(long long)includedControlType;
-(NSString *)volumeButtonMicaPackageStateName;
-(void)setVolumeButton:(AVVolumeButtonControl *)arg1 ;
-(UIView *)prominentPlayButtonContainer;
-(void)setProminentPlayButtonContainer:(UIView *)arg1 ;
-(UIView *)volumeButtonContainer;
-(void)setVolumeButtonContainer:(UIView *)arg1 ;
-(NSValue *)overrideLayoutMarginsWhenEmbeddedInline;
-(void)setOverrideTransformForProminentPlayButton:(CGAffineTransform)arg1 ;
-(CGAffineTransform)overrideTransformForProminentPlayButton;
-(UIView *)contentView;
-(void)setStyleSheet:(AVStyleSheet *)arg1 ;
-(void)setPreferredUnobscuredArea:(long long)arg1 ;
-(AVStyleSheet *)styleSheet;
-(AVButton *)prominentPlayButton;
-(long long)preferredUnobscuredArea;
-(void)setProminentPlayButton:(AVButton *)arg1 ;
-(AVObservationController *)observationController;
-(void)dealloc;
@end

