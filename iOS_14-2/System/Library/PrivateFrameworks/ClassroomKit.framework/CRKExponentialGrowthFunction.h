/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

