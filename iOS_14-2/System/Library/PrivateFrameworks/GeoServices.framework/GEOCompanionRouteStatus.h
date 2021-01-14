/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOLocation, NSData, GEOLatLng, NSArray;

@interface GEOCompanionRouteStatus : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE17* _selectedRideIndexs;
	GEOLocation* _location;
	NSData* _routeID;
	GEOLatLng* _routeMatchCoordinate;
	double _timestamp;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _distanceRemainingOnRoute;
	unsigned _distanceToManeuver;
	unsigned _distanceToRoute;
	int _feedbackType;
	int _hapticsType;
	unsigned _remainingTime;
	unsigned _routeLocationIndex;
	float _routeLocationOffset;
	unsigned _stepID;
	BOOL _guidancePromptsEnabled;
	BOOL _isConnectedToCarplay;
	BOOL _lowGuidanceNavigation;
	SCD_Struct_GE78 _flags;

}

@property (nonatomic,readonly) BOOL isNavigating; 
@property (nonatomic,readonly) BOOL isRecalculating; 
@property (nonatomic,readonly) BOOL hasEffectiveStepID; 
@property (nonatomic,readonly) unsigned effectiveStepID; 
@property (nonatomic,readonly) BOOL hasEffectiveDistanceToManeuver; 
@property (nonatomic,readonly) unsigned effectiveDistanceToManeuver; 
@property (nonatomic,readonly) NSArray * selectedRideIndices; 
@property (assign,nonatomic) BOOL hasFeedbackType; 
@property (assign,nonatomic) int feedbackType; 
@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID; 
@property (assign,nonatomic) BOOL hasDistanceToManeuver; 
@property (assign,nonatomic) unsigned distanceToManeuver; 
@property (assign,nonatomic) BOOL hasDistanceToRoute; 
@property (assign,nonatomic) unsigned distanceToRoute; 
@property (assign,nonatomic) BOOL hasDistanceRemainingOnRoute; 
@property (assign,nonatomic) unsigned distanceRemainingOnRoute; 
@property (assign,nonatomic) BOOL hasRemainingTime; 
@property (assign,nonatomic) unsigned remainingTime; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (assign,nonatomic) BOOL hasRouteLocationIndex; 
@property (assign,nonatomic) unsigned routeLocationIndex; 
@property (assign,nonatomic) BOOL hasRouteLocationOffset; 
@property (assign,nonatomic) float routeLocationOffset; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) BOOL hasRouteMatchCoordinate; 
@property (nonatomic,retain) GEOLatLng * routeMatchCoordinate; 
@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID; 
@property (assign,nonatomic) BOOL hasGuidancePromptsEnabled; 
@property (assign,nonatomic) BOOL guidancePromptsEnabled; 
@property (nonatomic,readonly) unsigned long long selectedRideIndexsCount; 
@property (nonatomic,readonly) unsigned* selectedRideIndexs; 
@property (assign,nonatomic) BOOL hasLowGuidanceNavigation; 
@property (assign,nonatomic) BOOL lowGuidanceNavigation; 
@property (assign,nonatomic) BOOL hasHapticsType; 
@property (assign,nonatomic) int hapticsType; 
@property (assign,nonatomic) BOOL hasIsConnectedToCarplay; 
@property (assign,nonatomic) BOOL isConnectedToCarplay; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)updateFeedbackWithNavigationState:(int)arg1 locationUnreliable:(BOOL)arg2 announcementStage:(unsigned long long)arg3 nextAnnouncementStage:(unsigned long long)arg4 nextAnnouncementTime:(double)arg5 ;
-(void)setIsConnectedToCarplay:(BOOL)arg1 ;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(unsigned)remainingTime;
-(void)readAll:(BOOL)arg1 ;
-(void)setRemainingTime:(unsigned)arg1 ;
-(id)init;
-(unsigned)stepID;
-(id)jsonRepresentation;
-(BOOL)guidancePromptsEnabled;
-(double)timestamp;
-(GEOLocation *)location;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(NSData *)routeID;
-(id)description;
-(void)setHasFeedbackType:(BOOL)arg1 ;
-(BOOL)hasFeedbackType;
-(id)feedbackTypeAsString:(int)arg1 ;
-(int)StringAsFeedbackType:(id)arg1 ;
-(BOOL)hasLocation;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(int)feedbackType;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasStepID;
-(int)hapticsType;
-(void)setHapticsType:(int)arg1 ;
-(GEOLatLng *)routeMatchCoordinate;
-(void)setDistanceToManeuver:(unsigned)arg1 ;
-(void)setDistanceToRoute:(unsigned)arg1 ;
-(void)setRouteLocationIndex:(unsigned)arg1 ;
-(void)setDistanceRemainingOnRoute:(unsigned)arg1 ;
-(void)setRouteLocationOffset:(float)arg1 ;
-(void)setRouteMatchCoordinate:(GEOLatLng *)arg1 ;
-(void)addSelectedRideIndex:(unsigned)arg1 ;
-(void)setLowGuidanceNavigation:(BOOL)arg1 ;
-(unsigned long long)selectedRideIndexsCount;
-(void)setHasStepID:(BOOL)arg1 ;
-(void)clearSelectedRideIndexs;
-(unsigned)selectedRideIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned)distanceToManeuver;
-(unsigned)distanceToRoute;
-(void)setHasDistanceToManeuver:(BOOL)arg1 ;
-(BOOL)hasDistanceToManeuver;
-(void)setHasDistanceToRoute:(BOOL)arg1 ;
-(BOOL)hasRemainingTime;
-(BOOL)hasDistanceToRoute;
-(unsigned)distanceRemainingOnRoute;
-(void)setHasDistanceRemainingOnRoute:(BOOL)arg1 ;
-(BOOL)hasDistanceRemainingOnRoute;
-(void)setHasRemainingTime:(BOOL)arg1 ;
-(unsigned)routeLocationIndex;
-(float)routeLocationOffset;
-(void)setHasRouteLocationIndex:(BOOL)arg1 ;
-(BOOL)hasRouteLocationIndex;
-(void)setHasRouteLocationOffset:(BOOL)arg1 ;
-(BOOL)hasRouteLocationOffset;
-(BOOL)hasRouteMatchCoordinate;
-(void)setHasGuidancePromptsEnabled:(BOOL)arg1 ;
-(void)_updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg1 ;
-(id)initWithRouteID:(id)arg1 ;
-(BOOL)hasGuidancePromptsEnabled;
-(unsigned*)selectedRideIndexs;
-(void)setSelectedRideIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasHapticsType;
-(BOOL)lowGuidanceNavigation;
-(void)setHasLowGuidanceNavigation:(BOOL)arg1 ;
-(BOOL)hasLowGuidanceNavigation;
-(unsigned)effectiveStepID;
-(id)initWithRoute:(id)arg1 routeID:(id)arg2 ;
-(void)updateWithRoute:(id)arg1 routeID:(id)arg2 ;
-(BOOL)hasEffectiveStepID;
-(unsigned)effectiveStepIDInRoute:(id)arg1 ;
-(void)updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg1 routeID:(id)arg2 ;
-(BOOL)isNavigating;
-(BOOL)isRecalculating;
-(BOOL)hasEffectiveDistanceToManeuver;
-(unsigned)effectiveDistanceToManeuver;
-(NSArray *)selectedRideIndices;
-(void)setHasHapticsType:(BOOL)arg1 ;
-(id)hapticsTypeAsString:(int)arg1 ;
-(int)StringAsHapticsType:(id)arg1 ;
-(BOOL)isConnectedToCarplay;
-(void)setHasIsConnectedToCarplay:(BOOL)arg1 ;
-(BOOL)hasIsConnectedToCarplay;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRouteID:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setStepID:(unsigned)arg1 ;
-(void)setFeedbackType:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasRouteID;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

