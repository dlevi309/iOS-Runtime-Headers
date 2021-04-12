/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_formattedAddressLines : 1;
		unsigned wrote_structuredAddress : 1;
		unsigned wrote_formattedAddressType : 1;
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
+(Class)formattedAddressLineType;
+(id)geoAddressForPlaceData:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)addressDictionary;
-(NSMutableArray *)formattedAddressLines;
-(id)postalAddress;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)formattedAddressType;
-(void)setFormattedAddressType:(int)arg1 ;
-(void)setHasFormattedAddressType:(BOOL)arg1 ;
-(BOOL)hasFormattedAddressType;
-(id)formattedAddressTypeAsString:(int)arg1 ;
-(int)StringAsFormattedAddressType:(id)arg1 ;
-(void)_readFormattedAddressLines;
-(void)_addNoFlagsFormattedAddressLine:(id)arg1 ;
-(void)_readStructuredAddress;
-(GEOStructuredAddress *)structuredAddress;
-(unsigned long long)formattedAddressLinesCount;
-(void)clearFormattedAddressLines;
-(id)formattedAddressLineAtIndex:(unsigned long long)arg1 ;
-(void)addFormattedAddressLine:(id)arg1 ;
-(void)setStructuredAddress:(GEOStructuredAddress *)arg1 ;
-(void)setFormattedAddressLines:(NSMutableArray *)arg1 ;
-(BOOL)hasStructuredAddress;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(id)urlRepresentation;
-(BOOL)_isEquivalentURLRepresentationTo:(id)arg1 ;
-(id)bestName;
-(id)initWithAddressDictionary:(id)arg1 ;
-(id)initWithPostalAddress:(id)arg1 ;
@end

