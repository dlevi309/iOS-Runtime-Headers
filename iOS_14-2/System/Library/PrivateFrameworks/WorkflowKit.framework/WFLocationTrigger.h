/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class CLCircularRegion, NSDate;

@interface WFLocationTrigger : WFTrigger {

	CLCircularRegion* _region;
	NSDate* _startTime;
	NSDate* _endTime;

}

@property (nonatomic,copy) CLCircularRegion * region;              //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                   //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                     //@synthesize endTime=_endTime - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)timestampDateFormatter;
-(BOOL)shouldFireTriggerWithEventInfo:(id)arg1 error:(out id*)arg2 ;
-(CLCircularRegion *)region;
-(void)setRegion:(CLCircularRegion *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)configureWithConfiguration:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)startTime;
-(BOOL)hasValidConfiguration;
@end

