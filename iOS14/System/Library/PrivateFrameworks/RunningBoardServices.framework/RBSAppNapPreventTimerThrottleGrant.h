/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSGrant.h>

@interface RBSAppNapPreventTimerThrottleGrant : RBSGrant {

	unsigned char _tier;

}

@property (nonatomic,readonly) unsigned char tier;              //@synthesize tier=_tier - In the implementation block
+(id)grantWithTier:(unsigned char)arg1 ;
-(unsigned char)tier;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

