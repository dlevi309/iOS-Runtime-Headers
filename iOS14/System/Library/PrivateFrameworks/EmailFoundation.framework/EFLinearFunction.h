/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@interface EFLinearFunction : NSObject {

	double _slope;
	double _intercept;

}

@property (assign,nonatomic) double slope;                  //@synthesize slope=_slope - In the implementation block
@property (assign,nonatomic) double intercept;              //@synthesize intercept=_intercept - In the implementation block
-(double)slope;
-(double)evaluateX:(double)arg1 ;
-(id)initWithSlope:(double)arg1 intercept:(double)arg2 ;
-(id)initWithLineThroughPoints:(id)arg1 ;
-(double)evaluateReverse:(double)arg1 ;
-(void)setIntercept:(double)arg1 ;
-(void)setSlope:(double)arg1 ;
-(double)intercept;
@end

