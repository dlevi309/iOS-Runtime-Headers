/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOSharedNavChargingStationInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _chargingTime;
	unsigned long long _muid;
	NSString* _name;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) BOOL hasChargingTime; 
@property (assign,nonatomic) double chargingTime; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasMuid;
-(void)setHasMuid:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasName;
-(id)jsonRepresentation;
-(void)setChargingTime:(double)arg1 ;
-(double)chargingTime;
-(void)setHasChargingTime:(BOOL)arg1 ;
-(BOOL)hasChargingTime;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)muid;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

