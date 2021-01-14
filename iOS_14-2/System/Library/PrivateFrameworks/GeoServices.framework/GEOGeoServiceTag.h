/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOGeoServiceTag : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _tag;
	int _serviceType;
	SCD_Struct_GE127 _flags;

}

@property (assign,nonatomic) BOOL hasServiceType; 
@property (assign,nonatomic) int serviceType; 
@property (nonatomic,retain) NSString * tag; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)defaultTag;
-(id)dictionaryRepresentation;
-(int)StringAsServiceType:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasServiceType:(BOOL)arg1 ;
-(void)setTag:(NSString *)arg1 ;
-(id)jsonRepresentation;
-(NSString *)tag;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setServiceType:(int)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)serviceType;
-(BOOL)hasServiceType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)serviceTypeAsString:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

