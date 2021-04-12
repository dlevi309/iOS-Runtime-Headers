/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class UIColor;

@interface SBPieChartSlice : NSObject {

	double _value;
	UIColor* _fillColor;

}

@property (readonly) double value;                     //@synthesize value=_value - In the implementation block
@property (readonly) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
+(id)sliceWithValue:(double)arg1 fillColor:(id)arg2 ;
-(double)value;
-(UIColor *)fillColor;
-(id)initWithValue:(double)arg1 fillColor:(id)arg2 ;
@end

