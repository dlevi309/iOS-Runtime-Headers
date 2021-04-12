/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSData, NSString;

@interface GEOWiFiBeaconInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSData* _beaconInfo;
	NSString* _wpsConfigMethods;
	NSString* _wpsDeviceNameData;
	NSString* _wpsDeviceNameElement;
	NSString* _wpsManufacturerElement;
	NSString* _wpsModelName;
	NSString* _wpsModelNumber;
	NSString* _wpsPrimaryDeviceTypeCategory;
	NSString* _wpsPrimaryDeviceTypeSubCategory;
	NSString* _wpsResponseType;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_beaconInfo : 1;
		unsigned read_wpsConfigMethods : 1;
		unsigned read_wpsDeviceNameData : 1;
		unsigned read_wpsDeviceNameElement : 1;
		unsigned read_wpsManufacturerElement : 1;
		unsigned read_wpsModelName : 1;
		unsigned read_wpsModelNumber : 1;
		unsigned read_wpsPrimaryDeviceTypeCategory : 1;
		unsigned read_wpsPrimaryDeviceTypeSubCategory : 1;
		unsigned read_wpsResponseType : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasBeaconInfo; 
@property (nonatomic,retain) NSData * beaconInfo; 
@property (nonatomic,readonly) BOOL hasWpsResponseType; 
@property (nonatomic,retain) NSString * wpsResponseType; 
@property (nonatomic,readonly) BOOL hasWpsManufacturerElement; 
@property (nonatomic,retain) NSString * wpsManufacturerElement; 
@property (nonatomic,readonly) BOOL hasWpsModelName; 
@property (nonatomic,retain) NSString * wpsModelName; 
@property (nonatomic,readonly) BOOL hasWpsModelNumber; 
@property (nonatomic,retain) NSString * wpsModelNumber; 
@property (nonatomic,readonly) BOOL hasWpsPrimaryDeviceTypeCategory; 
@property (nonatomic,retain) NSString * wpsPrimaryDeviceTypeCategory; 
@property (nonatomic,readonly) BOOL hasWpsPrimaryDeviceTypeSubCategory; 
@property (nonatomic,retain) NSString * wpsPrimaryDeviceTypeSubCategory; 
@property (nonatomic,readonly) BOOL hasWpsDeviceNameElement; 
@property (nonatomic,retain) NSString * wpsDeviceNameElement; 
@property (nonatomic,readonly) BOOL hasWpsDeviceNameData; 
@property (nonatomic,retain) NSString * wpsDeviceNameData; 
@property (nonatomic,readonly) BOOL hasWpsConfigMethods; 
@property (nonatomic,retain) NSString * wpsConfigMethods; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasWpsDeviceNameData;
-(NSString *)wpsResponseType;
-(void)readAll:(BOOL)arg1 ;
-(void)setWpsDeviceNameData:(NSString *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)wpsPrimaryDeviceTypeSubCategory;
-(BOOL)hasWpsManufacturerElement;
-(BOOL)hasWpsModelNumber;
-(BOOL)hasWpsDeviceNameElement;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)wpsConfigMethods;
-(id)initWithData:(id)arg1 ;
-(NSString *)wpsModelName;
-(void)setWpsDeviceNameElement:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setWpsConfigMethods:(NSString *)arg1 ;
-(void)setWpsResponseType:(NSString *)arg1 ;
-(NSString *)wpsDeviceNameData;
-(void)setWpsModelName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasWpsPrimaryDeviceTypeCategory;
-(void)setWpsPrimaryDeviceTypeSubCategory:(NSString *)arg1 ;
-(NSString *)wpsDeviceNameElement;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasWpsResponseType;
-(NSString *)wpsModelNumber;
-(void)copyTo:(id)arg1 ;
-(NSString *)wpsManufacturerElement;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasWpsConfigMethods;
-(BOOL)hasWpsModelName;
-(void)setWpsManufacturerElement:(NSString *)arg1 ;
-(NSData *)beaconInfo;
-(void)setBeaconInfo:(NSData *)arg1 ;
-(BOOL)hasBeaconInfo;
-(void)setWpsModelNumber:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasWpsPrimaryDeviceTypeSubCategory;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)wpsPrimaryDeviceTypeCategory;
-(BOOL)isEqual:(id)arg1 ;
-(void)setWpsPrimaryDeviceTypeCategory:(NSString *)arg1 ;
@end

