/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}
-(void)dealloc;
-(void)setProgress:(float)arg1 ;
-(float)progressForFraction:(float)arg1 ;
-(void)adjustForContentOffsetDelta:(CGPoint)arg1 ;
@end

