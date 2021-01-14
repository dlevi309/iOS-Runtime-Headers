/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTFPredictedSpeed : PBCodable <NSCopying> {

	unsigned _deltaMinutesInFuture;
	unsigned _speed;
	struct {
		unsigned has_deltaMinutesInFuture : 1;
		unsigned has_speed : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDeltaMinutesInFuture; 
@property (assign,nonatomic) unsigned deltaMinutesInFuture; 
@property (assign,nonatomic) BOOL hasSpeed; 
@property (assign,nonatomic) unsigned speed; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSpeed:(unsigned)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned)speed;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasSpeed;
-(void)setDeltaMinutesInFuture:(unsigned)arg1 ;
-(unsigned)deltaMinutesInFuture;
-(void)setHasDeltaMinutesInFuture:(BOOL)arg1 ;
-(BOOL)hasDeltaMinutesInFuture;
-(void)setHasSpeed:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

