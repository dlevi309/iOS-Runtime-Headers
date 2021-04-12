/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOTransitSection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE19* _actionSheetArtworkIndexs;
	SCD_Struct_GE19* _routeDetailsArtworkIndexs;
	SCD_Struct_GE19* _stepIndexs;
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_actionSheetArtworkIndexs : 1;
		unsigned wrote_routeDetailsArtworkIndexs : 1;
		unsigned wrote_stepIndexs : 1;
		unsigned wrote_actionSheetName : 1;
		unsigned wrote_ticketingSegments : 1;
		unsigned wrote_nextOptionsIndex : 1;
		unsigned wrote_disableAlightNotifications : 1;
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
-(id)init;
-(void)dealloc;
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)stepIndexsCount;
-(unsigned)stepIndexAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasNextOptionsIndex;
-(int)nextOptionsIndex;
-(NSMutableArray *)ticketingSegments;
-(void)_readStepIndexs;
-(void)_addNoFlagsStepIndex:(unsigned)arg1 ;
-(void)_readActionSheetName;
-(void)_readActionSheetArtworkIndexs;
-(void)_addNoFlagsActionSheetArtworkIndex:(unsigned)arg1 ;
-(void)_readRouteDetailsArtworkIndexs;
-(void)_addNoFlagsRouteDetailsArtworkIndex:(unsigned)arg1 ;
-(void)_readTicketingSegments;
-(void)_addNoFlagsTicketingSegment:(id)arg1 ;
-(NSString *)actionSheetName;
-(void)clearStepIndexs;
-(void)addStepIndex:(unsigned)arg1 ;
-(void)setActionSheetName:(NSString *)arg1 ;
-(unsigned long long)actionSheetArtworkIndexsCount;
-(void)clearActionSheetArtworkIndexs;
-(unsigned)actionSheetArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(void)addActionSheetArtworkIndex:(unsigned)arg1 ;
-(unsigned long long)routeDetailsArtworkIndexsCount;
-(void)clearRouteDetailsArtworkIndexs;
-(unsigned)routeDetailsArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(void)addRouteDetailsArtworkIndex:(unsigned)arg1 ;
-(unsigned long long)ticketingSegmentsCount;
-(void)clearTicketingSegments;
-(id)ticketingSegmentAtIndex:(unsigned long long)arg1 ;
-(void)addTicketingSegment:(id)arg1 ;
-(unsigned*)stepIndexs;
-(void)setStepIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setNextOptionsIndex:(int)arg1 ;
-(void)setHasNextOptionsIndex:(BOOL)arg1 ;
-(BOOL)hasActionSheetName;
-(unsigned*)actionSheetArtworkIndexs;
-(void)setActionSheetArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)routeDetailsArtworkIndexs;
-(void)setRouteDetailsArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)disableAlightNotifications;
-(void)setDisableAlightNotifications:(BOOL)arg1 ;
-(void)setHasDisableAlightNotifications:(BOOL)arg1 ;
-(BOOL)hasDisableAlightNotifications;
-(void)setTicketingSegments:(NSMutableArray *)arg1 ;
@end

