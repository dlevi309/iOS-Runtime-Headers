/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLCircularRegion *)region;
-(NSDate *)startTime;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setRegion:(CLCircularRegion *)arg1 ;
-(void)configureWithConfiguration:(id)arg1 ;
-(BOOL)hasValidConfiguration;
@end

