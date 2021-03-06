/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)configureView:(id)arg1 forTintEffectWithColor:(id)arg2 filterType:(id)arg3 ;
+(void)applySecondaryGlyphTintToView:(id)arg1 ;
+(void)applyBaseTrackTintToView:(id)arg1 ;
+(void)applyCompletedTrackTintToView:(id)arg1 ;
+(void)configureView:(id)arg1 withBackgroundFillOfColor:(id)arg2 opacity:(double)arg3 filter:(id)arg4 ;
+(void)applyLoadedTrackTintToView:(id)arg1 ;
+(void)configureSlider:(id)arg1 thumbView:(id)arg2 loadedTrackView:(id)arg3 ;
+(void)applyPrimaryGlyphTintToView:(id)arg1 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(UIView *)loadedTrackOverlayView;
-(void)setCurrentThumbView:(UIImageView *)arg1 ;
-(UIImageView *)currentThumbView;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(void)willMoveToWindow:(id)arg1 ;
-(id)createThumbView;
@end

