/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateDetailLookAroundLogRecord : PBCodable <NSCopying> {

	double _relativeTimestamp;
	int _action;
	int _target;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasAction; 
@property (assign,nonatomic) int action; 
@property (assign,nonatomic) BOOL hasTarget; 
@property (assign,nonatomic) int target; 
@property (assign,nonatomic) BOOL hasRelativeTimestamp; 
@property (assign,nonatomic) double relativeTimestamp; 
+(BOOL)isValid:(id)arg1 ;
-(void)setRelativeTimestamp:(double)arg1 ;
-(id)dictionaryRepresentation;
-(void)setTarget:(int)arg1 ;
-(BOOL)hasRelativeTimestamp;
-(double)relativeTimestamp;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setHasAction:(BOOL)arg1 ;
-(BOOL)hasTarget;
-(void)setHasRelativeTimestamp:(BOOL)arg1 ;
-(void)setHasTarget:(BOOL)arg1 ;
-(id)targetAsString:(int)arg1 ;
-(int)StringAsTarget:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)action;
-(void)setAction:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasAction;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(int)target;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)actionAsString:(int)arg1 ;
-(int)StringAsAction:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

