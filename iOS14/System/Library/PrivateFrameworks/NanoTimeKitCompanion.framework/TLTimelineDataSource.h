/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol TLTimelineDataSource <NSObject>
@optional
-(void)tl_getTimelineEntriesForIdentifiable:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(/*^block*/id)arg4;

@required
-(void)tl_getCurrentTimelineEntryForIdentifiable:(id)arg1 withHandler:(/*^block*/id)arg2;

@end

