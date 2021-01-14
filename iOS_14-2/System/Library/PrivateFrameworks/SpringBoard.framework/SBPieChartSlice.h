/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIColor *)fillColor;
-(double)value;
-(id)initWithValue:(double)arg1 fillColor:(id)arg2 ;
@end

