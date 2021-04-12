/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSProcessPredicateImpl.h>

@class NSSet;

@interface RBSCompoundPredicate : RBSProcessPredicateImpl {

	NSSet* _predicates;

}
+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)matchesProcess:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)processIdentifier;
-(id)description;
-(id)initWithPredicates:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

