/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOURLTimePoint : PBCodable <NSCopying> {

	double _time;
	int _type;
	struct {
		unsigned has_time : 1;
		unsigned has_type : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTime; 
@property (assign,nonatomic) double time; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(double)time;
-(void)setTime:(double)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(BOOL)hasTime;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasTime:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

