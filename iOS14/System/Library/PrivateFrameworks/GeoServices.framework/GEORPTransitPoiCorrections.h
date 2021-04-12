/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPAccessPointCorrections, GEORPAmenityCorrections, NSMutableArray, GEORPPlaceContainmentCorrections, GEORPCorrectedCoordinate, GEORPMapLocation, NSString;

@interface GEORPTransitPoiCorrections : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPAccessPointCorrections* _accessPoint;
	GEORPAmenityCorrections* _amenity;
	NSMutableArray* _businessHours;
	GEORPPlaceContainmentCorrections* _containmentCorrections;
	GEORPCorrectedCoordinate* _coordinate;
	GEORPMapLocation* _mapLocation;
	NSString* _name;
	NSString* _originalName;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _lineScheduleDelay;
	BOOL _lineShapeIncorrect;
	struct {
		unsigned has_lineScheduleDelay : 1;
		unsigned has_lineShapeIncorrect : 1;
		unsigned read_unknownFields : 1;
		unsigned read_accessPoint : 1;
		unsigned read_amenity : 1;
		unsigned read_businessHours : 1;
		unsigned read_containmentCorrections : 1;
		unsigned read_coordinate : 1;
		unsigned read_mapLocation : 1;
		unsigned read_name : 1;
		unsigned read_originalName : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) BOOL hasAmenity; 
@property (nonatomic,retain) GEORPAmenityCorrections * amenity; 
@property (nonatomic,retain) NSMutableArray * businessHours; 
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEORPCorrectedCoordinate * coordinate; 
@property (nonatomic,readonly) BOOL hasMapLocation; 
@property (nonatomic,retain) GEORPMapLocation * mapLocation; 
@property (assign,nonatomic) BOOL hasLineShapeIncorrect; 
@property (assign,nonatomic) BOOL lineShapeIncorrect; 
@property (assign,nonatomic) BOOL hasLineScheduleDelay; 
@property (assign,nonatomic) BOOL lineScheduleDelay; 
@property (nonatomic,readonly) BOOL hasAccessPoint; 
@property (nonatomic,retain) GEORPAccessPointCorrections * accessPoint; 
@property (nonatomic,readonly) BOOL hasOriginalName; 
@property (nonatomic,retain) NSString * originalName; 
@property (nonatomic,readonly) BOOL hasContainmentCorrections; 
@property (nonatomic,retain) GEORPPlaceContainmentCorrections * containmentCorrections; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)businessHoursType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasCoordinate;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasName;
-(id)init;
-(id)jsonRepresentation;
-(GEORPCorrectedCoordinate *)coordinate;
-(GEORPMapLocation *)mapLocation;
-(GEORPAccessPointCorrections *)accessPoint;
-(void)setMapLocation:(GEORPMapLocation *)arg1 ;
-(void)setAccessPoint:(GEORPAccessPointCorrections *)arg1 ;
-(BOOL)hasMapLocation;
-(BOOL)hasAccessPoint;
-(NSString *)originalName;
-(void)setOriginalName:(NSString *)arg1 ;
-(BOOL)hasOriginalName;
-(GEORPAmenityCorrections *)amenity;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setAmenity:(GEORPAmenityCorrections *)arg1 ;
-(GEORPPlaceContainmentCorrections *)containmentCorrections;
-(void)addBusinessHours:(id)arg1 ;
-(void)setContainmentCorrections:(GEORPPlaceContainmentCorrections *)arg1 ;
-(unsigned long long)businessHoursCount;
-(void)clearBusinessHours;
-(id)businessHoursAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasContainmentCorrections;
-(NSString *)name;
-(BOOL)lineScheduleDelay;
-(void)setLineShapeIncorrect:(BOOL)arg1 ;
-(void)setLineScheduleDelay:(BOOL)arg1 ;
-(BOOL)lineShapeIncorrect;
-(BOOL)hasLineShapeIncorrect;
-(void)setHasLineShapeIncorrect:(BOOL)arg1 ;
-(void)setHasLineScheduleDelay:(BOOL)arg1 ;
-(BOOL)hasLineScheduleDelay;
-(id)description;
-(void)setBusinessHours:(NSMutableArray *)arg1 ;
-(void)setCoordinate:(GEORPCorrectedCoordinate *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSMutableArray *)businessHours;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasAmenity;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

