/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSLimitation.h>

@class RBSProcessPredicate;

@interface RBSPreventLaunchLimitation : RBSLimitation {

	RBSProcessPredicate* _predicate;

}

@property (nonatomic,readonly) RBSProcessPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
+(id)limitationWithPredicate:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(RBSProcessPredicate *)predicate;
-(id)_initWithPredicate:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

