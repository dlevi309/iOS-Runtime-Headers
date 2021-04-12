/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>
#import <libobjc.A.dylib/NTKTimelineEntryModelCacheDataSource.h>

@class NTKTimelineEntryModelCache, NSString, CLLocation, NSTimer;

@interface NTKSunriseComplicationDataSource : NTKComplicationDataSource <NTKTimelineEntryModelCacheDataSource> {

	NTKTimelineEntryModelCache* _entryModelCache;
	BOOL _isWaitingForGeocodeRequest;
	NSString* _token;
	CLLocation* _displayedLocation;
	NSString* _locationName;
	CLLocation* _delayedLocation;
	NSTimer* _geocodeRequestDelayTimer;

}

@property (nonatomic,retain) NSString * token;                                //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) CLLocation * displayedLocation;                  //@synthesize displayedLocation=_displayedLocation - In the implementation block
@property (nonatomic,retain) NSString * locationName;                         //@synthesize locationName=_locationName - In the implementation block
@property (nonatomic,retain) CLLocation * delayedLocation;                    //@synthesize delayedLocation=_delayedLocation - In the implementation block
@property (nonatomic,retain) NSTimer * geocodeRequestDelayTimer;              //@synthesize geocodeRequestDelayTimer=_geocodeRequestDelayTimer - In the implementation block
@property (assign,nonatomic) BOOL isWaitingForGeocodeRequest;                 //@synthesize isWaitingForGeocodeRequest=_isWaitingForGeocodeRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
+(BOOL)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(void)dealloc;
-(void)_invalidate;
-(NSString *)token;
-(NSString *)locationName;
-(void)setToken:(NSString *)arg1 ;
-(void)_stopObserving;
-(void)setLocationName:(NSString *)arg1 ;
-(void)_startObserving;
-(void)becomeActive;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(unsigned long long)timelineAnimationBehavior;
-(BOOL)supportsTapAction;
-(void)becomeInactive;
-(id)currentSwitcherTemplate;
-(void)getSupportedTimeTravelDirectionsWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineStartDateWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineEndDateWithHandler:(/*^block*/id)arg1 ;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineEntriesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)loadEntryModelsForDay:(id)arg1 ;
-(void)_handleLocation:(id)arg1 error:(id)arg2 ;
-(id)_entryModelsForDate:(id)arg1 nextEvaluationDate:(id*)arg2 ;
-(id)_timelineEntryFromModel:(id)arg1 ;
-(id)_currentEntry:(BOOL)arg1 ;
-(id)_animationGroupForDate:(id)arg1 showingSunrise:(BOOL)arg2 constantSun:(long long)arg3 ;
-(BOOL)_needCurrentEventEntry;
-(id)_animationGroupForNoLocation;
-(id)_animationGroupForDate:(id)arg1 showingSunrise:(BOOL)arg2 constantSun:(long long)arg3 haveLocation:(BOOL)arg4 ;
-(BOOL)_needsToSendGeocodingRequest;
-(void)_geocodeRequestDelayTimerTriggerred;
-(CLLocation *)displayedLocation;
-(void)setDisplayedLocation:(CLLocation *)arg1 ;
-(CLLocation *)delayedLocation;
-(void)setDelayedLocation:(CLLocation *)arg1 ;
-(NSTimer *)geocodeRequestDelayTimer;
-(void)setGeocodeRequestDelayTimer:(NSTimer *)arg1 ;
-(BOOL)isWaitingForGeocodeRequest;
-(void)setIsWaitingForGeocodeRequest:(BOOL)arg1 ;
@end

