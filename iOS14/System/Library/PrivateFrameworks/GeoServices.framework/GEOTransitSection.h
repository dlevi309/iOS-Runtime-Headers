/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOTransitSection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _actionSheetArtworkIndexs;
	SCD_Struct_GE17* _routeDetailsArtworkIndexs;
	SCD_Struct_GE17* _stepIndexs;
	NSString* _actionSheetName;
	NSMutableArray* _ticketingSegments;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _nextOptionsIndex;
	BOOL _disableAlightNotifications;
	struct {
		unsigned has_nextOptionsIndex : 1;
		unsigned has_disableAlightNotifications : 1;
		unsigned read_unknownFields : 1;
		unsigned read_actionSheetArtworkIndexs : 1;
		unsigned read_routeDetailsArtworkIndexs : 1;
		unsigned read_stepIndexs : 1;
		unsigned read_actionSheetName : 1;
		unsigned read_ticketingSegments : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long stepIndexsCount; 
@property (nonatomic,readonly) unsigned* stepIndexs; 
@property (assign,nonatomic) BOOL hasNextOptionsIndex; 
@property (assign,nonatomic) int nextOptionsIndex; 
@property (nonatomic,readonly) BOOL hasActionSheetName; 
@property (nonatomic,retain) NSString * actionSheetName; 
@property (nonatomic,readonly) unsigned long long actionSheetArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* actionSheetArtworkIndexs; 
@property (nonatomic,readonly) unsigned long long routeDetailsArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* routeDetailsArtworkIndexs; 
@property (assign,nonatomic) BOOL hasDisableAlightNotifications; 
@property (assign,nonatomic) BOOL disableAlightNotifications; 
@property (nonatomic,retain) NSMutableArray * ticketingSegments; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)ticketingSegmentType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addStepIndex:(unsigned)arg1 ;
-(NSString *)actionSheetName;
-(void)setNextOptionsIndex:(int)arg1 ;
-(void)setActionSheetName:(NSString *)arg1 ;
-(void)addActionSheetArtworkIndex:(unsigned)arg1 ;
-(void)addRouteDetailsArtworkIndex:(unsigned)arg1 ;
-(void)setDisableAlightNotifications:(BOOL)arg1 ;
-(void)addTicketingSegment:(id)arg1 ;
-(unsigned long long)stepIndexsCount;
-(void)clearStepIndexs;
-(unsigned)stepIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)actionSheetArtworkIndexsCount;
-(void)clearActionSheetArtworkIndexs;
-(unsigned)actionSheetArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)ticketingSegmentsCount;
-(unsigned long long)routeDetailsArtworkIndexsCount;
-(void)clearRouteDetailsArtworkIndexs;
-(void)clearTicketingSegments;
-(unsigned)routeDetailsArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(id)ticketingSegmentAtIndex:(unsigned long long)arg1 ;
-(void)setStepIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(int)nextOptionsIndex;
-(void)setHasNextOptionsIndex:(BOOL)arg1 ;
-(BOOL)hasNextOptionsIndex;
-(unsigned*)stepIndexs;
-(BOOL)hasActionSheetName;
-(unsigned*)actionSheetArtworkIndexs;
-(void)setActionSheetArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)routeDetailsArtworkIndexs;
-(void)setRouteDetailsArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(NSMutableArray *)ticketingSegments;
-(BOOL)disableAlightNotifications;
-(void)setHasDisableAlightNotifications:(BOOL)arg1 ;
-(void)setTicketingSegments:(NSMutableArray *)arg1 ;
-(BOOL)hasDisableAlightNotifications;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

