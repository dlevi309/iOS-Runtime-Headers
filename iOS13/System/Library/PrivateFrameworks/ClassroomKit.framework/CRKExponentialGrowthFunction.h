/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKGrowthFunction.h>

@interface CRKExponentialGrowthFunction : NSObject <CRKGrowthFunction> {

	double _growthRate;

}

@property (nonatomic,readonly) double growthRate;              //@synthesize growthRate=_growthRate - In the implementation block
-(double)evaluateWithValue:(double)arg1 ;
-(id)initWithGrowthRate:(double)arg1 ;
-(double)growthRate;
@end

