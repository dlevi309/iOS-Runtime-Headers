/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKSiderealDataSourceDelegate;
#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSDate, NSOrderedSet, NSString, NSCalendar, CLKUIAlmanacTransitInfo, CLLocation, NSArray;

@interface NTKSiderealDataSource : NSObject {

	float _altitudes[361];
	NSDate* _startOfDayForReferenceDate;
	NSDate* _endOfDayForReferenceDate;
	NSOrderedSet* _daytimeEvents;
	NSString* _locationManagerToken;
	NSCalendar* _currentCalendar;
	NSDate* _cachedDate;
	NSDate* _cachedStartOfDay;
	NSDate* _cachedStartOfNextDay;
	BOOL _isConstantSunUpOrDown;
	id<NTKSiderealDataSourceDelegate> _delegate;
	CLKUIAlmanacTransitInfo* _sunriseSunsetInfo;
	NSDate* _referenceDate;
	CLLocation* _referenceLocation;
	NSOrderedSet* _solarEvents;
	NSOrderedSet* _sectors;
	NSArray* _waypoints;

}

@property (nonatomic,retain) NSOrderedSet * solarEvents;                                     //@synthesize solarEvents=_solarEvents - In the implementation block
@property (nonatomic,retain) NSOrderedSet * sectors;                                         //@synthesize sectors=_sectors - In the implementation block
@property (nonatomic,retain) NSArray * waypoints;                                            //@synthesize waypoints=_waypoints - In the implementation block
@property (assign,nonatomic) BOOL isConstantSunUpOrDown;                                     //@synthesize isConstantSunUpOrDown=_isConstantSunUpOrDown - In the implementation block
@property (nonatomic,retain) CLKUIAlmanacTransitInfo * sunriseSunsetInfo;                    //@synthesize sunriseSunsetInfo=_sunriseSunsetInfo - In the implementation block
@property (assign,nonatomic,__weak) id<NTKSiderealDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDate * referenceDate;                                         //@synthesize referenceDate=_referenceDate - In the implementation block
@property (nonatomic,retain) CLLocation * referenceLocation;                                 //@synthesize referenceLocation=_referenceLocation - In the implementation block
-(id)init;
-(id<NTKSiderealDataSourceDelegate>)delegate;
-(void)setDelegate:(id<NTKSiderealDataSourceDelegate>)arg1 ;
-(NSDate *)referenceDate;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(CLLocation *)referenceLocation;
-(void)_updateData;
-(NSArray *)waypoints;
-(void)setWaypoints:(NSArray *)arg1 ;
-(void)setReferenceLocation:(CLLocation *)arg1 ;
-(void)stopLocationUpdates;
-(void)startLocationUpdates;
-(void)updateModelWithDate:(id)arg1 ;
-(void)updateForTimeZoneChange;
-(CharacterPoseSpecs)altitudeForProgress:(double)arg1 ;
-(BOOL)isConstantSunUpOrDown;
-(void)setSectors:(NSOrderedSet *)arg1 ;
-(void)_updateWaypoints;
-(NSOrderedSet *)sectors;
-(id)interpolateBetweenCalendricalMidnights:(double)arg1 ;
-(double)reverseInterpolateBetweenCalendricalMidnights:(id)arg1 ;
-(BOOL)isDateInReferenceDate:(id)arg1 ;
-(void)updateForSignificantTimeChange;
-(CLKUIAlmanacTransitInfo *)sunriseSunsetInfo;
-(void)_loadStartEndDates;
-(void)_notifyDataDidUpdate;
-(void)ensureLocation:(id)arg1 ;
-(id)_allAvailableSolarEvents;
-(BOOL)date:(id)arg1 isBetweenDate:(id)arg2 andDate:(id)arg3 ;
-(long long)_startOfDayEventPreceedingFirstSolarEvent:(long long)arg1 ;
-(long long)_endOfDayEventFollowingSolarEvent:(long long)arg1 ;
-(double)_solarPercentageToDegree:(double)arg1 ;
-(CGPoint)_geoLocationForReferenceLocation;
-(void)_updateSolarEvents;
-(void)_updateSolarSectors;
-(void)_updateDayEvents;
-(id)_eventWithType:(long long)arg1 time:(id)arg2 ;
-(void)_locationManagerUpdatedLocation:(id)arg1 error:(id)arg2 ;
-(BOOL)_didLocationChangeSignificantlyFromOldLocation:(id)arg1 toNewLocation:(id)arg2 ;
-(id)daytimeEvents;
-(id)_placeholderSolarEvents;
-(void)setSunriseSunsetInfo:(CLKUIAlmanacTransitInfo *)arg1 ;
-(NSOrderedSet *)solarEvents;
-(void)setSolarEvents:(NSOrderedSet *)arg1 ;
-(void)setIsConstantSunUpOrDown:(BOOL)arg1 ;
@end

