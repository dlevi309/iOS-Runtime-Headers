/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

