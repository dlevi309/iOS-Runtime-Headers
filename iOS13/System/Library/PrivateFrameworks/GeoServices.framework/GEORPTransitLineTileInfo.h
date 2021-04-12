/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEORPTransitLineTileInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	unsigned long long _transitLineMuid;
	NSString* _transitLineName;
	NSString* _transitSystemName;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_transitLineMuid : 1;
		unsigned read_transitLineName : 1;
		unsigned read_transitSystemName : 1;
		unsigned wrote_transitLineMuid : 1;
		unsigned wrote_transitLineName : 1;
		unsigned wrote_transitSystemName : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTransitLineMuid; 
@property (assign,nonatomic) unsigned long long transitLineMuid; 
@property (nonatomic,readonly) BOOL hasTransitLineName; 
@property (nonatomic,retain) NSString * transitLineName; 
@property (nonatomic,readonly) BOOL hasTransitSystemName; 
@property (nonatomic,retain) NSString * transitSystemName; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setTransitSystemName:(NSString *)arg1 ;
-(BOOL)hasTransitSystemName;
-(NSString *)transitSystemName;
-(void)_readTransitSystemName;
-(void)_readTransitLineName;
-(NSString *)transitLineName;
-(void)setTransitLineName:(NSString *)arg1 ;
-(unsigned long long)transitLineMuid;
-(void)setTransitLineMuid:(unsigned long long)arg1 ;
-(void)setHasTransitLineMuid:(BOOL)arg1 ;
-(BOOL)hasTransitLineMuid;
-(BOOL)hasTransitLineName;
@end

