/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@interface EFLinearFunction : NSObject {

	double _slope;
	double _intercept;

}

@property (assign,nonatomic) double slope;                  //@synthesize slope=_slope - In the implementation block
@property (assign,nonatomic) double intercept;              //@synthesize intercept=_intercept - In the implementation block
-(double)intercept;
-(double)slope;
-(id)initWithSlope:(double)arg1 intercept:(double)arg2 ;
-(id)initWithLineThroughPoints:(id)arg1 ;
-(double)evaluateX:(double)arg1 ;
-(double)evaluateReverse:(double)arg1 ;
-(void)setSlope:(double)arg1 ;
-(void)setIntercept:(double)arg1 ;
@end

