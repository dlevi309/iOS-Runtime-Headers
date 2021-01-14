/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol TLTimelineDelegate <NSObject>
@optional
-(void)timelineTimerDidFire:(id)arg1;
-(void)nowEntryDidChangeFrom:(id)arg1 to:(id)arg2;

@required
-(void)entriesDidChangeInTimeline:(id)arg1;
-(void)timeline:(id)arg1 didChangeNowEntryFrom:(id)arg2 to:(id)arg3;

@end

