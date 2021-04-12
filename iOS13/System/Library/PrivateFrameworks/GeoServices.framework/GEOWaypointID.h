/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE92 _flags;

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
-(unsigned long long)resultProviderId;
-(void)setResultProviderId:(unsigned long long)arg1 ;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(NSString *)placeNameHint;
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
@end

