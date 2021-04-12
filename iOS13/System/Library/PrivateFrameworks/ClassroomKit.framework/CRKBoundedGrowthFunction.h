/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

