/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOCacheHit : PBCodable <NSCopying> {

	unsigned _bytes;
	unsigned _count;
	int _requestorType;
	int _tileSourceType;
	struct {
		unsigned has_bytes : 1;
		unsigned has_count : 1;
		unsigned has_requestorType : 1;
		unsigned has_tileSourceType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRequestorType; 
@property (assign,nonatomic) int requestorType; 
@property (assign,nonatomic) BOOL hasTileSourceType; 
@property (assign,nonatomic) int tileSourceType; 
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count; 
@property (assign,nonatomic) BOOL hasBytes; 
@property (assign,nonatomic) unsigned bytes; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)count;
-(void)setCount:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(int)requestorType;
-(void)setRequestorType:(int)arg1 ;
-(void)setHasRequestorType:(BOOL)arg1 ;
-(BOOL)hasRequestorType;
-(id)requestorTypeAsString:(int)arg1 ;
-(int)StringAsRequestorType:(id)arg1 ;
-(void)setBytes:(unsigned)arg1 ;
-(void)setHasBytes:(BOOL)arg1 ;
-(BOOL)hasBytes;
-(int)tileSourceType;
-(void)setTileSourceType:(int)arg1 ;
-(void)setHasTileSourceType:(BOOL)arg1 ;
-(BOOL)hasTileSourceType;
-(id)tileSourceTypeAsString:(int)arg1 ;
-(int)StringAsTileSourceType:(id)arg1 ;
@end

