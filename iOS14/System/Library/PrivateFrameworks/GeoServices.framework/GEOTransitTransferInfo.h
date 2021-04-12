/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	struct {
		unsigned has_transferMuid : 1;
		unsigned has_transferTime : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTransferMuid; 
@property (assign,nonatomic) unsigned long long transferMuid; 
@property (assign,nonatomic) BOOL hasTransferTime; 
@property (assign,nonatomic) unsigned transferTime; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setTransferMuid:(unsigned long long)arg1 ;
-(unsigned long long)transferMuid;
-(void)setHasTransferMuid:(BOOL)arg1 ;
-(BOOL)hasTransferMuid;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTransferTime:(unsigned)arg1 ;
-(unsigned)transferTime;
-(void)setHasTransferTime:(BOOL)arg1 ;
-(BOOL)hasTransferTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

