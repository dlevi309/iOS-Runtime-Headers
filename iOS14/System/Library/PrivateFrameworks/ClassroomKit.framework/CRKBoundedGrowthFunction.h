/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKGrowthFunction.h>

@protocol CRKGrowthFunction;
@interface CRKBoundedGrowthFunction : NSObject <CRKGrowthFunction> {

	id<CRKGrowthFunction> _growthFunction;
	double _lowerBound;
	double _upperBound;

}

@property (nonatomic,readonly) id<CRKGrowthFunction> growthFunction;              //@synthesize growthFunction=_growthFunction - In the implementation block
@property (nonatomic,readonly) double lowerBound;                                 //@synthesize lowerBound=_lowerBound - In the implementation block
@property (nonatomic,readonly) double upperBound;                                 //@synthesize upperBound=_upperBound - In the implementation block
-(double)lowerBound;
-(double)upperBound;
-(id<CRKGrowthFunction>)growthFunction;
-(double)evaluateWithValue:(double)arg1 ;
-(id)initWithGrowthFunction:(id)arg1 lowerBound:(double)arg2 upperBound:(double)arg3 ;
@end

