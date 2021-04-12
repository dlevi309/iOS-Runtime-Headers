/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <SiriUICore/SiriUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class _SUICRingLayer, _SUICProgressRingLayer, _SUICCheckGlyphLayer, UIImageView;

@interface SUICProgressIndicatorView : UIView {

	_SUICRingLayer* _shadowRingLayer;
	_SUICProgressRingLayer* _progressRingLayer;
	_SUICCheckGlyphLayer* _checkGlyphLayer;
	UIImageView* _actionArrowImageView;

}

@property (assign,getter=isArrowVisible,nonatomic) BOOL arrowVisible; 
@property (assign,nonatomic) double progressValue; 
@property (assign,getter=isSpinning,nonatomic) BOOL spinning; 
@property (assign,getter=isCheckmarkVisible,nonatomic) BOOL checkmarkVisible; 
@property (assign,getter=isDarkened,nonatomic) BOOL darkened; 
-(void)setShadowColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCheckmarkVisible:(BOOL)arg1 ;
-(BOOL)isCheckmarkVisible;
-(void)layoutSubviews;
-(double)progressValue;
-(void)setRingColor:(id)arg1 ;
-(void)setSpinning:(BOOL)arg1 ;
-(void)setProgressValue:(double)arg1 ;
-(BOOL)isSpinning;
-(BOOL)isArrowVisible;
-(void)setArrowVisible:(BOOL)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)setProgressValue:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setArrowVisible:(BOOL)arg1 delay:(double)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setDarkened:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCheckmarkVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDarkened:(BOOL)arg1 ;
-(BOOL)isDarkened;
-(void)setRingLineWidth:(double)arg1 ;
-(void)setShadowLineWidth:(double)arg1 ;
@end

