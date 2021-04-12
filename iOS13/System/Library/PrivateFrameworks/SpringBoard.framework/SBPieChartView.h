/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface SBPieChartView : UIView {

	NSArray* _slices;
	double _valueTotal;
	double _radius;
	CGPoint _center;
	double _defaultRotation;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)_updateMetrics;
-(void)setSlices:(id)arg1 ;
-(void)_rotateContext;
-(void)_drawSlice:(id)arg1 atValue:(double)arg2 ;
@end

