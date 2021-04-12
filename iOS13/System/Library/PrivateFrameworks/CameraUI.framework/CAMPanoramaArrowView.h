/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)reset;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_updateTailWithAnimationDuration:(double)arg1 ;
-(CGPathRef)_newTailPiecesPathOfWidth:(double*)arg1 ;
-(void)animateWithNormalizedSpeed:(double)arg1 duration:(double)arg2 ;
@end

