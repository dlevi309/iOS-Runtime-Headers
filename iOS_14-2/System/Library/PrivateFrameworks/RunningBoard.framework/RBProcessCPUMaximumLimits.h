/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@interface RBProcessCPUMaximumLimits : NSObject {

	unsigned long long _percentage;
	unsigned long long _duration;
	unsigned long long _violationPolicy;

}

@property (nonatomic,readonly) unsigned long long percentage;                   //@synthesize percentage=_percentage - In the implementation block
@property (nonatomic,readonly) unsigned long long duration;                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long violationPolicy;              //@synthesize violationPolicy=_violationPolicy - In the implementation block
-(unsigned long long)violationPolicy;
-(id)description;
-(unsigned long long)hash;
-(unsigned long long)duration;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)percentage;
-(id)initWithPercentage:(unsigned long long)arg1 duration:(unsigned long long)arg2 violationPolicy:(unsigned long long)arg3 ;
-(id)unionLimit:(id)arg1 ;
@end

