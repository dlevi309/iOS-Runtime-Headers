/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_addressHint : 1;
		unsigned wrote_addressObjectHint : 1;
		unsigned wrote_externalItemId : 1;
		unsigned wrote_formattedAddressLineHints : 1;
		unsigned wrote_locationHint : 1;
		unsigned wrote_muid : 1;
		unsigned wrote_placeNameHint : 1;
		unsigned wrote_vendorId : 1;
		unsigned wrote_addressGeocodeAccuracyHint : 1;
		unsigned wrote_placeTypeHint : 1;
		unsigned wrote_resultProviderId : 1;
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
+(BOOL)isValid:(id)arg1 ;
+(Class)formattedAddressLineHintType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(int)resultProviderId;
-(void)setResultProviderId:(int)arg1 ;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(NSString *)placeNameHint;
-(NSString *)vendorId;
-(NSString *)externalItemId;
-(void)setAddressObjectHint:(NSData *)arg1 ;
-(void)_readLocationHint;
-(void)_readAddressHint;
-(void)_readPlaceNameHint;
-(void)_readFormattedAddressLineHints;
-(void)_addNoFlagsFormattedAddressLineHint:(id)arg1 ;
-(GEOLatLng *)locationHint;
-(GEOStructuredAddress *)addressHint;
-(NSMutableArray *)formattedAddressLineHints;
-(void)setLocationHint:(GEOLatLng *)arg1 ;
-(void)setAddressHint:(GEOStructuredAddress *)arg1 ;
-(void)setPlaceNameHint:(NSString *)arg1 ;
-(unsigned long long)formattedAddressLineHintsCount;
-(void)clearFormattedAddressLineHints;
-(id)formattedAddressLineHintAtIndex:(unsigned long long)arg1 ;
-(void)addFormattedAddressLineHint:(id)arg1 ;
-(BOOL)hasLocationHint;
-(BOOL)hasAddressHint;
-(BOOL)hasPlaceNameHint;
-(void)setFormattedAddressLineHints:(NSMutableArray *)arg1 ;
-(int)placeTypeHint;
-(void)setPlaceTypeHint:(int)arg1 ;
-(void)setHasPlaceTypeHint:(BOOL)arg1 ;
-(BOOL)hasPlaceTypeHint;
-(id)placeTypeHintAsString:(int)arg1 ;
-(int)StringAsPlaceTypeHint:(id)arg1 ;
-(int)addressGeocodeAccuracyHint;
-(void)setAddressGeocodeAccuracyHint:(int)arg1 ;
-(void)setHasAddressGeocodeAccuracyHint:(BOOL)arg1 ;
-(BOOL)hasAddressGeocodeAccuracyHint;
-(id)addressGeocodeAccuracyHintAsString:(int)arg1 ;
-(int)StringAsAddressGeocodeAccuracyHint:(id)arg1 ;
-(BOOL)hasExternalItemId;
-(BOOL)hasVendorId;
-(void)_readVendorId;
-(void)_readExternalItemId;
-(void)setVendorId:(NSString *)arg1 ;
-(void)setExternalItemId:(NSString *)arg1 ;
-(void)_readAddressObjectHint;
-(NSData *)addressObjectHint;
-(BOOL)hasAddressObjectHint;
-(id)initWithMuid:(unsigned long long)arg1 locationHint:(SCD_Struct_GE32)arg2 placeNameHint:(id)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 ;
-(id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2 ;
-(id)initWithMapItemToRefine:(id)arg1 coordinate:(SCD_Struct_GE32)arg2 contentProvider:(id)arg3 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE32)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 ;
@end

