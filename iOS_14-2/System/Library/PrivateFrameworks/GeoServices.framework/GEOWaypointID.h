/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOStructuredAddress, NSMutableArray, GEOLatLng, NSString;

@interface GEOWaypointID : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOStructuredAddress* _addressHint;
	NSMutableArray* _formattedAddressLineHints;
	GEOLatLng* _locationHint;
	unsigned long long _muid;
	NSString* _placeNameHint;
	unsigned long long _resultProviderId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _addressGeocodeAccuracyHint;
	int _placeTypeHint;
	struct {
		unsigned has_muid : 1;
		unsigned has_resultProviderId : 1;
		unsigned has_addressGeocodeAccuracyHint : 1;
		unsigned has_placeTypeHint : 1;
		unsigned read_unknownFields : 1;
		unsigned read_addressHint : 1;
		unsigned read_formattedAddressLineHints : 1;
		unsigned read_locationHint : 1;
		unsigned read_placeNameHint : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (assign,nonatomic) BOOL hasResultProviderId; 
@property (assign,nonatomic) unsigned long long resultProviderId; 
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
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)formattedAddressLineHintType;
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasMuid;
-(void)setHasMuid:(BOOL)arg1 ;
-(id)addressGeocodeAccuracyHintAsString:(int)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)resultProviderId;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(void)setHasAddressGeocodeAccuracyHint:(BOOL)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setResultProviderId:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setHasPlaceTypeHint:(BOOL)arg1 ;
-(void)addFormattedAddressLineHint:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setPlaceTypeHint:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)formattedAddressLineHintAtIndex:(unsigned long long)arg1 ;
-(void)setAddressHint:(GEOStructuredAddress *)arg1 ;
-(id)description;
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
-(BOOL)hasAddressHint;
-(void)setFormattedAddressLineHints:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAddressGeocodeAccuracyHint:(int)arg1 ;
-(BOOL)hasPlaceTypeHint;
-(BOOL)hasLocationHint;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)formattedAddressLineHints;
-(id)initWithJSON:(id)arg1 ;
-(GEOStructuredAddress *)addressHint;
-(BOOL)isEqual:(id)arg1 ;
@end

