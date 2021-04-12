/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOTransitTransferInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _transferMuid;
	unsigned _transferTime;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasTransferMuid; 
@property (assign,nonatomic) unsigned long long transferMuid; 
@property (assign,nonatomic) BOOL hasTransferTime; 
@property (assign,nonatomic) unsigned transferTime; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned)transferTime;
-(unsigned long long)transferMuid;
-(void)setTransferMuid:(unsigned long long)arg1 ;
-(void)setHasTransferMuid:(BOOL)arg1 ;
-(BOOL)hasTransferMuid;
-(void)setTransferTime:(unsigned)arg1 ;
-(void)setHasTransferTime:(BOOL)arg1 ;
-(BOOL)hasTransferTime;
@end

