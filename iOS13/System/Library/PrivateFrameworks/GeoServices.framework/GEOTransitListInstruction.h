/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOComposedRouteStepTransitInstructionMerging.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOFormattedString, GEOTransitListTimeInstruction, NSArray, NSString;

@interface GEOTransitListInstruction : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _commandFormatteds;
	NSMutableArray* _detailFormatteds;
	GEOFormattedString* _expandableListFormatted;
	NSMutableArray* _noticeFormatteds;
	NSMutableArray* _priceFormatteds;
	GEOTransitListTimeInstruction* _timeInstructions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_commandFormatteds : 1;
		unsigned read_detailFormatteds : 1;
		unsigned read_expandableListFormatted : 1;
		unsigned read_noticeFormatteds : 1;
		unsigned read_priceFormatteds : 1;
		unsigned read_timeInstructions : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_commandFormatteds : 1;
		unsigned wrote_detailFormatteds : 1;
		unsigned wrote_expandableListFormatted : 1;
		unsigned wrote_noticeFormatteds : 1;
		unsigned wrote_priceFormatteds : 1;
		unsigned wrote_timeInstructions : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSArray * serverFormattedCommands; 
@property (nonatomic,readonly) NSArray * serverFormattedDetails; 
@property (nonatomic,readonly) NSArray * serverFormattedNotices; 
@property (nonatomic,readonly) NSArray * serverFormattedPrices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * noticeFormatteds; 
@property (nonatomic,retain) NSMutableArray * commandFormatteds; 
@property (nonatomic,retain) NSMutableArray * detailFormatteds; 
@property (nonatomic,retain) NSMutableArray * priceFormatteds; 
@property (nonatomic,readonly) BOOL hasExpandableListFormatted; 
@property (nonatomic,retain) GEOFormattedString * expandableListFormatted; 
@property (nonatomic,readonly) BOOL hasTimeInstructions; 
@property (nonatomic,retain) GEOTransitListTimeInstruction * timeInstructions; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)noticeFormattedType;
+(Class)commandFormattedType;
+(Class)detailFormattedType;
+(Class)priceFormattedType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
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
-(void)_readNoticeFormatteds;
-(void)_addNoFlagsNoticeFormatted:(id)arg1 ;
-(void)_readCommandFormatteds;
-(void)_addNoFlagsCommandFormatted:(id)arg1 ;
-(void)_readDetailFormatteds;
-(void)_addNoFlagsDetailFormatted:(id)arg1 ;
-(void)_readPriceFormatteds;
-(void)_addNoFlagsPriceFormatted:(id)arg1 ;
-(void)_readExpandableListFormatted;
-(void)_readTimeInstructions;
-(GEOFormattedString *)expandableListFormatted;
-(GEOTransitListTimeInstruction *)timeInstructions;
-(unsigned long long)noticeFormattedsCount;
-(void)clearNoticeFormatteds;
-(id)noticeFormattedAtIndex:(unsigned long long)arg1 ;
-(void)addNoticeFormatted:(id)arg1 ;
-(unsigned long long)commandFormattedsCount;
-(void)clearCommandFormatteds;
-(id)commandFormattedAtIndex:(unsigned long long)arg1 ;
-(void)addCommandFormatted:(id)arg1 ;
-(unsigned long long)detailFormattedsCount;
-(void)clearDetailFormatteds;
-(id)detailFormattedAtIndex:(unsigned long long)arg1 ;
-(void)addDetailFormatted:(id)arg1 ;
-(unsigned long long)priceFormattedsCount;
-(void)clearPriceFormatteds;
-(id)priceFormattedAtIndex:(unsigned long long)arg1 ;
-(void)addPriceFormatted:(id)arg1 ;
-(void)setExpandableListFormatted:(GEOFormattedString *)arg1 ;
-(void)setTimeInstructions:(GEOTransitListTimeInstruction *)arg1 ;
-(NSMutableArray *)noticeFormatteds;
-(NSMutableArray *)commandFormatteds;
-(NSMutableArray *)detailFormatteds;
-(NSMutableArray *)priceFormatteds;
-(void)setNoticeFormatteds:(NSMutableArray *)arg1 ;
-(void)setCommandFormatteds:(NSMutableArray *)arg1 ;
-(void)setDetailFormatteds:(NSMutableArray *)arg1 ;
-(void)setPriceFormatteds:(NSMutableArray *)arg1 ;
-(BOOL)hasExpandableListFormatted;
-(BOOL)hasTimeInstructions;
-(NSArray *)serverFormattedCommands;
-(NSArray *)serverFormattedDetails;
-(NSArray *)serverFormattedNotices;
-(NSArray *)serverFormattedPrices;
-(void)_transit_prepareForDeepMergeFrom:(id)arg1 ;
@end

