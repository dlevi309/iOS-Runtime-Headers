/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSDurationAttribute : RBSAttribute {

	double _invalidationDuration;
	double _warningDuration;
	unsigned long long _startPolicy;
	unsigned long long _endPolicy;

}

@property (assign,nonatomic) double invalidationDuration;                 //@synthesize invalidationDuration=_invalidationDuration - In the implementation block
@property (assign,nonatomic) double warningDuration;                      //@synthesize warningDuration=_warningDuration - In the implementation block
@property (assign,nonatomic) unsigned long long startPolicy;              //@synthesize startPolicy=_startPolicy - In the implementation block
@property (assign,nonatomic) unsigned long long endPolicy;                //@synthesize endPolicy=_endPolicy - In the implementation block
+(id)invalidateAfterInterval:(double)arg1 ;
+(id)attributeWithDuration:(double)arg1 ;
+(id)attributeWithDuration:(double)arg1 warningDuration:(double)arg2 startPolicy:(unsigned long long)arg3 endPolicy:(unsigned long long)arg4 ;
+(id)terminateAfterInterval:(double)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)setEndPolicy:(unsigned long long)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(void)setInvalidationDuration:(double)arg1 ;
-(double)invalidationDuration;
-(id)description;
-(unsigned long long)startPolicy;
-(unsigned long long)endPolicy;
-(unsigned long long)hash;
-(double)warningDuration;
-(void)setWarningDuration:(double)arg1 ;
-(void)setStartPolicy:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

