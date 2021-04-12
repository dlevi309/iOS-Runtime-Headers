/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateDetailLookAroundLogRecord : PBCodable <NSCopying> {

	double _relativeTimestamp;
	int _action;
	int _target;
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasAction; 
@property (assign,nonatomic) int action; 
@property (assign,nonatomic) BOOL hasTarget; 
@property (assign,nonatomic) int target; 
@property (assign,nonatomic) BOOL hasRelativeTimestamp; 
@property (assign,nonatomic) double relativeTimestamp; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTarget:(int)arg1 ;
-(int)target;
-(id)dictionaryRepresentation;
-(int)action;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAction:(int)arg1 ;
-(void)setHasAction:(BOOL)arg1 ;
-(BOOL)hasAction;
-(void)readAll:(BOOL)arg1 ;
-(id)actionAsString:(int)arg1 ;
-(int)StringAsAction:(id)arg1 ;
-(void)setHasTarget:(BOOL)arg1 ;
-(BOOL)hasTarget;
-(id)targetAsString:(int)arg1 ;
-(int)StringAsTarget:(id)arg1 ;
-(double)relativeTimestamp;
-(void)setRelativeTimestamp:(double)arg1 ;
-(void)setHasRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasRelativeTimestamp;
@end

