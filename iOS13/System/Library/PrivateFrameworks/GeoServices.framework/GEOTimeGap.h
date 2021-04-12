/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasSubsequentEventId; 
@property (assign,nonatomic) unsigned subsequentEventId; 
@property (assign,nonatomic) BOOL hasSeconds; 
@property (assign,nonatomic) unsigned seconds; 
@property (assign,nonatomic) BOOL hasIfChained; 
@property (assign,nonatomic) BOOL ifChained; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)seconds;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned)subsequentEventId;
-(BOOL)ifChained;
-(void)setSeconds:(unsigned)arg1 ;
-(void)setSubsequentEventId:(unsigned)arg1 ;
-(void)setHasSubsequentEventId:(BOOL)arg1 ;
-(BOOL)hasSubsequentEventId;
-(void)setHasSeconds:(BOOL)arg1 ;
-(BOOL)hasSeconds;
-(void)setIfChained:(BOOL)arg1 ;
-(void)setHasIfChained:(BOOL)arg1 ;
-(BOOL)hasIfChained;
@end

