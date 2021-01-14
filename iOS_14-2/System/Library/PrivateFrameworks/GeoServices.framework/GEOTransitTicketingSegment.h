/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOTransitTicketingSegment : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _paths;
	NSString* _segmentName;
	NSString* _ticketingUrl;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_paths : 1;
		unsigned read_segmentName : 1;
		unsigned read_ticketingUrl : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTicketingUrl; 
@property (nonatomic,retain) NSString * ticketingUrl; 
@property (nonatomic,readonly) BOOL hasSegmentName; 
@property (nonatomic,retain) NSString * segmentName; 
@property (nonatomic,retain) NSMutableArray * paths; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)pathType;
+(BOOL)isValid:(id)arg1 ;
-(NSString *)segmentName;
-(id)dictionaryRepresentation;
-(NSMutableArray *)paths;
-(PBUnknownFields *)unknownFields;
-(void)setPaths:(NSMutableArray *)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)ticketingUrl;
-(void)setTicketingUrl:(NSString *)arg1 ;
-(id)pathAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasTicketingUrl;
-(BOOL)hasSegmentName;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)pathsCount;
-(void)addPath:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setSegmentName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)clearPaths;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

