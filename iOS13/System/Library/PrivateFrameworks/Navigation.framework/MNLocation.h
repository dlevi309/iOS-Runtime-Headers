/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <CoreLocation/CLLocation.h>

@class GEORouteMatch, GEORoadMatch, CLLocation, GEONavigationMatchInfo, NSString, NSDate;

@interface MNLocation : CLLocation {

	unsigned long long _state;
	GEORouteMatch* _routeMatch;
	GEORoadMatch* _roadMatch;
	CLLocation* _rawLocation;
	CLLocationCoordinate2D _rawShiftedCoordinate;
	GEONavigationMatchInfo* _detailedMatchInfo;
	NSString* _roadName;
	NSString* _shieldText;
	long long _shieldType;
	unsigned _roadLineType;
	unsigned long long _speedLimit;
	BOOL _speedLimitIsMPH;
	long long _speedLimitShieldType;
	BOOL _isDirectional;
	BOOL _locationUnreliable;
	NSDate* _expirationDate;
	NSDate* _originalDate;
	unsigned long long _traceIndex;
	BOOL _isLeeched;
	int _rampType;

}

@property (nonatomic,readonly) int _nav_source; 
@property (assign,nonatomic) unsigned long long traceIndex; 
@property (assign,nonatomic) unsigned long long state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) GEORoadMatch * roadMatch;                                 //@synthesize roadMatch=_roadMatch - In the implementation block
@property (nonatomic,retain) CLLocation * rawLocation;                                 //@synthesize rawLocation=_rawLocation - In the implementation block
@property (nonatomic,retain) GEORouteMatch * routeMatch;                               //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,retain) GEONavigationMatchInfo * detailedMatchInfo;               //@synthesize detailedMatchInfo=_detailedMatchInfo - In the implementation block
@property (nonatomic,copy) NSString * roadName;                                        //@synthesize roadName=_roadName - In the implementation block
@property (nonatomic,copy) NSString * shieldText;                                      //@synthesize shieldText=_shieldText - In the implementation block
@property (assign,nonatomic) long long shieldType;                                     //@synthesize shieldType=_shieldType - In the implementation block
@property (assign,nonatomic) unsigned roadLineType;                                    //@synthesize roadLineType=_roadLineType - In the implementation block
@property (assign,nonatomic) int rampType;                                             //@synthesize rampType=_rampType - In the implementation block
@property (assign,nonatomic) unsigned long long speedLimit;                            //@synthesize speedLimit=_speedLimit - In the implementation block
@property (assign,nonatomic) BOOL speedLimitIsMPH;                                     //@synthesize speedLimitIsMPH=_speedLimitIsMPH - In the implementation block
@property (assign,nonatomic) long long speedLimitShieldType;                           //@synthesize speedLimitShieldType=_speedLimitShieldType - In the implementation block
@property (assign,nonatomic) BOOL isDirectional;                                       //@synthesize isDirectional=_isDirectional - In the implementation block
@property (assign,nonatomic) BOOL locationUnreliable;                                  //@synthesize locationUnreliable=_locationUnreliable - In the implementation block
@property (nonatomic,readonly) unsigned long long stepIndex; 
@property (nonatomic,readonly) BOOL isProjected; 
@property (nonatomic,retain) NSDate * expirationDate;                                  //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSDate * originalDate;                                    //@synthesize originalDate=_originalDate - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D rawShiftedCoordinate;              //@synthesize rawShiftedCoordinate=_rawShiftedCoordinate - In the implementation block
@property (assign,nonatomic) BOOL isLeeched;                                           //@synthesize isLeeched=_isLeeched - In the implementation block
-(id)description;
-(unsigned long long)state;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(id)initWithClientLocation:(SCD_Struct_MN20)arg1 ;
-(id)matchInfo;
-(int)rampType;
-(unsigned long long)speedLimit;
-(BOOL)speedLimitIsMPH;
-(NSString *)shieldText;
-(void)setShieldText:(NSString *)arg1 ;
-(long long)shieldType;
-(unsigned long long)stepIndex;
-(GEORouteMatch *)routeMatch;
-(void)setRouteMatch:(GEORouteMatch *)arg1 ;
-(GEORoadMatch *)roadMatch;
-(void)setLocationUnreliable:(BOOL)arg1 ;
-(GEONavigationMatchInfo *)detailedMatchInfo;
-(void)setDetailedMatchInfo:(GEONavigationMatchInfo *)arg1 ;
-(void)setShieldType:(long long)arg1 ;
-(NSString *)roadName;
-(void)setRoadName:(NSString *)arg1 ;
-(SCD_Struct_MN5*)_roadFeature;
-(id)initWithRawLocation:(id)arg1 ;
-(CLLocation *)rawLocation;
-(BOOL)locationUnreliable;
-(NSDate *)originalDate;
-(void)setOriginalDate:(NSDate *)arg1 ;
-(id)_navigation_routeMatch;
-(BOOL)_navigation_hasValidCourse;
-(BOOL)_navigation_isStale;
-(void)setRampType:(int)arg1 ;
-(id)initWithLocationDetails:(id)arg1 route:(id)arg2 ;
-(id)initWithRouteMatch:(id)arg1 rawLocation:(id)arg2 locationMatchType:(unsigned long long)arg3 ;
-(id)initWithRoadMatch:(id)arg1 rawLocation:(id)arg2 locationMatchType:(unsigned long long)arg3 ;
-(id)initWithRawLocation:(id)arg1 locationMatchType:(unsigned long long)arg2 ;
-(unsigned)roadLineType;
-(void)setRoadLineType:(unsigned)arg1 ;
-(void)setSpeedLimit:(unsigned long long)arg1 ;
-(void)setSpeedLimitIsMPH:(BOOL)arg1 ;
-(long long)speedLimitShieldType;
-(void)setSpeedLimitShieldType:(long long)arg1 ;
-(id)initWithLocationDetails:(id)arg1 ;
-(CLLocationCoordinate2D)_navigation_rawShiftedCoordinate;
-(id)_navigation_detailedMatchInfo;
-(void)setTraceIndex:(unsigned long long)arg1 ;
-(unsigned long long)traceIndex;
-(int)_nav_source;
-(void)setRawShiftedCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setIsDirectional:(BOOL)arg1 ;
-(void)setRoadMatch:(GEORoadMatch *)arg1 ;
-(void)setRawLocation:(CLLocation *)arg1 ;
-(BOOL)isProjected;
-(id)_referenceFrameAsString:(int)arg1 ;
-(id)propagatedLocationForTimeInterval:(double)arg1 shouldProjectAlongRoute:(BOOL)arg2 ;
-(BOOL)isDirectional;
-(CLLocationCoordinate2D)rawShiftedCoordinate;
-(BOOL)isLeeched;
-(void)setIsLeeched:(BOOL)arg1 ;
-(id)initWithGEOLocation:(id)arg1 ;
@end

