/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOAutomobileOptions, GEOCyclingOptions, GEODestinationInfo, NSString, GEOTransitOptions, GEOWalkingOptions;

@interface GEORouteAttributes : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _additionalTransportTypes;
	SCD_Struct_GE90* _uiContexts;
	GEOTimepoint _timepoint;
	GEOAutomobileOptions* _automobileOptions;
	GEOCyclingOptions* _cyclingOptions;
	GEODestinationInfo* _destinationInfo;
	NSString* _phoneticLocaleIdentifier;
	GEOTransitOptions* _transitOptions;
	GEOWalkingOptions* _walkingOptions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _basicPointsToBeIncluded;
	int _destinationType;
	int _mainTransportType;
	int _trafficType;
	unsigned _walkingLimitMeters;
	BOOL _directZilchByLaneFlowlines;
	BOOL _enableExperimentalMode;
	BOOL _includeContingencyRoutes;
	BOOL _includeHistoricTravelTime;
	BOOL _includeLaneGuidance;
	BOOL _includeManeuverIcons;
	BOOL _includePhonetics;
	BOOL _includeTrafficAlongRoute;
	BOOL _includeTrafficIncidents;
	BOOL _includeZilchPoints;
	BOOL _includeCrossLanguagePhonetics;
	BOOL _includeLaneWidths;
	BOOL _useMetricThreshold;
	struct {
		unsigned has_timepoint : 1;
		unsigned has_basicPointsToBeIncluded : 1;
		unsigned has_destinationType : 1;
		unsigned has_mainTransportType : 1;
		unsigned has_trafficType : 1;
		unsigned has_walkingLimitMeters : 1;
		unsigned has_directZilchByLaneFlowlines : 1;
		unsigned has_enableExperimentalMode : 1;
		unsigned has_includeContingencyRoutes : 1;
		unsigned has_includeHistoricTravelTime : 1;
		unsigned has_includeLaneGuidance : 1;
		unsigned has_includeManeuverIcons : 1;
		unsigned has_includePhonetics : 1;
		unsigned has_includeTrafficAlongRoute : 1;
		unsigned has_includeTrafficIncidents : 1;
		unsigned has_includeZilchPoints : 1;
		unsigned has_includeCrossLanguagePhonetics : 1;
		unsigned has_includeLaneWidths : 1;
		unsigned has_useMetricThreshold : 1;
		unsigned read_unknownFields : 1;
		unsigned read_additionalTransportTypes : 1;
		unsigned read_uiContexts : 1;
		unsigned read_automobileOptions : 1;
		unsigned read_cyclingOptions : 1;
		unsigned read_destinationInfo : 1;
		unsigned read_phoneticLocaleIdentifier : 1;
		unsigned read_transitOptions : 1;
		unsigned read_walkingOptions : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMainTransportType; 
@property (assign,nonatomic) int mainTransportType; 
@property (assign,nonatomic) BOOL hasIncludePhonetics; 
@property (assign,nonatomic) BOOL includePhonetics; 
@property (assign,nonatomic) BOOL hasIncludeManeuverIcons; 
@property (assign,nonatomic) BOOL includeManeuverIcons; 
@property (assign,nonatomic) BOOL hasIncludeZilchPoints; 
@property (assign,nonatomic) BOOL includeZilchPoints; 
@property (assign,nonatomic) BOOL hasIncludeContingencyRoutes; 
@property (assign,nonatomic) BOOL includeContingencyRoutes; 
@property (assign,nonatomic) BOOL hasIncludeLaneGuidance; 
@property (assign,nonatomic) BOOL includeLaneGuidance; 
@property (assign,nonatomic) BOOL hasBasicPointsToBeIncluded; 
@property (assign,nonatomic) int basicPointsToBeIncluded; 
@property (assign,nonatomic) BOOL hasTrafficType; 
@property (assign,nonatomic) int trafficType; 
@property (nonatomic,readonly) BOOL hasPhoneticLocaleIdentifier; 
@property (nonatomic,retain) NSString * phoneticLocaleIdentifier; 
@property (assign,nonatomic) BOOL hasIncludeTrafficAlongRoute; 
@property (assign,nonatomic) BOOL includeTrafficAlongRoute; 
@property (assign,nonatomic) BOOL hasTimepoint; 
@property (assign,nonatomic) GEOTimepoint timepoint; 
@property (assign,nonatomic) BOOL hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) BOOL includeHistoricTravelTime; 
@property (assign,nonatomic) BOOL hasIncludeTrafficIncidents; 
@property (assign,nonatomic) BOOL includeTrafficIncidents; 
@property (assign,nonatomic) BOOL hasWalkingLimitMeters; 
@property (assign,nonatomic) unsigned walkingLimitMeters; 
@property (nonatomic,readonly) unsigned long long additionalTransportTypesCount; 
@property (nonatomic,readonly) int* additionalTransportTypes; 
@property (nonatomic,readonly) BOOL hasAutomobileOptions; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions; 
@property (nonatomic,readonly) BOOL hasCyclingOptions; 
@property (nonatomic,retain) GEOCyclingOptions * cyclingOptions; 
@property (nonatomic,readonly) BOOL hasTransitOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions; 
@property (nonatomic,readonly) BOOL hasWalkingOptions; 
@property (nonatomic,retain) GEOWalkingOptions * walkingOptions; 
@property (nonatomic,readonly) unsigned long long uiContextsCount; 
@property (nonatomic,readonly) int* uiContexts; 
@property (assign,nonatomic) BOOL hasUseMetricThreshold; 
@property (assign,nonatomic) BOOL useMetricThreshold; 
@property (assign,nonatomic) BOOL hasEnableExperimentalMode; 
@property (assign,nonatomic) BOOL enableExperimentalMode; 
@property (nonatomic,readonly) BOOL hasDestinationInfo; 
@property (nonatomic,retain) GEODestinationInfo * destinationInfo; 
@property (assign,nonatomic) BOOL hasDestinationType; 
@property (assign,nonatomic) int destinationType; 
@property (assign,nonatomic) BOOL hasIncludeCrossLanguagePhonetics; 
@property (assign,nonatomic) BOOL includeCrossLanguagePhonetics; 
@property (assign,nonatomic) BOOL hasDirectZilchByLaneFlowlines; 
@property (assign,nonatomic) BOOL directZilchByLaneFlowlines; 
@property (assign,nonatomic) BOOL hasIncludeLaneWidths; 
@property (assign,nonatomic) BOOL includeLaneWidths; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)defaultRouteAttributes;
+(BOOL)isValid:(id)arg1 ;
-(void)setIncludeHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasTimepoint;
-(GEOTransitOptions *)transitOptions;
-(id)dictionaryRepresentation;
-(void)setHasBasicPointsToBeIncluded:(BOOL)arg1 ;
-(int)trafficType;
-(BOOL)includeHistoricTravelTime;
-(PBUnknownFields *)unknownFields;
-(void)setHasEnableExperimentalMode:(BOOL)arg1 ;
-(void)setTrafficType:(int)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)StringAsTrafficType:(id)arg1 ;
-(BOOL)hasIncludeHistoricTravelTime;
-(void)setHasIncludeHistoricTravelTime:(BOOL)arg1 ;
-(void)setHasTrafficType:(BOOL)arg1 ;
-(BOOL)hasTrafficType;
-(BOOL)includePhonetics;
-(BOOL)hasIncludeTrafficIncidents;
-(void)readAll:(BOOL)arg1 ;
-(GEOAutomobileOptions *)automobileOptions;
-(id)basicPointsToBeIncludedAsString:(int)arg1 ;
-(void)setHasIncludeCrossLanguagePhonetics:(BOOL)arg1 ;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setDestinationInfo:(GEODestinationInfo *)arg1 ;
-(id)init;
-(void)setDirectZilchByLaneFlowlines:(BOOL)arg1 ;
-(void)setTimepoint:(GEOTimepoint)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasMainTransportType;
-(void)setHasMainTransportType:(BOOL)arg1 ;
-(void)setWalkingOptions:(GEOWalkingOptions *)arg1 ;
-(BOOL)hasCyclingOptions;
-(int)destinationType;
-(BOOL)includeTrafficAlongRoute;
-(int)StringAsBasicPointsToBeIncluded:(id)arg1 ;
-(int)mainTransportType;
-(BOOL)hasIncludeContingencyRoutes;
-(BOOL)hasIncludeZilchPoints;
-(void)addUiContext:(int)arg1 ;
-(void)setHasIncludeContingencyRoutes:(BOOL)arg1 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)setIncludeLaneGuidance:(BOOL)arg1 ;
-(unsigned long long)uiContextsCount;
-(void)mergeFrom:(id)arg1 ;
-(void)setIncludeContingencyRoutes:(BOOL)arg1 ;
-(BOOL)hasWalkingOptions;
-(void)setBasicPointsToBeIncluded:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setIncludeZilchPoints:(BOOL)arg1 ;
-(void)setIncludeLaneWidths:(BOOL)arg1 ;
-(int)StringAsAdditionalTransportTypes:(id)arg1 ;
-(NSString *)phoneticLocaleIdentifier;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDestinationType:(int)arg1 ;
-(void)setEnableExperimentalMode:(BOOL)arg1 ;
-(id)mainTransportTypeAsString:(int)arg1 ;
-(void)setHasIncludeTrafficIncidents:(BOOL)arg1 ;
-(void)setIncludeTrafficIncidents:(BOOL)arg1 ;
-(void)clearAdditionalTransportTypes;
-(BOOL)hasUseMetricThreshold;
-(BOOL)hasWalkingLimitMeters;
-(void)setHasWalkingLimitMeters:(BOOL)arg1 ;
-(BOOL)hasDirectZilchByLaneFlowlines;
-(GEOTimepoint)timepoint;
-(id)destinationTypeAsString:(int)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(unsigned)walkingLimitMeters;
-(id)description;
-(BOOL)hasEnableExperimentalMode;
-(BOOL)hasTransitOptions;
-(BOOL)includeManeuverIcons;
-(int*)uiContexts;
-(void)setHasDestinationType:(BOOL)arg1 ;
-(void)buildRouteAttributes:(id)arg1 result:(/*^block*/id)arg2 ;
-(int*)additionalTransportTypes;
-(BOOL)includeTrafficIncidents;
-(BOOL)useMetricThreshold;
-(BOOL)hasIncludeTrafficAlongRoute;
-(void)setHasDirectZilchByLaneFlowlines:(BOOL)arg1 ;
-(BOOL)hasIncludeLaneGuidance;
-(BOOL)hasIncludePhonetics;
-(void)setPhoneticLocaleIdentifier:(NSString *)arg1 ;
-(int)StringAsMainTransportType:(id)arg1 ;
-(void)setIncludeCrossLanguagePhonetics:(BOOL)arg1 ;
-(int)basicPointsToBeIncluded;
-(int)uiContextAtIndex:(unsigned long long)arg1 ;
-(void)setIncludeManeuverIcons:(BOOL)arg1 ;
-(id)uiContextsAsString:(int)arg1 ;
-(BOOL)hasPhoneticLocaleIdentifier;
-(BOOL)includeLaneGuidance;
-(int)StringAsDestinationType:(id)arg1 ;
-(int)additionalTransportTypeAtIndex:(unsigned long long)arg1 ;
-(void)setIncludeTrafficAlongRoute:(BOOL)arg1 ;
-(void)setUseMetricThreshold:(BOOL)arg1 ;
-(id)additionalTransportTypesAsString:(int)arg1 ;
-(void)setAdditionalTransportTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(void)addAdditionalTransportType:(int)arg1 ;
-(void)setHasIncludeLaneWidths:(BOOL)arg1 ;
-(BOOL)directZilchByLaneFlowlines;
-(BOOL)hasDestinationType;
-(BOOL)includeCrossLanguagePhonetics;
-(void)setHasUseMetricThreshold:(BOOL)arg1 ;
-(void)setWalkingLimitMeters:(unsigned)arg1 ;
-(id)trafficTypeAsString:(int)arg1 ;
-(BOOL)hasBasicPointsToBeIncluded;
-(void)setHasIncludeTrafficAlongRoute:(BOOL)arg1 ;
-(void)setHasIncludeManeuverIcons:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)StringAsUiContexts:(id)arg1 ;
-(void)buildRouteAttributesForETAUpdateRequest:(id)arg1 queue:(id)arg2 result:(/*^block*/id)arg3 ;
-(GEOCyclingOptions *)cyclingOptions;
-(BOOL)hasIncludeManeuverIcons;
-(BOOL)includeLaneWidths;
-(void)setMainTransportType:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCyclingOptions:(GEOCyclingOptions *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUiContexts:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasAutomobileOptions;
-(GEODestinationInfo *)destinationInfo;
-(void)setHasIncludeZilchPoints:(BOOL)arg1 ;
-(BOOL)hasIncludeLaneWidths;
-(BOOL)enableExperimentalMode;
-(unsigned long long)additionalTransportTypesCount;
-(BOOL)includeContingencyRoutes;
-(void)setIncludePhonetics:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clearUiContexts;
-(BOOL)includeZilchPoints;
-(void)setHasTimepoint:(BOOL)arg1 ;
-(void)setHasIncludeLaneGuidance:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(GEOWalkingOptions *)walkingOptions;
-(void)setHasIncludePhonetics:(BOOL)arg1 ;
-(BOOL)hasIncludeCrossLanguagePhonetics;
-(BOOL)hasDestinationInfo;
@end
