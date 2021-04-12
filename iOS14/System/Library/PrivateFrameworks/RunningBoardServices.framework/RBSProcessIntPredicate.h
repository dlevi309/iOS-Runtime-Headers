/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSProcessPredicateImpl.h>

@interface RBSProcessIntPredicate : RBSProcessPredicateImpl {

	unsigned long long _identifier;

}

@property (nonatomic,readonly) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)matchesProcess:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)processPredicate;
-(id)description;
-(unsigned long long)hash;
-(unsigned long long)identifier;
-(id)initWithIdentifier:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

