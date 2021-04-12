/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)applySettings:(id)arg1 ;
-(void)setRasterizationScale:(double)arg1 ;
-(void)transitionIncrementallyToSettings:(id)arg1 weighting:(double)arg2 ;
-(void)transitionComplete;
-(double)rasterizationScale;
-(double)scaleForNoBlur;
-(void)setScaleForNoBlur:(double)arg1 ;
@end

