/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoCompassComplications.bundle/NanoCompassComplications
*/

#import <ClockComplications/CLKCComplicationBundleDataSource.h>

@class NCHeading, NCIncline, NCLocation, NCAltitude, NCBearing, NCManager, NCManagerMotionToken, NCManagerLocationToken, NCManagerAltimeterToken, CLKComplicationTimelineEntry, CLKComplicationTemplate;

@interface NanoCompassBaseComplicationDataSource : CLKCComplicationBundleDataSource {

	BOOL _usesMotion;
	BOOL _calibrated;
	BOOL _usesLocation;
	BOOL _useAltimeter;
	BOOL _usesBearing;
	BOOL _paused;
	NCHeading* _heading;
	NCIncline* _incline;
	NCLocation* _location;
	NCAltitude* _altitude;
	NCBearing* _bearing;
	NCManager* _manager;
	NCManagerMotionToken* _motionToken;
	NCManagerLocationToken* _locationToken;
	NCManagerAltimeterToken* _altimeterToken;
	CLKComplicationTimelineEntry* _timelineEntry;
	CLKComplicationTemplate* _alwaysOnTemplate;

}

@property (nonatomic,retain) NCManager * manager;                                       //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NCManagerMotionToken * motionToken;                        //@synthesize motionToken=_motionToken - In the implementation block
@property (nonatomic,retain) NCHeading * heading;                                       //@synthesize heading=_heading - In the implementation block
@property (nonatomic,retain) NCBearing * bearing;                                       //@synthesize bearing=_bearing - In the implementation block
@property (assign,nonatomic) BOOL calibrated;                                           //@synthesize calibrated=_calibrated - In the implementation block
@property (nonatomic,retain) NCIncline * incline;                                       //@synthesize incline=_incline - In the implementation block
@property (nonatomic,retain) NCManagerLocationToken * locationToken;                    //@synthesize locationToken=_locationToken - In the implementation block
@property (nonatomic,retain) NCLocation * location;                                     //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NCAltitude * altitude;                                     //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,retain) NCManagerAltimeterToken * altimeterToken;                  //@synthesize altimeterToken=_altimeterToken - In the implementation block
@property (assign,nonatomic) BOOL paused;                                               //@synthesize paused=_paused - In the implementation block
@property (nonatomic,retain) CLKComplicationTimelineEntry * timelineEntry;              //@synthesize timelineEntry=_timelineEntry - In the implementation block
@property (nonatomic,retain) CLKComplicationTemplate * alwaysOnTemplate;                //@synthesize alwaysOnTemplate=_alwaysOnTemplate - In the implementation block
@property (nonatomic,readonly) BOOL usesMotion;                                         //@synthesize usesMotion=_usesMotion - In the implementation block
@property (nonatomic,readonly) BOOL usesLocation;                                       //@synthesize usesLocation=_usesLocation - In the implementation block
@property (nonatomic,readonly) BOOL useAltimeter;                                       //@synthesize useAltimeter=_useAltimeter - In the implementation block
@property (nonatomic,readonly) BOOL usesBearing;                                        //@synthesize usesBearing=_usesBearing - In the implementation block
+(id)appIdentifier;
+(id)bundleIdentifier;
+(id)localizedAppName;
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
+(id)appNameLocalizationKey;
+(id)bundleIdentifierSuffix;
-(NCHeading *)heading;
-(void)_invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setAltitude:(NCAltitude *)arg1 ;
-(NCAltitude *)altitude;
-(NCLocation *)location;
-(void)setManager:(NCManager *)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(NCBearing *)bearing;
-(void)setLocation:(NCLocation *)arg1 ;
-(void)becomeActive;
-(NCManager *)manager;
-(BOOL)paused;
-(NCIncline *)incline;
-(void)setHeading:(NCHeading *)arg1 ;
-(void)setBearing:(NCBearing *)arg1 ;
-(CLKComplicationTimelineEntry *)timelineEntry;
-(void)dealloc;
-(NCManagerMotionToken *)motionToken;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(CLKComplicationTemplate *)alwaysOnTemplate;
-(id)currentSwitcherTemplate;
-(void)becomeInactive;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 mode:(long long)arg4 ;
-(id)newTemplate;
-(id)noDataTemplate;
-(id)randomizedTemplate;
-(void)setIncline:(NCIncline *)arg1 ;
-(void)setCalibrated:(BOOL)arg1 ;
-(void)_startObservingNotifications;
-(void)setMotionToken:(NCManagerMotionToken *)arg1 ;
-(void)setLocationToken:(NCManagerLocationToken *)arg1 ;
-(void)setAltimeterToken:(NCManagerAltimeterToken *)arg1 ;
-(void)_stopObservingNotifications;
-(void)setAlwaysOnTemplate:(CLKComplicationTemplate *)arg1 ;
-(void)setTimelineEntry:(CLKComplicationTimelineEntry *)arg1 ;
-(void)getSupportedTimeTravelDirectionsWithHandler:(/*^block*/id)arg1 ;
-(float)tritium_randomizedPossibility;
-(id)tritium_randomizedComplicationTemplateForDate:(id)arg1 prevTemplateDate:(id)arg2 ;
-(BOOL)usesMotion;
-(BOOL)calibrated;
-(BOOL)usesLocation;
-(BOOL)useAltimeter;
-(BOOL)usesBearing;
-(NCManagerLocationToken *)locationToken;
-(NCManagerAltimeterToken *)altimeterToken;
@end

