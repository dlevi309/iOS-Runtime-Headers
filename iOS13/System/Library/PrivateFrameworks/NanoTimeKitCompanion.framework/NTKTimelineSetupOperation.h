/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKTimelineDataOperation.h>

@class NSDate, CLKComplicationTimelineEntry, CLKComplicationTemplate;

@interface NTKTimelineSetupOperation : NTKTimelineDataOperation {

	unsigned long long _directions;
	NSDate* _startDate;
	NSDate* _endDate;
	unsigned long long _privacyBehavior;
	unsigned long long _timelineAnimationBehavior;
	CLKComplicationTimelineEntry* _currentEntry;
	CLKComplicationTemplate* _alwaysOnTemplate;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)_start;
-(void)_cancel;
-(void)_getTimeTravelDirections;
-(void)_getStartDate;
-(void)_getEndDate;
-(void)_getCurrentEntry;
-(void)_getPrivacyBehavior;
-(void)_getTimelineAnimationBehavior;
-(void)_getAlwaysOnTemplate;
-(void)_invokeHandler;
@end

