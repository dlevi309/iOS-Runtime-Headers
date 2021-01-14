/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@interface _DPLaplaceNoiseGenerator : NSObject {

	double _b;

}

@property (b,nonatomic,readonly) double b;              //@synthesize b=_b - In the implementation block
+(id)zeroMeanLaplaceNoiseGenerator:(double)arg1 ;
-(double)b;
-(double)sample;
-(id)init;
-(id)description;
-(id)initWithScale:(double)arg1 ;
@end

