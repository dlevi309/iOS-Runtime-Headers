/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSGrant.h>

@interface RBSCPUMinimumUsageGrant : RBSGrant {

	unsigned char _role;
	unsigned long long _percentage;
	double _duration;

}

@property (nonatomic,readonly) unsigned char role;                         //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) unsigned long long percentage;              //@synthesize percentage=_percentage - In the implementation block
@property (nonatomic,readonly) double duration;                            //@synthesize duration=_duration - In the implementation block
+(id)grantForRole:(unsigned char)arg1 withPercentage:(unsigned long long)arg2 duration:(double)arg3 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(unsigned char)role;
-(double)duration;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)percentage;
@end

