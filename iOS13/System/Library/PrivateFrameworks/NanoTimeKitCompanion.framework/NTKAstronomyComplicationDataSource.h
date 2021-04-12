/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@class NSString, CLLocation;

@interface NTKAstronomyComplicationDataSource : NTKComplicationDataSource {

	NSString* _token;
	CLLocation* _currentLocation;
	CLLocation* _anyLocation;
	unsigned long long _vista;
	BOOL _listeningForNotifications;

}
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
+(BOOL)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(void)dealloc;
-(void)_invalidate;
-(void)pause;
-(void)resume;
-(void)_stopObserving;
-(void)_startObserving;
-(void)becomeActive;
-(void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(unsigned long long)timelineAnimationBehavior;
-(BOOL)supportsTapAction;
-(void)becomeInactive;
-(BOOL)alwaysShowIdealizedTemplateInSwitcher;
-(id)currentSwitcherTemplate;
-(void)getSupportedTimeTravelDirectionsWithHandler:(/*^block*/id)arg1 ;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(Class)richComplicationDisplayViewClassForDevice:(id)arg1 ;
-(void)_handleLocationUpdate:(id)arg1 anyLocation:(id)arg2 ;
-(id)_currentTimelineEntryWithIdealizedDate:(BOOL)arg1 ;
@end

