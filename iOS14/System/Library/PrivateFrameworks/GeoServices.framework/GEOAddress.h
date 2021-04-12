/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOURLSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOStructuredAddress, NSString;

@interface GEOAddress : PBCodable <GEOURLSerializable, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _formattedAddressLines;
	GEOStructuredAddress* _structuredAddress;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _formattedAddressType;
	struct {
		unsigned has_formattedAddressType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_formattedAddressLines : 1;
		unsigned read_structuredAddress : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * formattedAddressLines; 
@property (nonatomic,readonly) BOOL hasStructuredAddress; 
@property (nonatomic,retain) GEOStructuredAddress * structuredAddress; 
@property (assign,nonatomic) BOOL hasFormattedAddressType; 
@property (assign,nonatomic) int formattedAddressType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)geoAddressForPlaceData:(id)arg1 ;
+(Class)formattedAddressLineType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)addressDictionary;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)formattedAddressLinesCount;
-(void)clearFormattedAddressLines;
-(id)formattedAddressLineAtIndex:(unsigned long long)arg1 ;
-(id)urlRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setStructuredAddress:(GEOStructuredAddress *)arg1 ;
-(NSString *)description;
-(GEOStructuredAddress *)structuredAddress;
-(BOOL)hasStructuredAddress;
-(void)addFormattedAddressLine:(id)arg1 ;
-(id)bestName;
-(unsigned long long)hash;
-(void)setFormattedAddressType:(int)arg1 ;
-(int)formattedAddressType;
-(void)setHasFormattedAddressType:(BOOL)arg1 ;
-(BOOL)hasFormattedAddressType;
-(id)formattedAddressTypeAsString:(int)arg1 ;
-(int)StringAsFormattedAddressType:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)initWithPostalAddress:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(BOOL)_isEquivalentURLRepresentationTo:(id)arg1 ;
-(void)setFormattedAddressLines:(NSMutableArray *)arg1 ;
-(NSMutableArray *)formattedAddressLines;
-(id)initWithAddressDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)postalAddress;
-(BOOL)isEqual:(id)arg1 ;
@end

