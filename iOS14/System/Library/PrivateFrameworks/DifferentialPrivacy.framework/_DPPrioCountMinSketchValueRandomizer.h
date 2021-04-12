/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <libobjc.A.dylib/_DPStringRandomizer.h>

@interface _DPPrioCountMinSketchValueRandomizer : NSObject <_DPStringRandomizer> {

	double _epsilon;
	unsigned long long _m;
	unsigned long long _k;

}

@property (nonatomic,readonly) double epsilon;                      //@synthesize epsilon=_epsilon - In the implementation block
@property (m,nonatomic,readonly) unsigned long long m;              //@synthesize m=_m - In the implementation block
@property (k,nonatomic,readonly) unsigned long long k;              //@synthesize k=_k - In the implementation block
+(id)randomizerWithEpsilon:(double)arg1 bitCount:(unsigned long long)arg2 hashFunctionCount:(unsigned long long)arg3 ;
-(unsigned long long)m;
-(unsigned long long)k;
-(id)init;
-(double)epsilon;
-(id)randomizeStrings:(id)arg1 forKey:(id)arg2 ;
-(id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3 ;
-(id)randomizeBitValues:(id)arg1 forKey:(id)arg2 ;
-(id)randomizeStrings:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 ;
-(id)initWithEpsilon:(double)arg1 bitCount:(unsigned long long)arg2 hashFunctionCount:(unsigned long long)arg3 ;
-(id)randomize:(id)arg1 metadata:(id)arg2 ;
@end

