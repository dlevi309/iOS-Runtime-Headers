/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPAccessPointCorrections, GEORPAmenityCorrections, NSMutableArray, GEORPCorrectedCoordinate, GEORPMapLocation, NSString;

@interface GEORPTransitPoiCorrections : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPAccessPointCorrections* _accessPoint;
	GEORPAmenityCorrections* _amenity;
	NSMutableArray* _businessHours;
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
		unsigned read_coordinate : 1;
		unsigned read_mapLocation : 1;
		unsigned read_name : 1;
		unsigned read_originalName : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_accessPoint : 1;
		unsigned wrote_amenity : 1;
		unsigned wrote_businessHours : 1;
		unsigned wrote_coordinate : 1;
		unsigned wrote_mapLocation : 1;
		unsigned wrote_name : 1;
		unsigned wrote_originalName : 1;
		unsigned wrote_lineScheduleDelay : 1;
		unsigned wrote_lineShapeIncorrect : 1;
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
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)businessHoursType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(GEORPCorrectedCoordinate *)coordinate;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)setCoordinate:(GEORPCorrectedCoordinate *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readName;
-(void)_readCoordinate;
-(BOOL)hasCoordinate;
-(NSMutableArray *)businessHours;
-(void)setBusinessHours:(NSMutableArray *)arg1 ;
-(void)_readMapLocation;
-(GEORPMapLocation *)mapLocation;
-(void)setMapLocation:(GEORPMapLocation *)arg1 ;
-(BOOL)hasMapLocation;
-(void)_readAmenity;
-(void)_readBusinessHours;
-(void)_addNoFlagsBusinessHours:(id)arg1 ;
-(void)_readAccessPoint;
-(void)_readOriginalName;
-(GEORPAmenityCorrections *)amenity;
-(GEORPAccessPointCorrections *)accessPoint;
-(NSString *)originalName;
-(void)setAmenity:(GEORPAmenityCorrections *)arg1 ;
-(unsigned long long)businessHoursCount;
-(void)clearBusinessHours;
-(id)businessHoursAtIndex:(unsigned long long)arg1 ;
-(void)addBusinessHours:(id)arg1 ;
-(void)setAccessPoint:(GEORPAccessPointCorrections *)arg1 ;
-(void)setOriginalName:(NSString *)arg1 ;
-(BOOL)hasAmenity;
-(BOOL)lineShapeIncorrect;
-(void)setLineShapeIncorrect:(BOOL)arg1 ;
-(void)setHasLineShapeIncorrect:(BOOL)arg1 ;
-(BOOL)hasLineShapeIncorrect;
-(BOOL)lineScheduleDelay;
-(void)setLineScheduleDelay:(BOOL)arg1 ;
-(void)setHasLineScheduleDelay:(BOOL)arg1 ;
-(BOOL)hasLineScheduleDelay;
-(BOOL)hasAccessPoint;
-(BOOL)hasOriginalName;
@end

