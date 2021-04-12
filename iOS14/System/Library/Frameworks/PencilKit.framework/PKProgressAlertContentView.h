/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class _PKAnimatableBorderCornerRadiusView, _PKPathView;

@interface PKProgressAlertContentView : UIView {

	_PKAnimatableBorderCornerRadiusView* _outerRingView;
	_PKPathView* _innerPieView;
	double _progress;

}

@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)progress;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 ;
-(id)_shapeLayerPathForProgress:(double)arg1 ;
@end

