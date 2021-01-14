/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSMutableArray;

@interface VCIDRSchedulerPeriodGroup : NSObject {

	unsigned _basePeriodCount;
	unsigned _framesPerBasePeriod;
	NSMutableArray* _streams;
	NSMutableArray* _schedulerItems;

}

@property (nonatomic,readonly) unsigned basePeriodCount;              //@synthesize basePeriodCount=_basePeriodCount - In the implementation block
-(id)description;
-(void)dealloc;
-(void)addStream:(id)arg1 ;
-(void)computeStreamsIDRPosition;
-(id)initWithPeriodCount:(unsigned)arg1 framesPerBasePeriod:(unsigned)arg2 ;
-(id)computeScheduleItemList;
-(unsigned)basePeriodCount;
@end

