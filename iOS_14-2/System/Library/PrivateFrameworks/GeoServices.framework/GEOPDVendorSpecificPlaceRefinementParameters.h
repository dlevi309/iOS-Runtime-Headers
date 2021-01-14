/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOStructuredAddress, NSData, NSString, NSMutableArray, GEOLatLng;

@interface GEOPDVendorSpecificPlaceRefinementParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOStructuredAddress* _addressHint;
	NSData* _addressObjectHint;
	NSString* _externalItemId;
	NSMutableArray* _formattedAddressLineHints;
	GEOLatLng* _locationHint;
	unsigned long long _muid;
	NSString* _placeNameHint;
	NSString* _vendorId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _addressGeocodeAccuracyHint;
	int _placeTypeHint;
	int _resultProviderId;
	struct {
		unsigned has_muid : 1;
		unsigned has_addressGeocodeAccuracyHint : 1;
		unsigned has_placeTypeHint : 1;
		unsigned has_resultProviderId : 1;
		unsigned read_unknownFields : 1;
		unsigned read_addressHint : 1;
		unsigned read_addressObjectHint : 1;
		unsigned read_externalItemId : 1;
		unsigned read_formattedAddressLineHints : 1;
		unsigned read_locationHint : 1;
		unsigned read_placeNameHint : 1;
		unsigned read_vendorId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) BOOL hasVendorId; 
@property (nonatomic,retain) NSString * vendorId; 
@property (nonatomic,readonly) BOOL hasExternalItemId; 
@property (nonatomic,retain) NSString * externalItemId; 
@property (nonatomic,readonly) BOOL hasLocationHint; 
@property (nonatomic,retain) GEOLatLng * locationHint; 
@property (nonatomic,readonly) BOOL hasAddressHint; 
@property (nonatomic,retain) GEOStructuredAddress * addressHint; 
@property (nonatomic,readonly) BOOL hasPlaceNameHint; 
@property (nonatomic,retain) NSString * placeNameHint; 
@property (nonatomic,retain) NSMutableArray * formattedAddressLineHints; 
@property (assign,nonatomic) BOOL hasPlaceTypeHint; 
@property (assign,nonatomic) int placeTypeHint; 
@property (assign,nonatomic) BOOL hasAddressGeocodeAccuracyHint; 
@property (assign,nonatomic) int addressGeocodeAccuracyHint; 
@property (nonatomic,readonly) BOOL hasAddressObjectHint; 
@property (nonatomic,retain) NSData * addressObjectHint; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)formattedAddressLineHintType;
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasMuid;
-(void)setHasMuid:(BOOL)arg1 ;
-(id)addressGeocodeAccuracyHintAsString:(int)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2 ;
-(int)resultProviderId;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(void)setHasAddressGeocodeAccuracyHint:(BOOL)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setResultProviderId:(int)arg1 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(GEOCoarseLocationLatLng)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setHasPlaceTypeHint:(BOOL)arg1 ;
-(void)setVendorId:(NSString *)arg1 ;
-(void)addFormattedAddressLineHint:(id)arg1 ;
-(BOOL)hasAddressObjectHint;
-(void)mergeFrom:(id)arg1 ;
-(void)setPlaceTypeHint:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setAddressObjectHint:(NSData *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)externalItemId;
-(NSString *)vendorId;
-(id)formattedAddressLineHintAtIndex:(unsigned long long)arg1 ;
-(void)setAddressHint:(GEOStructuredAddress *)arg1 ;
-(id)description;
-(void)setExternalItemId:(NSString *)arg1 ;
-(unsigned long long)formattedAddressLineHintsCount;
-(void)setLocationHint:(GEOLatLng *)arg1 ;
-(int)StringAsAddressGeocodeAccuracyHint:(id)arg1 ;
-(NSString *)placeNameHint;
-(BOOL)hasAddressGeocodeAccuracyHint;
-(int)addressGeocodeAccuracyHint;
-(void)setPlaceNameHint:(NSString *)arg1 ;
-(void)clearFormattedAddressLineHints;
-(unsigned long long)hash;
-(id)placeTypeHintAsString:(int)arg1 ;
-(int)placeTypeHint;
-(GEOLatLng *)locationHint;
-(BOOL)hasPlaceNameHint;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)muid;
-(int)StringAsPlaceTypeHint:(id)arg1 ;
-(NSData *)addressObjectHint;
-(BOOL)hasAddressHint;
-(id)initWithMuid:(unsigned long long)arg1 locationHint:(GEOCoarseLocationLatLng)arg2 placeNameHint:(id)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 ;
-(id)initWithMapItemToRefine:(id)arg1 coordinate:(GEOCoarseLocationLatLng)arg2 contentProvider:(id)arg3 ;
-(void)setFormattedAddressLineHints:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasExternalItemId;
-(void)setAddressGeocodeAccuracyHint:(int)arg1 ;
-(BOOL)hasPlaceTypeHint;
-(BOOL)hasLocationHint;
-(BOOL)hasVendorId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)formattedAddressLineHints;
-(id)initWithJSON:(id)arg1 ;
-(GEOStructuredAddress *)addressHint;
-(BOOL)isEqual:(id)arg1 ;
@end

