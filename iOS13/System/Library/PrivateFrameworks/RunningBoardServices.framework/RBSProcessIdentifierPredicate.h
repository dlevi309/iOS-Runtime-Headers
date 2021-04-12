/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSProcessPredicateImpl.h>

@protocol RBSProcessIdentifier;
@interface RBSProcessIdentifierPredicate : RBSProcessPredicateImpl {

	id<RBSProcessIdentifier> _identifier;

}

@property (nonatomic,readonly) id<RBSProcessIdentifier> identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id<RBSProcessIdentifier>)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)matchesProcess:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)processPredicate;
@end

