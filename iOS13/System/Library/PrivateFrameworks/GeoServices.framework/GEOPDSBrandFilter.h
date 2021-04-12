/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDSBrandFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _brandMuid;
	struct {
		unsigned has_brandMuid : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasBrandMuid; 
@property (assign,nonatomic) unsigned long long brandMuid; 
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
-(unsigned long long)brandMuid;
-(void)setBrandMuid:(unsigned long long)arg1 ;
-(void)setHasBrandMuid:(BOOL)arg1 ;
-(BOOL)hasBrandMuid;
@end

