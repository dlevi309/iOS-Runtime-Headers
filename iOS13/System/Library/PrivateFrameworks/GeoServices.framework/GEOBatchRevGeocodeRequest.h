/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOBatchRevGeocodeRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE1* _additionalPlaceTypes;
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
		unsigned wrote_additionalPlaceTypes : 1;
		unsigned wrote_deviceCountryCode : 1;
		unsigned wrote_deviceSku : 1;
		unsigned wrote_displayRegion : 1;
		unsigned wrote_locations : 1;
		unsigned wrote_serviceTags : 1;
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
+(BOOL)isValid:(id)arg1 ;
+(Class)serviceTagType;
+(Class)locationType;
-(id)init;
-(void)dealloc;
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
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(void)_readServiceTags;
-(void)_addNoFlagsServiceTag:(id)arg1 ;
-(unsigned long long)serviceTagsCount;
-(void)clearServiceTags;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(NSMutableArray *)serviceTags;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(void)_readDisplayRegion;
-(NSString *)displayRegion;
-(void)setDisplayRegion:(NSString *)arg1 ;
-(BOOL)hasDisplayRegion;
-(void)_readAdditionalPlaceTypes;
-(void)_addNoFlagsAdditionalPlaceType:(int)arg1 ;
-(void)_readDeviceCountryCode;
-(NSString *)deviceCountryCode;
-(unsigned long long)additionalPlaceTypesCount;
-(void)clearAdditionalPlaceTypes;
-(int)additionalPlaceTypeAtIndex:(unsigned long long)arg1 ;
-(void)addAdditionalPlaceType:(int)arg1 ;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(int*)additionalPlaceTypes;
-(void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)additionalPlaceTypesAsString:(int)arg1 ;
-(int)StringAsAdditionalPlaceTypes:(id)arg1 ;
-(BOOL)hasDeviceCountryCode;
-(NSMutableArray *)locations;
-(void)_readDeviceSku;
-(NSString *)deviceSku;
-(void)setDeviceSku:(NSString *)arg1 ;
-(BOOL)hasDeviceSku;
-(void)addLocation:(id)arg1 ;
-(unsigned long long)locationsCount;
-(void)clearLocations;
-(id)locationAtIndex:(unsigned long long)arg1 ;
-(void)_readLocations;
-(void)_addNoFlagsLocation:(id)arg1 ;
@end

