/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UISlider.h>

@class UIView, UIImageView;

@interface HUMiniScrubber : UISlider {

	UIView* _loadedTrackOverlayView;
	UIImageView* _currentThumbView;

}

@property (assign,nonatomic,__weak) UIImageView * currentThumbView;              //@synthesize currentThumbView=_currentThumbView - In the implementation block
@property (nonatomic,readonly) UIView * loadedTrackOverlayView;                  //@synthesize loadedTrackOverlayView=_loadedTrackOverlayView - In the implementation block
+(void)applyPrimaryGlyphTintToView:(id)arg1 ;
+(void)applySecondaryGlyphTintToView:(id)arg1 ;
+(void)configureSlider:(id)arg1 thumbView:(id)arg2 loadedTrackView:(id)arg3 ;
+(void)applyBaseTrackTintToView:(id)arg1 ;
+(void)applyCompletedTrackTintToView:(id)arg1 ;
+(void)applyLoadedTrackTintToView:(id)arg1 ;
+(void)configureView:(id)arg1 forTintEffectWithColor:(id)arg2 filterType:(id)arg3 ;
+(void)configureView:(id)arg1 withBackgroundFillOfColor:(id)arg2 opacity:(double)arg3 filter:(id)arg4 ;
-(void)layoutSubviews;
-(void)willMoveToWindow:(id)arg1 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(id)createThumbView;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(UIView *)loadedTrackOverlayView;
-(void)setCurrentThumbView:(UIImageView *)arg1 ;
-(UIImageView *)currentThumbView;
@end

