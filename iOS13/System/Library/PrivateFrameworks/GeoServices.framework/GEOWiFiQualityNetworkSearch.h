/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, GEOLocation;

@interface GEOWiFiQualityNetworkSearch : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _ess;
	GEOLocation* _location;
	unsigned long long _radius;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_radius : 1;
		unsigned read_ess : 1;
		unsigned read_location : 1;
		unsigned wrote_ess : 1;
		unsigned wrote_location : 1;
		unsigned wrote_radius : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * ess; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (assign,nonatomic) BOOL hasRadius; 
@property (assign,nonatomic) unsigned long long radius; 
+(BOOL)isValid:(id)arg1 ;
+(Class)essType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLocation *)location;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)radius;
-(void)setRadius:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasLocation;
-(void)_readLocation;
-(void)setHasRadius:(BOOL)arg1 ;
-(BOOL)hasRadius;
-(NSMutableArray *)ess;
-(void)setEss:(NSMutableArray *)arg1 ;
-(void)_readEss;
-(void)_addNoFlagsEss:(id)arg1 ;
-(unsigned long long)essCount;
-(void)clearEss;
-(id)essAtIndex:(unsigned long long)arg1 ;
-(void)addEss:(id)arg1 ;
@end

