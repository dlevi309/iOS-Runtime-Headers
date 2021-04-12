/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOStructuredAddress, NSString, GEOLocation;

@interface GEOSignificantLocation : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOStructuredAddress* _address;
	double _confidence;
	NSString* _identifier;
	GEOLocation* _location;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _locationIndex;
	unsigned _numberOfVisitsBucket;
	struct {
		unsigned has_confidence : 1;
		unsigned has_locationIndex : 1;
		unsigned has_numberOfVisitsBucket : 1;
		unsigned read_address : 1;
		unsigned read_identifier : 1;
		unsigned read_location : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (assign,nonatomic) BOOL hasLocationIndex; 
@property (assign,nonatomic) unsigned locationIndex; 
@property (assign,nonatomic) BOOL hasNumberOfVisitsBucket; 
@property (assign,nonatomic) unsigned numberOfVisitsBucket; 
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier; 
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) double confidence; 
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEOStructuredAddress * address; 
+(BOOL)isValid:(id)arg1 ;
-(double)confidence;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasIdentifier;
-(BOOL)hasAddress;
-(void)clearSensitiveFields;
-(GEOLocation *)location;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(id)description;
-(GEOStructuredAddress *)address;
-(void)setConfidence:(double)arg1 ;
-(void)setAddress:(GEOStructuredAddress *)arg1 ;
-(BOOL)hasLocation;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLocationIndex:(unsigned)arg1 ;
-(void)setNumberOfVisitsBucket:(unsigned)arg1 ;
-(unsigned)locationIndex;
-(void)setHasLocationIndex:(BOOL)arg1 ;
-(BOOL)hasLocationIndex;
-(unsigned)numberOfVisitsBucket;
-(void)setHasNumberOfVisitsBucket:(BOOL)arg1 ;
-(BOOL)hasNumberOfVisitsBucket;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

