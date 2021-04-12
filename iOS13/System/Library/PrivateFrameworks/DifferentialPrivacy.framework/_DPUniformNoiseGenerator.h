/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@interface _DPUniformNoiseGenerator : NSObject {

	double _minValue;
	double _range;

}

@property (nonatomic,readonly) double minValue;              //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,readonly) double range;                 //@synthesize range=_range - In the implementation block
+(id)generatorWithValueRange:(id)arg1 ;
-(id)init;
-(id)description;
-(double)range;
-(double)sample;
-(double)minValue;
-(id)initWithValueRange:(id)arg1 ;
@end

