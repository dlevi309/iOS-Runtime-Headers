/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOWiFiConnectionSpeedTest : PBCodable <NSCopying> {

	float _avgDL;
	float _avgUL;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasAvgUL; 
@property (assign,nonatomic) float avgUL; 
@property (assign,nonatomic) BOOL hasAvgDL; 
@property (assign,nonatomic) float avgDL; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(float)avgUL;
-(void)setAvgUL:(float)arg1 ;
-(void)setHasAvgUL:(BOOL)arg1 ;
-(BOOL)hasAvgUL;
-(float)avgDL;
-(void)setAvgDL:(float)arg1 ;
-(void)setHasAvgDL:(BOOL)arg1 ;
-(BOOL)hasAvgDL;
@end

