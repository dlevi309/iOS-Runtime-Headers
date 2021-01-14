/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <libobjc.A.dylib/_DPStringRandomizer.h>

@class _DPBiasedCoin;

@interface _DPBitValueRandomizer : NSObject <_DPStringRandomizer> {

	unsigned long long _p;
	double _epsilon;
	_DPBiasedCoin* _epsilonCoin;

}

@property (p,nonatomic,readonly) unsigned long long p;                   //@synthesize p=_p - In the implementation block
@property (nonatomic,readonly) double epsilon;                           //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) _DPBiasedCoin * epsilonCoin;              //@synthesize epsilonCoin=_epsilonCoin - In the implementation block
+(id)bitValueRandomizerWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2 ;
-(unsigned long long)p;
-(id)init;
-(id)description;
-(double)epsilon;
-(id)initWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2 ;
-(id)randomizeStrings:(id)arg1 forKey:(id)arg2 ;
-(id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3 ;
-(id)randomizeBitValues:(id)arg1 forKey:(id)arg2 ;
-(_DPBiasedCoin *)epsilonCoin;
-(id)randomize:(id)arg1 ;
@end

