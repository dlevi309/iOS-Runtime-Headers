/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFTimeCondition.h>

@protocol HFPrimitiveTimeCondition;
@class HFTimeCondition;

@interface HFTimeRangeCondition : HFTimeCondition {

	HFTimeCondition*<HFPrimitiveTimeCondition> _startCondition;
	HFTimeCondition*<HFPrimitiveTimeCondition> _endCondition;

}

@property (nonatomic,readonly) HFTimeCondition*<HFPrimitiveTimeCondition> startCondition;              //@synthesize startCondition=_startCondition - In the implementation block
@property (nonatomic,readonly) HFTimeCondition*<HFPrimitiveTimeCondition> endCondition;                //@synthesize endCondition=_endCondition - In the implementation block
+(id)_primitiveTimePredicateClasses;
-(id)description;
-(id)initWithPredicate:(id)arg1 ;
-(HFTimeCondition*<HFPrimitiveTimeCondition>)startCondition;
-(HFTimeCondition*<HFPrimitiveTimeCondition>)endCondition;
-(id)initWithStartCondition:(id)arg1 endCondition:(id)arg2 ;
@end

