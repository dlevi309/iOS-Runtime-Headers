/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class PLWallpaperButton, _UILegibilityLabel, UIView, _UIBackdropView;

@interface PLCropOverlayWallpaperBottomBar : UIView {

	BOOL _motionToggleHidden;
	BOOL _shouldOnlyShowLockScreenButton;
	BOOL _shouldOnlyShowHomeScreenButton;
	PLWallpaperButton* _doCancelButton;
	PLWallpaperButton* _doSetButton;
	PLWallpaperButton* _doSetHomeScreenButton;
	PLWallpaperButton* _doSetLockScreenButton;
	PLWallpaperButton* _doSetBothScreenButton;
	PLWallpaperButton* _motionToggle;
	_UILegibilityLabel* _titleLabel;
	UIView* _separatorLine;
	_UIBackdropView* _backdropView;
	double _maxToggleWidth;

}

@property (nonatomic,retain) _UILegibilityLabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * separatorLine;                                          //@synthesize separatorLine=_separatorLine - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                                  //@synthesize backdropView=_backdropView - In the implementation block
@property (assign,nonatomic) double maxToggleWidth;                                           //@synthesize maxToggleWidth=_maxToggleWidth - In the implementation block
@property (nonatomic,retain,readonly) PLWallpaperButton * doCancelButton;                     //@synthesize doCancelButton=_doCancelButton - In the implementation block
@property (nonatomic,retain,readonly) PLWallpaperButton * doSetButton;                        //@synthesize doSetButton=_doSetButton - In the implementation block
@property (nonatomic,retain,readonly) PLWallpaperButton * doSetHomeScreenButton;              //@synthesize doSetHomeScreenButton=_doSetHomeScreenButton - In the implementation block
@property (nonatomic,retain,readonly) PLWallpaperButton * doSetLockScreenButton;              //@synthesize doSetLockScreenButton=_doSetLockScreenButton - In the implementation block
@property (nonatomic,retain,readonly) PLWallpaperButton * doSetBothScreenButton;              //@synthesize doSetBothScreenButton=_doSetBothScreenButton - In the implementation block
@property (nonatomic,retain,readonly) PLWallpaperButton * motionToggle;                       //@synthesize motionToggle=_motionToggle - In the implementation block
@property (assign,nonatomic) BOOL motionToggleHidden;                                         //@synthesize motionToggleHidden=_motionToggleHidden - In the implementation block
@property (assign,nonatomic) BOOL shouldOnlyShowLockScreenButton;                             //@synthesize shouldOnlyShowLockScreenButton=_shouldOnlyShowLockScreenButton - In the implementation block
@property (assign,nonatomic) BOOL shouldOnlyShowHomeScreenButton;                             //@synthesize shouldOnlyShowHomeScreenButton=_shouldOnlyShowHomeScreenButton - In the implementation block
-(_UILegibilityLabel *)titleLabel;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(void)setTitleLabel:(_UILegibilityLabel *)arg1 ;
-(void)updateForChangedSettings:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(UIView *)separatorLine;
-(void)setSeparatorLine:(UIView *)arg1 ;
-(void)setMotionToggleHidden:(BOOL)arg1 ;
-(BOOL)motionToggleHidden;
-(void)_commonPLCropOverlayWallpaperBottomBarInitialization;
-(void)_commonPLCropOverlayWallpaperBottomBarInitializationPhone;
-(void)_commonPLCropOverlayWallpaperBottomBarInitializationPad;
-(void)_layoutSubviewsPhone;
-(void)_layoutSubviewsPad;
-(double)widthForToggleText;
-(CGSize)_sizeForString:(id)arg1 ;
-(PLWallpaperButton *)doCancelButton;
-(PLWallpaperButton *)doSetButton;
-(PLWallpaperButton *)doSetHomeScreenButton;
-(PLWallpaperButton *)doSetLockScreenButton;
-(PLWallpaperButton *)doSetBothScreenButton;
-(PLWallpaperButton *)motionToggle;
-(BOOL)shouldOnlyShowLockScreenButton;
-(void)setShouldOnlyShowLockScreenButton:(BOOL)arg1 ;
-(BOOL)shouldOnlyShowHomeScreenButton;
-(void)setShouldOnlyShowHomeScreenButton:(BOOL)arg1 ;
-(double)maxToggleWidth;
-(void)setMaxToggleWidth:(double)arg1 ;
@end

