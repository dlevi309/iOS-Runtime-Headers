/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray;

@interface GEOLPRWorld : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _powerTypes;
	NSMutableArray* _regions;
	NSMutableArray* _vehicleTypes;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_powerTypes : 1;
		unsigned read_regions : 1;
		unsigned read_vehicleTypes : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * regions; 
@property (nonatomic,retain) NSMutableArray * powerTypes; 
@property (nonatomic,retain) NSMutableArray * vehicleTypes; 
+(BOOL)isValid:(id)arg1 ;
+(Class)regionsType;
+(Class)powerTypesType;
+(Class)vehicleTypesType;
-(id)dictionaryRepresentation;
-(void)clearRegions;
-(unsigned long long)regionsCount;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSMutableArray *)regions;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSMutableArray *)vehicleTypes;
-(NSMutableArray *)powerTypes;
-(id)regionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)powerTypesCount;
-(void)clearPowerTypes;
-(unsigned long long)vehicleTypesCount;
-(void)clearVehicleTypes;
-(void)setPowerTypes:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVehicleTypes:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addPowerTypes:(id)arg1 ;
-(void)addVehicleTypes:(id)arg1 ;
-(id)powerTypesAtIndex:(unsigned long long)arg1 ;
-(id)vehicleTypesAtIndex:(unsigned long long)arg1 ;
-(void)setRegions:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addRegions:(id)arg1 ;
@end

