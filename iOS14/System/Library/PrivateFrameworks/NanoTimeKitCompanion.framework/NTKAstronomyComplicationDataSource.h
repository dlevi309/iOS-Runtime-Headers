/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(void)_invalidate;
-(void)pause;
-(void)becomeActive;
-(void)_stopObserving;
-(void)_startObserving;
-(void)resume;
-(void)dealloc;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)currentSwitcherTemplate;
-(Class)richComplicationDisplayViewClassForDevice:(id)arg1 ;
-(id)complicationApplicationIdentifier;
-(BOOL)supportsTapAction;
-(BOOL)alwaysShowIdealizedTemplateInSwitcher;
-(void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(unsigned long long)timelineAnimationBehavior;
-(void)_handleLocationUpdate:(id)arg1 anyLocation:(id)arg2 ;
-(id)_currentTimelineEntryWithIdealizedDate:(BOOL)arg1 ;
-(void)becomeInactive;
@end

