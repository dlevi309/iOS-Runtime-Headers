/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIAnimation.h>

@class CABasicAnimation;

@interface UIScrollViewScrollAnimation : UIAnimation {

	CGPoint _originalOffset;
	CGPoint _targetOffset;
	BOOL _targetOffsetValidAtStart;
	double _accuracy;
	BOOL _adjustsForContentOffsetDelta;
	CABasicAnimation* _customAnimation;
	BOOL _forDiscreteScroll;
	BOOL _beingReplacedForDiscreteScroll;

}
-(float)progressForFraction:(float)arg1 ;
-(void)setProgress:(float)arg1 ;
-(void)adjustForContentOffsetDelta:(CGPoint)arg1 ;
-(void)dealloc;
@end

