/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOAdvisoriesInfo, GEOFormattedString, GEORouteInformation;

@interface GEORoutePlanningInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOAdvisoriesInfo* _advisoriesInfo;
	GEOFormattedString* _infrastructureDescription;
	GEOFormattedString* _labelDetailText;
	GEORouteInformation* _routePlanningDescription;
	GEOFormattedString* _trafficDescriptionText;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_advisoriesInfo : 1;
		unsigned read_infrastructureDescription : 1;
		unsigned read_labelDetailText : 1;
		unsigned read_routePlanningDescription : 1;
		unsigned read_trafficDescriptionText : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasRoutePlanningDescription; 
@property (nonatomic,retain) GEORouteInformation * routePlanningDescription; 
@property (nonatomic,readonly) BOOL hasLabelDetailText; 
@property (nonatomic,retain) GEOFormattedString * labelDetailText; 
@property (nonatomic,readonly) BOOL hasInfrastructureDescription; 
@property (nonatomic,retain) GEOFormattedString * infrastructureDescription; 
@property (nonatomic,readonly) BOOL hasAdvisoriesInfo; 
@property (nonatomic,retain) GEOAdvisoriesInfo * advisoriesInfo; 
@property (nonatomic,readonly) BOOL hasTrafficDescriptionText; 
@property (nonatomic,retain) GEOFormattedString * trafficDescriptionText; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(GEOFormattedString *)trafficDescriptionText;
-(GEOFormattedString *)labelDetailText;
-(GEOFormattedString *)infrastructureDescription;
-(GEORouteInformation *)routePlanningDescription;
-(GEOAdvisoriesInfo *)advisoriesInfo;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setInfrastructureDescription:(GEOFormattedString *)arg1 ;
-(void)setRoutePlanningDescription:(GEORouteInformation *)arg1 ;
-(id)description;
-(BOOL)hasInfrastructureDescription;
-(BOOL)hasRoutePlanningDescription;
-(void)setLabelDetailText:(GEOFormattedString *)arg1 ;
-(void)setAdvisoriesInfo:(GEOAdvisoriesInfo *)arg1 ;
-(void)setTrafficDescriptionText:(GEOFormattedString *)arg1 ;
-(BOOL)hasLabelDetailText;
-(BOOL)hasAdvisoriesInfo;
-(BOOL)hasTrafficDescriptionText;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

