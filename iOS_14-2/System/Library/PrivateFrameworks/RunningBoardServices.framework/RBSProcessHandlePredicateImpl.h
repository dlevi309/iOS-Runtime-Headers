/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSProcessPredicateImpl.h>

@class RBSProcessIdentity;

@interface RBSProcessHandlePredicateImpl : RBSProcessPredicateImpl {

	RBSProcessIdentity* _identity;
	int _pid;

}
+(BOOL)supportsRBSXPCSecureCoding;
-(id)initWithHandle:(id)arg1 ;
-(BOOL)matchesProcess:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)processIdentifier;
-(id)processPredicate;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

