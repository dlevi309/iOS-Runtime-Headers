/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@class _DPLaplaceNoiseGenerator;

@interface _DPNumberRandomizer : NSObject {

	unsigned long long _range;
	double _epsilon;
	_DPLaplaceNoiseGenerator* _generator;

}

@property (nonatomic,readonly) unsigned long long range;                          //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) double epsilon;                                    //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) _DPLaplaceNoiseGenerator * generator;              //@synthesize generator=_generator - In the implementation block
+(id)numberRandomizerWithRange:(unsigned long long)arg1 epsilon:(double)arg2 ;
-(id)init;
-(unsigned long long)range;
-(id)description;
-(double)epsilon;
-(_DPLaplaceNoiseGenerator *)generator;
-(id)randomize:(id)arg1 ;
-(id)initWithRange:(unsigned long long)arg1 epsilon:(double)arg2 ;
@end

