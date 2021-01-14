/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/Social-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer, _SLSheetMaskLayer, UIColor;

@interface SLSheetMasklayer : CALayer {

	CALayer* _topLayer;
	CALayer* _leftLayer;
	CALayer* _bottomLayer;
	CALayer* _rightLayer;
	_SLSheetMaskLayer* _sheetMaskLayer;
	CALayer* _solidSheetMaskLayer;
	UIColor* _backgroundColor;
	CGRect _lastBounds;
	CGRect _lastMaskRect;
	double _clipCornerRadius;
	UIColor* _clipBackgroundColor;

}

@property (assign,nonatomic) double clipCornerRadius;                    //@synthesize clipCornerRadius=_clipCornerRadius - In the implementation block
@property (nonatomic,retain) UIColor * clipBackgroundColor;              //@synthesize clipBackgroundColor=_clipBackgroundColor - In the implementation block
-(void)removeAllAnimations;
-(double)clipCornerRadius;
-(UIColor *)clipBackgroundColor;
-(void)setClipCornerRadius:(double)arg1 ;
-(void)setClipBackgroundColor:(UIColor *)arg1 ;
-(void)updateMaskWithBounds:(CGRect)arg1 maskRect:(CGRect)arg2 ;
-(id)initWithBackgroundColor:(id)arg1 cornerRadius:(double)arg2 ;
-(void)removeSheetCutout;
-(void)restoreSheetCutout;
-(void)animateSheetMaskFromOldSheetFrame:(CGRect)arg1 toSheetFrame:(CGRect)arg2 duration:(double)arg3 ;
@end

