/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <CoreLocation/CLLocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, GEORouteMatch, GEORoadMatch, CLLocation, GEONavigationMatchInfo, NSString, NSDate;

@interface MNLocation : CLLocation <NSSecureCoding> {

	unsigned long long _state;
	NSUUID* _routeID;
	GEORouteMatch* _routeMatch;
	GEORoadMatch* _roadMatch;
	CLLocation* _rawLocation;
	CLLocationCoordinate2D _rawShiftedCoordinate;
	GEONavigationMatchInfo* _detailedMatchInfo;
	NSString* _roadName;
	NSString* _shieldText;
	long long _shieldType;
	unsigned _roadLineType;
	int _rampType;
	unsigned long long _speedLimit;
	BOOL _speedLimitIsMPH;
	long long _speedLimitShieldType;
	BOOL _isDirectional;
	BOOL _locationUnreliable;
	NSDate* _expirationDate;
	NSDate* _originalDate;
	unsigned long long _traceIndex;
	BOOL _isLeeched;

}

@property (nonatomic,readonly) int _nav_source; 
@property (assign,nonatomic) unsigned long long traceIndex; 
@property (assign,nonatomic) unsigned long long state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) GEORoadMatch * roadMatch;                                 //@synthesize roadMatch=_roadMatch - In the implementation block
@property (nonatomic,retain) CLLocation * rawLocation;                                 //@synthesize rawLocation=_rawLocation - In the implementation block
@property (nonatomic,readonly) NSUUID * routeID;                                       //@synthesize routeID=_routeID - In the implementation block
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
+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(BOOL)isDirectional;
-(void)setTraceIndex:(unsigned long long)arg1 ;
-(unsigned)roadLineType;
-(void)setSpeedLimit:(unsigned long long)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setRouteMatch:(GEORouteMatch *)arg1 ;
-(id)initWithClientLocation:(SCD_Struct_MN20)arg1 ;
-(NSString *)roadName;
-(void)setSpeedLimitShieldType:(long long)arg1 ;
-(BOOL)locationUnreliable;
-(GEORouteMatch *)routeMatch;
-(id)matchInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)speedLimit;
-(GEONavigationMatchInfo *)detailedMatchInfo;
-(BOOL)_navigation_hasValidCourse;
-(long long)speedLimitShieldType;
-(long long)shieldType;
-(BOOL)isLeeched;
-(NSDate *)originalDate;
-(void)setIsLeeched:(BOOL)arg1 ;
-(NSUUID *)routeID;
-(id)description;
-(id)initWithRawLocation:(id)arg1 locationMatchType:(unsigned long long)arg2 ;
-(void)setRoadLineType:(unsigned)arg1 ;
-(void)setShieldText:(NSString *)arg1 ;
-(void)setOriginalDate:(NSDate *)arg1 ;
-(id)initWithRouteMatch:(id)arg1 rawLocation:(id)arg2 locationMatchType:(unsigned long long)arg3 ;
-(void)setSpeedLimitIsMPH:(BOOL)arg1 ;
-(unsigned long long)stepIndex;
-(NSDate *)expirationDate;
-(id)_navigation_detailedMatchInfo;
-(void)setRampType:(int)arg1 ;
-(void)setLocationUnreliable:(BOOL)arg1 ;
-(CLLocationCoordinate2D)_navigation_rawShiftedCoordinate;
-(void)setDetailedMatchInfo:(GEONavigationMatchInfo *)arg1 ;
-(BOOL)speedLimitIsMPH;
-(void)setState:(unsigned long long)arg1 ;
-(id)propagatedLocationForTimeInterval:(double)arg1 shouldProjectAlongRoute:(BOOL)arg2 ;
-(id)initWithRawLocation:(id)arg1 ;
-(int)_nav_source;
-(CLLocation *)rawLocation;
-(id)initWithCoder:(id)arg1 ;
-(GEORoadMatch *)roadMatch;
-(unsigned long long)state;
-(NSString *)shieldText;
-(id)initWithRoadMatch:(id)arg1 rawLocation:(id)arg2 locationMatchType:(unsigned long long)arg3 ;
-(void)setRawShiftedCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setRoadName:(NSString *)arg1 ;
-(CLLocationCoordinate2D)rawShiftedCoordinate;
-(id)initWithGEOLocation:(id)arg1 ;
-(BOOL)isProjected;
-(BOOL)_navigation_isStale;
-(SCD_Struct_MN5*)_roadFeature;
-(unsigned long long)traceIndex;
-(void)setShieldType:(long long)arg1 ;
-(id)_referenceFrameAsString:(int)arg1 ;
-(int)rampType;
-(void)setRoadMatch:(GEORoadMatch *)arg1 ;
-(void)setRawLocation:(CLLocation *)arg1 ;
-(id)_navigation_routeMatch;
-(void)setIsDirectional:(BOOL)arg1 ;
@end

