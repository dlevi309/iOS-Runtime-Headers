/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgEventId : PBCodable <NSCopying> {

	unsigned long long _high;
	unsigned long long _low;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasHigh; 
@property (assign,nonatomic) unsigned long long high; 
@property (assign,nonatomic) BOOL hasLow; 
@property (assign,nonatomic) unsigned long long low; 
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
-(unsigned long long)high;
-(void)setHigh:(unsigned long long)arg1 ;
-(void)setHasHigh:(BOOL)arg1 ;
-(BOOL)hasHigh;
-(unsigned long long)low;
-(void)setLow:(unsigned long long)arg1 ;
-(void)setHasLow:(BOOL)arg1 ;
-(BOOL)hasLow;
@end

