/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOTransitDepartureSequenceUsage : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _direction;
	NSString* _headsign;
	unsigned long long _lineId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_lineId : 1;
		unsigned read_direction : 1;
		unsigned read_headsign : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasLineId; 
@property (assign,nonatomic) unsigned long long lineId; 
@property (nonatomic,readonly) BOOL hasDirection; 
@property (nonatomic,retain) NSString * direction; 
@property (nonatomic,readonly) BOOL hasHeadsign; 
@property (nonatomic,retain) NSString * headsign; 
+(BOOL)isValid:(id)arg1 ;
-(NSString *)direction;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(void)setDirection:(NSString *)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)lineId;
-(void)setHasLineId:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSString *)headsign;
-(BOOL)hasHeadsign;
-(BOOL)hasDirection;
-(unsigned long long)hash;
-(BOOL)hasLineId;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHeadsign:(NSString *)arg1 ;
-(void)setLineId:(unsigned long long)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

