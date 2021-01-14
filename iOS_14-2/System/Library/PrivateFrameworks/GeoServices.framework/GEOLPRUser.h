/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface GEOLPRUser : PBCodable <NSCopying> {

	NSMutableDictionary* _vehicles;

}

@property (nonatomic,retain) NSMutableDictionary * vehicles; 
+(BOOL)isValid:(id)arg1 ;
+(Class)vehiclesType;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(NSMutableDictionary *)vehicles;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setVehiclesValue:(id)arg1 forKey:(id)arg2 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)vehiclesCount;
-(void)clearVehicles;
-(void)setVehicles:(NSMutableDictionary *)arg1 ;
-(id)vehiclesForKey:(id)arg1 ;
-(void)enumerateVehiclesUsingBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

