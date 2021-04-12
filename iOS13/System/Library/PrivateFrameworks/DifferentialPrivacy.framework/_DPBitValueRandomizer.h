/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(double)epsilon;
-(unsigned long long)p;
-(id)initWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2 ;
-(id)randomizeStrings:(id)arg1 forKey:(id)arg2 ;
-(id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3 ;
-(id)randomizeBitValues:(id)arg1 forKey:(id)arg2 ;
-(_DPBiasedCoin *)epsilonCoin;
-(id)randomize:(id)arg1 ;
@end

