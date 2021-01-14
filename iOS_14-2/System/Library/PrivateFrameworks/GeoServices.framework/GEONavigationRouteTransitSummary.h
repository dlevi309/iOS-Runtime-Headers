/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray;

@interface GEONavigationRouteTransitSummary : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _possibleStops;
	NSMutableArray* _scheduledLinks;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,retain) NSMutableArray * scheduledLinks; 
@property (nonatomic,retain) NSMutableArray * possibleStops; 
+(BOOL)isValid:(id)arg1 ;
+(Class)scheduledLinkType;
+(Class)possibleStopType;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)scheduledLinks;
-(void)addScheduledLink:(id)arg1 ;
-(void)addPossibleStop:(id)arg1 ;
-(unsigned long long)scheduledLinksCount;
-(void)clearScheduledLinks;
-(id)scheduledLinkAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)possibleStopsCount;
-(void)clearPossibleStops;
-(id)possibleStopAtIndex:(unsigned long long)arg1 ;
-(void)setScheduledLinks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)possibleStops;
-(void)setPossibleStops:(NSMutableArray *)arg1 ;
-(id)initWithRoute:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

