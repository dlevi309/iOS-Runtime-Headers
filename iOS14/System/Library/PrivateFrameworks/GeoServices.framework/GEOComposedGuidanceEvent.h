/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GEOTransitArtworkDataSource;
@class NSUUID, GEOGuidanceEvent, NSMutableArray, NSData, NSString, GEOJunction, NSArray, GEONameInfo, GEOJunctionView;

@interface GEOComposedGuidanceEvent : NSObject <NSSecureCoding> {

	NSUUID* _uniqueID;
	unsigned long long _creationOrder;
	GEOGuidanceEvent* _guidanceEvent;
	unsigned long long _stepIndex;
	unsigned long long _legIndex;
	NSMutableArray* _lanes;
	NSData* _serverRouteID;
	unsigned _stepID;
	int _transportType;
	NSString* _roadName;
	double _distance;
	GEOJunction* _maneuverJunction;
	int _maneuverArrow;
	int _drivingSide;
	SCD_Struct_GE87 _startValidRouteCoordinate;
	SCD_Struct_GE87 _endValidRouteCoordinate;
	SCD_Struct_GE87 _coordinateForDistanceStrings;
	double _startValidDistance;
	double _endValidDistance;
	double _distanceForStrings;
	double _referencePointDistance;
	unsigned long long _source;
	unsigned long long _sourceIndex;
	unsigned long long _enrouteNoticeIndex;
	id<GEOTransitArtworkDataSource> _artworkOverride;

}

