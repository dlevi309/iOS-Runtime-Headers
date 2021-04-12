/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@interface _DPUniformNoiseGenerator : NSObject {

	double _minValue;
	double _range;

}

@property (nonatomic,readonly) double minValue;              //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,readonly) double range;                 //@synthesize range=_range - In the implementation block
+(id)generatorWithValueRange:(id)arg1 ;
-(double)sample;
-(id)init;
-(double)range;
-(id)description;
-(double)minValue;
-(id)initWithValueRange:(id)arg1 ;
@end

