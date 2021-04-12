/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol _DKSimpleKeyValueStore;
@class NSString;

@interface _DKThrottledActivity : NSObject {

	NSString* _namespace;
	id<_DKSimpleKeyValueStore> _store;

}

@property (nonatomic,retain) id<_DKSimpleKeyValueStore> store;              //@synthesize store=_store - In the implementation block
+(id)standardInstance;
-(id)description;
-(id<_DKSimpleKeyValueStore>)store;
-(id)initWithStore:(id)arg1 namespace:(id)arg2 ;
-(void)performWithMinimumIntervalInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performWithDelayInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performNoMoreOftenInDaysThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 throttleBlock:(/*^block*/id)arg4 ;
-(void)performNoMoreOftenInDaysThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 ;
-(void)performWithMinimumIntervalInMinutesOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)setStore:(id<_DKSimpleKeyValueStore>)arg1 ;
-(id)activityThrottler;
-(void)clearHistoryForName:(id)arg1 ;
-(void)performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 ;
-(void)performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 throttleBlock:(/*^block*/id)arg4 ;
-(void)performNoMoreOftenInMinutesThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 ;
-(void)performNoMoreOftenInMinutesThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 throttleBlock:(/*^block*/id)arg4 ;
-(void)performNoMoreOftenInHoursThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 ;
-(void)performNoMoreOftenInHoursThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 throttleBlock:(/*^block*/id)arg4 ;
-(void)performWithMinimumIntervalInHoursOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performWithMinimumIntervalInDaysOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performWithDelayInMinutesOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performWithDelayInHoursOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)performWithDelayInDaysOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)setDate:(id)arg1 forName:(id)arg2 ;
@end

