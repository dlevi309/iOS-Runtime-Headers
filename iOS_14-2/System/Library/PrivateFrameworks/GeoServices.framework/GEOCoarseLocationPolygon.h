/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, GEOCoarseLocationRing;

@interface GEOCoarseLocationPolygon : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _holes;
	GEOCoarseLocationRing* _shell;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_holes : 1;
		unsigned read_shell : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasShell; 
@property (nonatomic,retain) GEOCoarseLocationRing * shell; 
@property (nonatomic,retain) NSMutableArray * holes; 
+(BOOL)isValid:(id)arg1 ;
+(Class)holesType;
-(id)dictionaryRepresentation;
-(GEOCoarseLocationRing *)shell;
-(NSMutableArray *)holes;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)holesCount;
-(void)clearHoles;
-(id)initWithData:(id)arg1 ;
-(id)holesAtIndex:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasShell;
-(unsigned long long)hash;
-(void)setShell:(GEOCoarseLocationRing *)arg1 ;
-(void)addHoles:(id)arg1 ;
-(void)setHoles:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