@property (nonatomic,readonly) NSUUID * uniqueID;                                            //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) unsigned long long stepIndex;                                 //@synthesize stepIndex=_stepIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long legIndex;                                  //@synthesize legIndex=_legIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasSignGuidance; 
@property (nonatomic,readonly) BOOL hasSpokenGuidance; 
@property (nonatomic,readonly) BOOL hasJunctionView; 
@property (nonatomic,readonly) unsigned long long stackRanking; 
@property (nonatomic,readonly) NSArray * signTitles; 
@property (nonatomic,readonly) NSArray * signDetails; 
@property (nonatomic,readonly) GEONameInfo * shieldInfo; 
@property (nonatomic,readonly) int maneuverArrow;                                            //@synthesize maneuverArrow=_maneuverArrow - In the implementation block
@property (nonatomic,readonly) int drivingSide;                                              //@synthesize drivingSide=_drivingSide - In the implementation block
@property (nonatomic,readonly) GEOJunction * maneuverJunction;                               //@synthesize maneuverJunction=_maneuverJunction - In the implementation block
@property (nonatomic,readonly) GEOJunctionView * junctionView; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artworkOverride;              //@synthesize artworkOverride=_artworkOverride - In the implementation block
@property (nonatomic,readonly) NSString * exclusiveSetIdentifier; 
@property (nonatomic,readonly) NSArray * announcements; 
@property (nonatomic,readonly) double repetitionInterval; 
@property (nonatomic,readonly) BOOL hasHaptics; 
@property (nonatomic,readonly) BOOL isSticky; 
@property (nonatomic,readonly) NSArray * lanes; 
@property (nonatomic,readonly) NSArray * laneTitles; 
@property (nonatomic,readonly) NSArray * laneInstructions; 
@property (nonatomic,readonly) int composedGuidanceEventType; 
@property (nonatomic,readonly) BOOL isLaneGuidanceForManeuver; 
@property (nonatomic,readonly) unsigned long long numChainedAnnouncements; 
@property (nonatomic,readonly) NSData * serverRouteID;                                       //@synthesize serverRouteID=_serverRouteID - In the implementation block
@property (nonatomic,readonly) unsigned stepID;                                              //@synthesize stepID=_stepID - In the implementation block
@property (nonatomic,readonly) int transportType;                                            //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) NSString * roadName;                                          //@synthesize roadName=_roadName - In the implementation block
@property (nonatomic,readonly) double distance;                                              //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE87 startValidRouteCoordinate;                    //@synthesize startValidRouteCoordinate=_startValidRouteCoordinate - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE87 endValidRouteCoordinate;                      //@synthesize endValidRouteCoordinate=_endValidRouteCoordinate - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE87 coordinateForDistanceStrings;                 //@synthesize coordinateForDistanceStrings=_coordinateForDistanceStrings - In the implementation block
@property (nonatomic,readonly) double startValidDistance;                                    //@synthesize startValidDistance=_startValidDistance - In the implementation block
@property (nonatomic,readonly) double endValidDistance;                                      //@synthesize endValidDistance=_endValidDistance - In the implementation block
@property (nonatomic,readonly) double distanceForStrings;                                    //@synthesize distanceForStrings=_distanceForStrings - In the implementation block
@property (nonatomic,readonly) double referencePointDistance;                                //@synthesize referencePointDistance=_referencePointDistance - In the implementation block
@property (assign,nonatomic) unsigned long long source;                                      //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned long long sourceIndex;                                 //@synthesize sourceIndex=_sourceIndex - In the implementation block
@property (assign,nonatomic) unsigned long long enrouteNoticeIndex;                          //@synthesize enrouteNoticeIndex=_enrouteNoticeIndex - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)compare:(id)arg1 ;
-(NSArray *)lanes;
-(NSUUID *)uniqueID;
-(unsigned)stepID;
-(NSString *)roadName;
-(double)distance;
-(long long)comparePriority:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)sourceIndex;
-(GEOJunctionView *)junctionView;
-(double)startValidDistance;
-(double)endValidDistance;
-(BOOL)hasSignGuidance;
-(BOOL)hasSpokenGuidance;
-(BOOL)hasJunctionView;
-(unsigned long long)enrouteNoticeIndex;
-(int)transportType;
-(NSData *)serverRouteID;
-(void)setSource:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)legIndex;
-(NSArray *)signDetails;
-(unsigned long long)stackRanking;
-(unsigned long long)stepIndex;
-(BOOL)isSticky;
-(double)repetitionInterval;
-(NSString *)exclusiveSetIdentifier;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(int)drivingSide;
-(id<GEOTransitArtworkDataSource>)artworkOverride;
-(void)setSourceIndex:(unsigned long long)arg1 ;
-(id)initWithGeoGuidanceEvent:(id)arg1 step:(id)arg2 legIndex:(unsigned long long)arg3 coordinates:(id)arg4 ;
-(void)setEnrouteNoticeIndex:(unsigned long long)arg1 ;
-(BOOL)hasHaptics;
-(GEONameInfo *)shieldInfo;
-(NSArray *)laneTitles;
-(unsigned long long)_junctionViewIDForData:(id)arg1 ;
-(double)startDistanceForSpeed:(double)arg1 ;
-(double)endDistanceForSpeed:(double)arg1 ;
-(NSArray *)laneInstructions;
-(int)composedGuidanceEventType;
-(BOOL)isLaneGuidanceForManeuver;
-(unsigned long long)numChainedAnnouncements;
-(int)maneuverArrow;
-(BOOL)isValidForSpeed:(double)arg1 ;
-(double)triggerDistanceForSpeed:(double)arg1 andDuration:(/*^block*/id)arg2 ;
-(double)desiredTimeGapToEvent:(id)arg1 chained:(BOOL)arg2 ;
-(long long)compareFactoringInSpeed:(id)arg1 speed:(double)arg2 ;
-(GEOJunction *)maneuverJunction;
-(SCD_Struct_GE87)startValidRouteCoordinate;
-(SCD_Struct_GE87)endValidRouteCoordinate;
-(SCD_Struct_GE87)coordinateForDistanceStrings;
-(double)referencePointDistance;
-(double)distanceForStrings;
-(NSArray *)announcements;
-(NSArray *)signTitles;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)source;
@end

