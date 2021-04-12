/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NTKPeopleComplication, NSString, NTKPeopleComplicationEntry;

@interface NTKPeopleComplicationDataSource : NTKComplicationDataSource {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isPaused;
	BOOL _needsInvalidation;
	NTKPeopleComplication* _complication;
	NSString* _secondaryContactID;
	NSString* _storeBackedContactID;
	NTKPeopleComplicationEntry* _timelineEntry;
	NTKPeopleComplicationEntry* _switcherEntry;

}
+(BOOL)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
+(long long)tritiumUpdatePriority;
-(void)_setupNotifications;
-(void)pause;
-(void)_tearDownNotifications;
-(void)resume;
-(void)dealloc;
-(void)_invalidateIfNeeded;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)currentSwitcherTemplate;
-(id)complicationApplicationIdentifier;
-(BOOL)supportsTapAction;
-(id)lockedTemplate;
-(void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(unsigned long long)timelineAnimationBehavior;
-(id)_loadTimelineEntry;
-(void)_queue_reloadTimelineEntry;
-(void)_didReceiveContactsCachceChangedNotification;
@end

