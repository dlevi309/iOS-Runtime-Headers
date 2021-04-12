/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionHealthDaemon.framework/CompanionHealthDaemon
*/


@class NSArray, HKCategorySample;

@interface CHCoachingDiagnosticData : NSObject {

	NSArray* _items;
	HKCategorySample* _coachingEventSample;

}

@property (nonatomic,readonly) NSArray * items;                                   //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) HKCategorySample * coachingEventSample;              //@synthesize coachingEventSample=_coachingEventSample - In the implementation block
-(id)init;
-(NSArray *)items;
-(void)setCoachingEventSample:(HKCategorySample *)arg1 ;
-(id)itemForInterval:(unsigned long long)arg1 future:(BOOL)arg2 ;
-(HKCategorySample *)coachingEventSample;
@end

