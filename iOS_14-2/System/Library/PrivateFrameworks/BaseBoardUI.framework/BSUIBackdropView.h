/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
*/

#import <UIKitCore/_UIBackdropView.h>

@interface BSUIBackdropView : _UIBackdropView {

	double _transitionProgress;
	double _initialScale;
	double _finalScale;
	double _scaleForNoBlur;
	double _rasterizationScale;

}

@property (assign,nonatomic) double scaleForNoBlur;                  //@synthesize scaleForNoBlur=_scaleForNoBlur - In the implementation block
@property (assign,nonatomic) double rasterizationScale;              //@synthesize rasterizationScale=_rasterizationScale - In the implementation block
-(void)transitionIncrementallyToSettings:(id)arg1 weighting:(double)arg2 ;
-(void)transitionComplete;
-(double)scaleForNoBlur;
-(double)rasterizationScale;
-(void)applySettings:(id)arg1 ;
-(void)setScaleForNoBlur:(double)arg1 ;
-(void)setRasterizationScale:(double)arg1 ;
@end

