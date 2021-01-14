/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOTimeGap : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _seconds;
	unsigned _subsequentEventId;
	BOOL _ifChained;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasSubsequentEventId; 
@property (assign,nonatomic) unsigned subsequentEventId; 
@property (assign,nonatomic) BOOL hasSeconds; 
@property (assign,nonatomic) unsigned seconds; 
@property (assign,nonatomic) BOOL hasIfChained; 
@property (assign,nonatomic) BOOL ifChained; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)seconds;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setSeconds:(unsigned)arg1 ;
-(void)setIfChained:(BOOL)arg1 ;
-(void)setSubsequentEventId:(unsigned)arg1 ;
-(unsigned)subsequentEventId;
-(void)setHasSubsequentEventId:(BOOL)arg1 ;
-(BOOL)hasSubsequentEventId;
-(void)setHasSeconds:(BOOL)arg1 ;
-(void)setHasIfChained:(BOOL)arg1 ;
-(BOOL)hasIfChained;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)ifChained;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSeconds;
@end

