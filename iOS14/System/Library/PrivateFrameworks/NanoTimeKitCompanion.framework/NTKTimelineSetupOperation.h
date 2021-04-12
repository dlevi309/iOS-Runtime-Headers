/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKTimelineDataOperation.h>

@class NSDate, CLKComplicationTimelineEntry, CLKComplicationTemplate;

@interface NTKTimelineSetupOperation : NTKTimelineDataOperation {

	NSDate* _endDate;
	unsigned long long _privacyBehavior;
	unsigned long long _timelineAnimationBehavior;
	CLKComplicationTimelineEntry* _currentEntry;
	CLKComplicationTemplate* _alwaysOnTemplate;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
-(void)setHandler:(id)arg1 ;
-(void)_start;
-(void)_cancel;
-(id)handler;
-(void)_getEndDate;
-(void)_getCurrentEntry;
-(void)_getPrivacyBehavior;
-(void)_getTimelineAnimationBehavior;
-(void)_getAlwaysOnTemplate;
-(void)_invokeHandler;
@end

