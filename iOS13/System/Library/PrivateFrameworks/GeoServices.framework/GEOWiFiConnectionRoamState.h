/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOWiFiConnectionRoamState : PBCodable <NSCopying> {

	int _lateRoamMaxRSSI;
	int _lateRoamMinRSSI;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasLateRoamMinRSSI; 
@property (assign,nonatomic) int lateRoamMinRSSI; 
@property (assign,nonatomic) BOOL hasLateRoamMaxRSSI; 
@property (assign,nonatomic) int lateRoamMaxRSSI; 
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
-(int)lateRoamMinRSSI;
-(void)setLateRoamMinRSSI:(int)arg1 ;
-(void)setHasLateRoamMinRSSI:(BOOL)arg1 ;
-(BOOL)hasLateRoamMinRSSI;
-(int)lateRoamMaxRSSI;
-(void)setLateRoamMaxRSSI:(int)arg1 ;
-(void)setHasLateRoamMaxRSSI:(BOOL)arg1 ;
-(BOOL)hasLateRoamMaxRSSI;
@end

