/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasServiceType; 
@property (assign,nonatomic) int serviceType; 
@property (nonatomic,retain) NSString * tag; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)defaultTag;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)tag;
-(void)writeTo:(id)arg1 ;
-(int)serviceType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTag:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setServiceType:(int)arg1 ;
-(void)setHasServiceType:(BOOL)arg1 ;
-(BOOL)hasServiceType;
-(id)serviceTypeAsString:(int)arg1 ;
-(int)StringAsServiceType:(id)arg1 ;
@end

