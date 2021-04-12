/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray;

@interface GEOLPRDefinedPlateCondition : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _plateMatchConditions;
	NSMutableArray* _powerTypeKeys;
	NSMutableArray* _vehicleTypeKeys;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_plateMatchConditions : 1;
		unsigned read_powerTypeKeys : 1;
		unsigned read_vehicleTypeKeys : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * vehicleTypeKeys; 
@property (nonatomic,retain) NSMutableArray * powerTypeKeys; 
@property (nonatomic,retain) NSMutableArray * plateMatchConditions; 
+(Class)vehicleTypeKeyType;
+(Class)powerTypeKeyType;
+(Class)plateMatchConditionType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSMutableArray *)vehicleTypeKeys;
-(NSMutableArray *)powerTypeKeys;
-(void)addVehicleTypeKey:(id)arg1 ;
-(void)addPowerTypeKey:(id)arg1 ;
-(unsigned long long)vehicleTypeKeysCount;
-(void)addPlateMatchCondition:(id)arg1 ;
-(void)clearVehicleTypeKeys;
-(id)vehicleTypeKeyAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)powerTypeKeysCount;
-(void)clearPowerTypeKeys;
-(id)powerTypeKeyAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)plateMatchConditionsCount;
-(void)clearPlateMatchConditions;
-(id)plateMatchConditionAtIndex:(unsigned long long)arg1 ;
-(void)setPowerTypeKeys:(NSMutableArray *)arg1 ;
-(void)setVehicleTypeKeys:(NSMutableArray *)arg1 ;
-(NSMutableArray *)plateMatchConditions;
-(void)setPlateMatchConditions:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

