/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOCompanionRouteContext : PBCodable <NSCopying> {

	int _origin;
	unsigned _timestamp;
	struct {
		unsigned has_origin : 1;
		unsigned has_timestamp : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned timestamp; 
@property (assign,nonatomic) BOOL hasOrigin; 
@property (assign,nonatomic) int origin; 
+(id)context;
+(BOOL)isValid:(id)arg1 ;
+(int)defaultOrigin;
-(void)setOrigin:(int)arg1 ;
-(id)dictionaryRepresentation;
-(long long)compare:(id)arg1 ;
-(int)origin;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)simpleDescription;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasOrigin:(BOOL)arg1 ;
-(id)originAsString:(int)arg1 ;
-(int)StringAsOrigin:(id)arg1 ;
-(BOOL)isForeignOrigin;
-(BOOL)isStaleComparedToContext:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasOrigin;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

