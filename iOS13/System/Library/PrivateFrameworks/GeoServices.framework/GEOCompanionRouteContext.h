/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOCompanionRouteContext : PBCodable <NSCopying> {

	int _origin;
	unsigned _timestamp;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned timestamp; 
@property (assign,nonatomic) BOOL hasOrigin; 
@property (assign,nonatomic) int origin; 
+(id)context;
+(BOOL)isValid:(id)arg1 ;
+(int)defaultOrigin;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)origin;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setOrigin:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasOrigin;
-(void)setHasOrigin:(BOOL)arg1 ;
-(id)originAsString:(int)arg1 ;
-(int)StringAsOrigin:(id)arg1 ;
-(BOOL)isForeignOrigin;
-(BOOL)isStaleComparedToContext:(id)arg1 ;
-(id)simpleDescription;
@end

