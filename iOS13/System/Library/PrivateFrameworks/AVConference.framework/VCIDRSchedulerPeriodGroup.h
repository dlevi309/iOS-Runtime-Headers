/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(void)addStream:(id)arg1 ;
-(void)computeStreamsIDRPosition;
-(id)initWithPeriodCount:(unsigned)arg1 framesPerBasePeriod:(unsigned)arg2 ;
-(id)computeScheduleItemList;
-(unsigned)basePeriodCount;
@end

