/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <libobjc.A.dylib/_DPStringRandomizer.h>

@interface _DPPrioValueRandomizer : NSObject <_DPStringRandomizer> {

	double _epsilon;
	unsigned long long _p;

}

@property (nonatomic,readonly) double epsilon;                      //@synthesize epsilon=_epsilon - In the implementation block
@property (p,nonatomic,readonly) unsigned long long p;              //@synthesize p=_p - In the implementation block
+(id)randomizerWithEpsilon:(double)arg1 dimensionality:(unsigned long long)arg2 ;
-(unsigned long long)p;
-(id)init;
-(double)epsilon;
-(id)initWithEpsilon:(double)arg1 dimensionality:(unsigned long long)arg2 ;
-(id)randomizeStrings:(id)arg1 forKey:(id)arg2 ;
-(id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3 ;
-(id)randomizeBitValues:(id)arg1 forKey:(id)arg2 ;
-(id)randomizeBitValues:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 ;
-(id)randomizeBitVectors:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 ;
-(id)randomize:(id)arg1 metadata:(id)arg2 ;
-(id)randomizeVector:(id)arg1 metadata:(id)arg2 ;
@end

