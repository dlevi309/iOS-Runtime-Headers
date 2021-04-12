/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_ess : 1;
		unsigned wrote_etag : 1;
		unsigned wrote_tileKey : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTileKey; 
@property (assign,nonatomic) unsigned long long tileKey; 
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag; 
@property (nonatomic,retain) NSMutableArray * ess; 
+(BOOL)isValid:(id)arg1 ;
+(Class)essType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)etag;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)tileKey;
-(NSMutableArray *)ess;
-(void)setEss:(NSMutableArray *)arg1 ;
-(void)_readEtag;
-(void)_readEss;
-(void)_addNoFlagsEss:(id)arg1 ;
-(unsigned long long)essCount;
-(void)clearEss;
-(id)essAtIndex:(unsigned long long)arg1 ;
-(void)addEss:(id)arg1 ;
-(void)setTileKey:(unsigned long long)arg1 ;
-(void)setHasTileKey:(BOOL)arg1 ;
-(BOOL)hasTileKey;
@end

