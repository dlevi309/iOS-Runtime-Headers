/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOCarInfo;

@interface GEOLogMsgStateCarPlay : PBCodable <NSCopying> {

	GEOCarInfo* _carInfo;
	BOOL _isConnected;
	SCD_Struct_GE127 _flags;

}

@property (assign,nonatomic) BOOL hasIsConnected; 
@property (assign,nonatomic) BOOL isConnected; 
@property (nonatomic,readonly) BOOL hasCarInfo; 
@property (nonatomic,retain) GEOCarInfo * carInfo; 
+(BOOL)isValid:(id)arg1 ;
-(GEOCarInfo *)carInfo;
-(BOOL)isConnected;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasIsConnected:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCarInfo;
-(BOOL)hasIsConnected;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setCarInfo:(GEOCarInfo *)arg1 ;
-(void)setIsConnected:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

