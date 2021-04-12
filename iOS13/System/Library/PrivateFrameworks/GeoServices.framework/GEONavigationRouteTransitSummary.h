/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	struct {
		unsigned read_possibleStops : 1;
		unsigned read_scheduledLinks : 1;
		unsigned wrote_possibleStops : 1;
		unsigned wrote_scheduledLinks : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * scheduledLinks; 
@property (nonatomic,retain) NSMutableArray * possibleStops; 
+(BOOL)isValid:(id)arg1 ;
+(Class)scheduledLinkType;
+(Class)possibleStopType;
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
-(id)initWithRoute:(id)arg1 ;
-(void)_readScheduledLinks;
-(void)_addNoFlagsScheduledLink:(id)arg1 ;
-(void)_readPossibleStops;
-(void)_addNoFlagsPossibleStop:(id)arg1 ;
-(unsigned long long)scheduledLinksCount;
-(void)clearScheduledLinks;
-(id)scheduledLinkAtIndex:(unsigned long long)arg1 ;
-(void)addScheduledLink:(id)arg1 ;
-(unsigned long long)possibleStopsCount;
-(void)clearPossibleStops;
-(id)possibleStopAtIndex:(unsigned long long)arg1 ;
-(void)addPossibleStop:(id)arg1 ;
-(NSMutableArray *)scheduledLinks;
-(void)setScheduledLinks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)possibleStops;
-(void)setPossibleStops:(NSMutableArray *)arg1 ;
@end

