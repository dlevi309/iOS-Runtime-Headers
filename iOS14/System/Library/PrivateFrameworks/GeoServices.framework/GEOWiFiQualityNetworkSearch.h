/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * ess; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (assign,nonatomic) BOOL hasRadius; 
@property (assign,nonatomic) unsigned long long radius; 
+(Class)essType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setRadius:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setEss:(NSMutableArray *)arg1 ;
-(GEOLocation *)location;
-(unsigned long long)essCount;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasRadius;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(unsigned long long)radius;
-(id)description;
-(id)essAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasLocation;
-(NSMutableArray *)ess;
-(void)addEss:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasRadius:(BOOL)arg1 ;
-(void)clearEss;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

