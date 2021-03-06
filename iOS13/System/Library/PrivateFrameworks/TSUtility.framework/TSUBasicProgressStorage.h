/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@interface TSUBasicProgressStorage : NSObject {

	double mValue;
	double mMaxValue;
	BOOL mIndeterminate;

}

@property (assign) double value; 
@property (assign) double maxValue; 
@property (getter=isIndeterminate) BOOL indeterminate; 
-(double)value;
-(void)setValue:(double)arg1 ;
-(BOOL)isIndeterminate;
-(void)setIndeterminate:(BOOL)arg1 ;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
@end

