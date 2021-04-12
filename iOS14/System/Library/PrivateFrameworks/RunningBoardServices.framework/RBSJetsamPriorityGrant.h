/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSGrant.h>

@interface RBSJetsamPriorityGrant : RBSGrant {

	long long _priority;

}

@property (nonatomic,readonly) long long priority;              //@synthesize priority=_priority - In the implementation block
+(BOOL)supportsRBSXPCSecureCoding;
+(id)grantWithForegroundPriority;
+(id)grantWithPriority:(long long)arg1 ;
+(id)grantWithBackgroundPriority;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(long long)priority;
-(BOOL)isEqual:(id)arg1 ;
@end

