/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOLPRRegionInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE90* _routingRequiredFields;
	NSString* _licensePlateTemplate;
	NSMutableArray* _licensePlateValidationRules;
	NSMutableArray* _validPowerTypeKeys;
	NSMutableArray* _validVehicleTypeKeys;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_routingRequiredFields : 1;
		unsigned read_licensePlateTemplate : 1;
		unsigned read_licensePlateValidationRules : 1;
		unsigned read_validPowerTypeKeys : 1;
		unsigned read_validVehicleTypeKeys : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long routingRequiredFieldsCount; 
@property (nonatomic,readonly) int* routingRequiredFields; 
@property (nonatomic,retain) NSMutableArray * validPowerTypeKeys; 
@property (nonatomic,retain) NSMutableArray * validVehicleTypeKeys; 
@property (nonatomic,readonly) BOOL hasLicensePlateTemplate; 
@property (nonatomic,retain) NSString * licensePlateTemplate; 
@property (nonatomic,retain) NSMutableArray * licensePlateValidationRules; 
+(BOOL)isValid:(id)arg1 ;
+(Class)validPowerTypeKeysType;
+(Class)validVehicleTypeKeysType;
+(Class)licensePlateValidationRulesType;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)validPowerTypeKeys;
-(NSMutableArray *)validVehicleTypeKeys;
-(NSString *)licensePlateTemplate;
-(void)addRoutingRequiredFields:(int)arg1 ;
-(void)addValidPowerTypeKeys:(id)arg1 ;
-(int*)routingRequiredFields;
-(void)addValidVehicleTypeKeys:(id)arg1 ;
-(void)setLicensePlateTemplate:(NSString *)arg1 ;
-(void)addLicensePlateValidationRules:(id)arg1 ;
-(unsigned long long)routingRequiredFieldsCount;
-(void)clearRoutingRequiredFields;
-(int)routingRequiredFieldsAtIndex:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)validPowerTypeKeysCount;
-(void)clearValidPowerTypeKeys;
-(id)validPowerTypeKeysAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)validVehicleTypeKeysCount;
-(void)clearValidVehicleTypeKeys;
-(id)validVehicleTypeKeysAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)licensePlateValidationRulesCount;
-(void)clearLicensePlateValidationRules;
-(id)licensePlateValidationRulesAtIndex:(unsigned long long)arg1 ;
-(id)routingRequiredFieldsAsString:(int)arg1 ;
-(void)setRoutingRequiredFields:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setValidPowerTypeKeys:(NSMutableArray *)arg1 ;
-(int)StringAsRoutingRequiredFields:(id)arg1 ;
-(void)setValidVehicleTypeKeys:(NSMutableArray *)arg1 ;
-(BOOL)hasLicensePlateTemplate;
-(NSMutableArray *)licensePlateValidationRules;
-(void)setLicensePlateValidationRules:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

