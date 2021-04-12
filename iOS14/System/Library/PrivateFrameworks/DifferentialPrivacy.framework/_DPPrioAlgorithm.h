/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


#import <DifferentialPrivacy/DifferentialPrivacy-Structs.h>
@class _DPBiasedCoin;

@interface _DPPrioAlgorithm : NSObject {

	double _epsilon;
	unsigned long long _dimension;
	SCD_Struct_DP1* _prioMemory;
	_DPBiasedCoin* _coin;

}

@property (nonatomic,readonly) double epsilon;                            //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) unsigned long long dimension;              //@synthesize dimension=_dimension - In the implementation block
@property (nonatomic,readonly) SCD_Struct_DP1* prioMemory;                //@synthesize prioMemory=_prioMemory - In the implementation block
@property (nonatomic,readonly) _DPBiasedCoin * coin;                      //@synthesize coin=_coin - In the implementation block
+(id)prioWithEpsilon:(double)arg1 dimensionality:(unsigned long long)arg2 ;
-(unsigned long long)dimension;
-(_DPBiasedCoin *)coin;
-(double)epsilon;
-(void)dealloc;
-(id)initWithEpsilon:(double)arg1 dimensionality:(unsigned long long)arg2 ;
-(SCD_Struct_DP1*)prioMemory;
-(id)privatizeDataWithBlock:(/*^block*/id)arg1 ;
@end

