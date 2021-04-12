/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIView, CAShapeLayer;

@interface CAMPanoramaArrowView : UIView {

	UIImageView* _arrowHead;
	UIView* _arrowTail;
	CAShapeLayer* _arrowTailPiecesLayer;
	CGPathRef _currentTailPiecesPath;
	CGRect _arrowTailRect;
	double _currentNormalizedSpeed;
	double _tailBiggestDelta;
	double _tailBigDelta;
	double _tailMediumDelta;
	double _tailSmallDelta;

}
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)reset;
-(void)dealloc;
-(void)_updateTailWithAnimationDuration:(double)arg1 ;
-(CGPathRef)_newTailPiecesPathOfWidth:(double*)arg1 ;
-(void)animateWithNormalizedSpeed:(double)arg1 duration:(double)arg2 ;
@end

