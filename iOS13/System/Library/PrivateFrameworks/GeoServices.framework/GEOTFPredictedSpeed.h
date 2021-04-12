/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTFPredictedSpeed : PBCodable <NSCopying> {

	unsigned _deltaMinutesInFuture;
	unsigned _speed;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasDeltaMinutesInFuture; 
@property (assign,nonatomic) unsigned deltaMinutesInFuture; 
@property (assign,nonatomic) BOOL hasSpeed; 
@property (assign,nonatomic) unsigned speed; 
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
-(unsigned)speed;
-(void)setSpeed:(unsigned)arg1 ;
-(void)setHasSpeed:(BOOL)arg1 ;
-(BOOL)hasSpeed;
-(void)readAll:(BOOL)arg1 ;
-(unsigned)deltaMinutesInFuture;
-(void)setDeltaMinutesInFuture:(unsigned)arg1 ;
-(void)setHasDeltaMinutesInFuture:(BOOL)arg1 ;
-(BOOL)hasDeltaMinutesInFuture;
@end

