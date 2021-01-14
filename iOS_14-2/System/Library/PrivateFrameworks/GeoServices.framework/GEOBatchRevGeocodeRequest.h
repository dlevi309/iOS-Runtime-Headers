/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOBatchRevGeocodeRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE90* _additionalPlaceTypes;
	NSString* _deviceCountryCode;
	NSString* _deviceSku;
	NSString* _displayRegion;
	NSMutableArray* _locations;
	NSMutableArray* _serviceTags;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_additionalPlaceTypes : 1;
		unsigned read_deviceCountryCode : 1;
		unsigned read_deviceSku : 1;
		unsigned read_displayRegion : 1;
		unsigned read_locations : 1;
		unsigned read_serviceTags : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * locations; 
@property (nonatomic,readonly) unsigned long long additionalPlaceTypesCount; 
@property (nonatomic,readonly) int* additionalPlaceTypes; 
@property (nonatomic,readonly) BOOL hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode; 
@property (nonatomic,readonly) BOOL hasDisplayRegion; 
@property (nonatomic,retain) NSString * displayRegion; 
@property (nonatomic,readonly) BOOL hasDeviceSku; 
@property (nonatomic,retain) NSString * deviceSku; 
@property (nonatomic,retain) NSMutableArray * serviceTags; 
+(Class)locationType;
+(BOOL)isValid:(id)arg1 ;
+(Class)serviceTagType;
-(NSMutableArray *)locations;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(void)addLocation:(id)arg1 ;
-(void)setDisplayRegion:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearLocations;
-(BOOL)hasDisplayRegion;
-(NSString *)displayRegion;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(Class)responseClass;
-(NSMutableArray *)serviceTags;
-(unsigned long long)serviceTagsCount;
-(NSString *)deviceSku;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)deviceCountryCode;
-(void)clearSensitiveFields;
-(unsigned long long)locationsCount;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)clearServiceTags;
-(void)addAdditionalPlaceType:(int)arg1 ;
-(unsigned long long)additionalPlaceTypesCount;
-(void)clearAdditionalPlaceTypes;
-(int)additionalPlaceTypeAtIndex:(unsigned long long)arg1 ;
-(int*)additionalPlaceTypes;
-(void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)additionalPlaceTypesAsString:(int)arg1 ;
-(int)StringAsAdditionalPlaceTypes:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasDeviceSku;
-(BOOL)readFrom:(id)arg1 ;
-(id)locationAtIndex:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasDeviceCountryCode;
-(void)setDeviceSku:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)addServiceTag:(id)arg1 ;
@end

