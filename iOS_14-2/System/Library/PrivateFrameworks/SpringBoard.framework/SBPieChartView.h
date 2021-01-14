/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_updateMetrics;
-(void)drawRect:(CGRect)arg1 ;
-(void)_rotateContext;
-(void)_drawSlice:(id)arg1 atValue:(double)arg2 ;
-(void)setSlices:(id)arg1 ;
@end

