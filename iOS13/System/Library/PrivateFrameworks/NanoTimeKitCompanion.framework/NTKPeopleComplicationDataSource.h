/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NTKPeopleComplicationEntry;

@interface NTKPeopleComplicationDataSource : NTKComplicationDataSource {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isPaused;
	BOOL _needsInvalidation;
	NSString* _contactID;
	NTKPeopleComplicationEntry* _timelineEntry;
	NTKPeopleComplicationEntry* _switcherEntry;

}
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
+(BOOL)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(void)dealloc;
-(void)pause;
-(void)resume;
-(void)_setupNotifications;
-(void)_tearDownNotifications;
-(void)_invalidateIfNeeded;
-(id)complicationApplicationIdentifier;
-(void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(unsigned long long)timelineAnimationBehavior;
-(BOOL)supportsTapAction;
-(id)currentSwitcherTemplate;
-(id)lockedTemplate;
-(void)getSupportedTimeTravelDirectionsWithHandler:(/*^block*/id)arg1 ;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(id)_loadTimelineEntry;
-(void)_queue_reloadTimelineEntry;
-(void)_didReceiveContactsCachceChangedNotification;
@end

