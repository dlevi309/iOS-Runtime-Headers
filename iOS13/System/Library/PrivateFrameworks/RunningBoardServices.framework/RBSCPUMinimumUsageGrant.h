/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned char)role;
-(double)duration;
-(id)succinctDescriptionBuilder;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(unsigned long long)percentage;
-(id)_initWithRole:(unsigned char)arg1 percentage:(unsigned long long)arg2 duration:(double)arg3 ;
@end

