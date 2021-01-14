/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSProcessPredicateImpl.h>

@interface RBSProcessPlatformPredicate : RBSProcessPredicateImpl {

	int _platform;

}

@property (nonatomic,readonly) int platform;              //@synthesize platform=_platform - In the implementation block
+(BOOL)supportsRBSXPCSecureCoding;
-(id)initWithPlatform:(int)arg1 ;
-(int)platform;
-(BOOL)matchesProcess:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)processPredicate;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

