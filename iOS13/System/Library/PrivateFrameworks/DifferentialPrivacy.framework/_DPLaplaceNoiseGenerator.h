/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@interface _DPLaplaceNoiseGenerator : NSObject {

	double _b;

}

@property (b,nonatomic,readonly) double b;              //@synthesize b=_b - In the implementation block
+(id)zeroMeanLaplaceNoiseGenerator:(double)arg1 ;
-(id)init;
-(id)description;
-(id)initWithScale:(double)arg1 ;
-(double)sample;
-(double)b;
@end

