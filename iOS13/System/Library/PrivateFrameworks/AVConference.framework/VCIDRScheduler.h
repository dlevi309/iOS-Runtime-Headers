/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSMutableDictionary, NSMutableArray, NSArray;

@interface VCIDRScheduler : NSObject {

	NSMutableDictionary* _schedulerGroups;
	NSMutableArray* _schedulerItems;
	NSArray* _streams;
	unsigned _basePeriodMs;
	unsigned _framesPerBasePeriod;
	unsigned _captureFramerate;

}

@property (nonatomic,readonly) unsigned basePeriodMs;                  //@synthesize basePeriodMs=_basePeriodMs - In the implementation block
@property (nonatomic,readonly) unsigned captureFramerate;              //@synthesize captureFramerate=_captureFramerate - In the implementation block
+(unsigned)computeGcdForX:(unsigned)arg1 y:(unsigned)arg2 ;
-(void)dealloc;
-(id)description;
-(id)initWithStreams:(id)arg1 captureFramerate:(unsigned)arg2 ;
-(void)computeBasePeriod;
-(BOOL)computeCaptureFramerate;
-(void)computeGroupList;
-(void)computeSchedulerItemList;
-(void)computeSchedulerItemsBudget;
-(void)computeSchedulerItemsPosition;
-(void)computeStreamsIDRPosition;
-(void)realignStreams;
-(void)placeRemainingItems:(id)arg1 placedItems:(id)arg2 leftItem:(id)arg3 rightItem:(id)arg4 ;
-(unsigned)basePeriodMs;
-(unsigned)captureFramerate;
@end

