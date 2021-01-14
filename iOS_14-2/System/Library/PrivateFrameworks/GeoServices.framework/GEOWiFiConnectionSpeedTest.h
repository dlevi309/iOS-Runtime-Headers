/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOWiFiConnectionSpeedTest : PBCodable <NSCopying> {

	float _avgDL;
	float _avgUL;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasAvgUL; 
@property (assign,nonatomic) float avgUL; 
@property (assign,nonatomic) BOOL hasAvgDL; 
@property (assign,nonatomic) float avgDL; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(float)avgUL;
-(float)avgDL;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasAvgUL;
-(BOOL)hasAvgDL;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAvgUL:(float)arg1 ;
-(void)setAvgDL:(float)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasAvgUL:(BOOL)arg1 ;
-(void)setHasAvgDL:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

