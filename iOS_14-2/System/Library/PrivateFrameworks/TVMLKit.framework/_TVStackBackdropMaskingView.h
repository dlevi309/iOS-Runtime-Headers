/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CAGradientLayer, _TVStackBackdropView;

@interface _TVStackBackdropMaskingView : UIView {

	CAGradientLayer* _gradientLayer;
	_TVStackBackdropView* _backdropView;
	double _gradientScale;
	double _gradientStop;

}

@property (nonatomic,retain) _TVStackBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
@property (assign,nonatomic) double gradientScale;                             //@synthesize gradientScale=_gradientScale - In the implementation block
@property (assign,nonatomic) double gradientStop;                              //@synthesize gradientStop=_gradientStop - In the implementation block
-(_TVStackBackdropView *)backdropView;
-(void)setBackdropView:(_TVStackBackdropView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)gradientScale;
-(double)gradientStop;
-(void)setGradientScale:(double)arg1 ;
-(void)setGradientStop:(double)arg1 ;
@end

