/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDGroundViewLabelInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	double _endHeading;
	NSString* _localityName;
	NSString* _locationName;
	NSString* _secondaryLocationName;
	double _startHeading;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_endHeading : 1;
		unsigned has_startHeading : 1;
		unsigned read_unknownFields : 1;
		unsigned read_localityName : 1;
		unsigned read_locationName : 1;
		unsigned read_secondaryLocationName : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLocationName; 
@property (nonatomic,retain) NSString * locationName; 
@property (nonatomic,readonly) BOOL hasSecondaryLocationName; 
@property (nonatomic,retain) NSString * secondaryLocationName; 
@property (nonatomic,readonly) BOOL hasLocalityName; 
@property (nonatomic,retain) NSString * localityName; 
@property (assign,nonatomic) BOOL hasStartHeading; 
@property (assign,nonatomic) double startHeading; 
@property (assign,nonatomic) BOOL hasEndHeading; 
@property (assign,nonatomic) double endHeading; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setEndHeading:(double)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(void)setSecondaryLocationName:(NSString *)arg1 ;
-(id)jsonRepresentation;
-(void)setLocationName:(NSString *)arg1 ;
-(BOOL)hasStartHeading;
-(double)startHeading;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)localityName;
-(id)initWithData:(id)arg1 ;
-(NSString *)secondaryLocationName;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setStartHeading:(double)arg1 ;
-(BOOL)hasEndHeading;
-(unsigned long long)hash;
-(BOOL)hasLocationName;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasSecondaryLocationName;
-(void)setHasStartHeading:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLocalityName:(NSString *)arg1 ;
-(BOOL)hasLocalityName;
-(void)setHasEndHeading:(BOOL)arg1 ;
-(NSString *)locationName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)endHeading;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

