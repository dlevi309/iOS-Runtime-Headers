/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/WorldClockComplications.bundle/WorldClockComplications
*/

#import <ClockComplications/CLKCComplicationBundleDataSource.h>

@class NSString, CLLocation, NSTimer, NWCComplicationTimelineEntryModelCache;

@interface NWCSunriseComplicationBundleDataSource : CLKCComplicationBundleDataSource {

	BOOL _waitingForGeocodeRequest;
	NSString* _token;
	CLLocation* _delayedLocation;
	NSTimer* _geocodeRequestDelayTimer;
	NWCComplicationTimelineEntryModelCache* _cache;
	CLLocation* _displayedLocation;
	NSString* _locationName;

}

@property (nonatomic,retain) NSString * token;                                                             //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) CLLocation * delayedLocation;                                                 //@synthesize delayedLocation=_delayedLocation - In the implementation block
@property (nonatomic,retain) NSTimer * geocodeRequestDelayTimer;                                           //@synthesize geocodeRequestDelayTimer=_geocodeRequestDelayTimer - In the implementation block
@property (nonatomic,retain) NWCComplicationTimelineEntryModelCache * cache;                               //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) CLLocation * displayedLocation;                                               //@synthesize displayedLocation=_displayedLocation - In the implementation block
@property (nonatomic,retain) NSString * locationName;                                                      //@synthesize locationName=_locationName - In the implementation block
@property (assign,getter=isWaitingForGeocodeRequest,nonatomic) BOOL waitingForGeocodeRequest;              //@synthesize waitingForGeocodeRequest=_waitingForGeocodeRequest - In the implementation block
+(id)appIdentifier;
+(id)bundleIdentifier;
+(id)localizedAppName;
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
+(id)legacyNTKComplicationType;
-(void)_invalidate;
-(NWCComplicationTimelineEntryModelCache *)cache;
-(void)setLocationName:(NSString *)arg1 ;
-(void)setCache:(NWCComplicationTimelineEntryModelCache *)arg1 ;
-(void)becomeActive;
-(void)_stopObserving;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)token;
-(void)_startObserving;
-(NSString *)locationName;
-(void)dealloc;
-(void)getTimelineEndDateWithHandler:(/*^block*/id)arg1 ;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)currentSwitcherTemplate;
-(BOOL)supportsTapAction;
-(void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(unsigned long long)timelineAnimationBehavior;
-(void)becomeInactive;
-(void)getSupportedTimeTravelDirectionsWithHandler:(/*^block*/id)arg1 ;
-(void)_handleLocation:(id)arg1 error:(id)arg2 ;
-(void)setDelayedLocation:(CLLocation *)arg1 ;
-(NSTimer *)geocodeRequestDelayTimer;
-(void)setGeocodeRequestDelayTimer:(NSTimer *)arg1 ;
-(void)setWaitingForGeocodeRequest:(BOOL)arg1 ;
-(id)_currentEntry:(BOOL)arg1 ;
-(CLLocation *)displayedLocation;
-(id)_timelineEntryFromEntry:(id)arg1 ;
-(id)_animationGroupForDate:(id)arg1 showingSunrise:(BOOL)arg2 constantSun:(long long)arg3 haveLocation:(BOOL)arg4 ;
-(BOOL)isWaitingForGeocodeRequest;
-(CLLocation *)delayedLocation;
-(void)_scheduleReverseGeocodeTimer:(double)arg1 ;
-(void)setDisplayedLocation:(CLLocation *)arg1 ;
-(BOOL)_needsToSendGeocodingRequest;
-(void)_geocodeRequestDelayTimerTriggerred;
-(id)_animationGroupForDate:(id)arg1 showingSunrise:(BOOL)arg2 constantSun:(long long)arg3 ;
-(BOOL)_needsCurrentEventEntry;
-(id)_animationGroupForNoLocation;
-(id)_entryModelsForDate:(id)arg1 nextEvaluationDate:(id*)arg2 ;
@end

