/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSGrant.h>

@interface RBSJetsamPriorityGrant : RBSGrant {

	long long _priority;

}

@property (nonatomic,readonly) long long priority;              //@synthesize priority=_priority - In the implementation block
+(BOOL)supportsBSXPCSecureCoding;
+(id)grantWithPriority:(long long)arg1 ;
+(id)grantWithForegroundPriority;
+(id)grantWithBackgroundPriority;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)priority;
-(id)succinctDescriptionBuilder;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)_initWithPriority:(long long)arg1 ;
@end

