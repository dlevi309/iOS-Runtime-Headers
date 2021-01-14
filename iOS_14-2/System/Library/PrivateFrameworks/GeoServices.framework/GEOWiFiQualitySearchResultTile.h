/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString;

@interface GEOWiFiQualitySearchResultTile : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _ess;
	NSString* _etag;
	unsigned long long _tileKey;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_tileKey : 1;
		unsigned read_ess : 1;
		unsigned read_etag : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTileKey; 
@property (assign,nonatomic) unsigned long long tileKey; 
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag; 
@property (nonatomic,retain) NSMutableArray * ess; 
+(Class)essType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)etag;
-(void)setEss:(NSMutableArray *)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(unsigned long long)essCount;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)tileKey;
-(id)description;
-(id)essAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)ess;
-(void)addEss:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTileKey:(unsigned long long)arg1 ;
-(void)setHasTileKey:(BOOL)arg1 ;
-(void)clearEss;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTileKey;
@end

