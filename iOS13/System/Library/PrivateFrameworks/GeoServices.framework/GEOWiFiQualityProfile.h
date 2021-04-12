/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOWiFiQualityHours, NSMutableArray;

@interface GEOWiFiQualityProfile : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOWiFiQualityHours* _hours;
	NSMutableArray* _qualities;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_hours : 1;
		unsigned read_qualities : 1;
		unsigned wrote_hours : 1;
		unsigned wrote_qualities : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasHours; 
@property (nonatomic,retain) GEOWiFiQualityHours * hours; 
@property (nonatomic,retain) NSMutableArray * qualities; 
+(BOOL)isValid:(id)arg1 ;
+(Class)qualitiesType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(GEOWiFiQualityHours *)hours;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readHours;
-(void)_readQualities;
-(void)_addNoFlagsQualities:(id)arg1 ;
-(void)setHours:(GEOWiFiQualityHours *)arg1 ;
-(unsigned long long)qualitiesCount;
-(void)clearQualities;
-(id)qualitiesAtIndex:(unsigned long long)arg1 ;
-(void)addQualities:(id)arg1 ;
-(BOOL)hasHours;
-(NSMutableArray *)qualities;
-(void)setQualities:(NSMutableArray *)arg1 ;
@end

