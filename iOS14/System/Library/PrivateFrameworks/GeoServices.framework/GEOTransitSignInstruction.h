/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOComposedRouteStepTransitInstructionMerging.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOTransitSignInstruction : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _commandFormatteds;
	NSMutableArray* _detailFormatteds;
	NSMutableArray* _noticeFormatteds;
	NSMutableArray* _priceFormatteds;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_commandFormatteds : 1;
		unsigned read_detailFormatteds : 1;
		unsigned read_noticeFormatteds : 1;
		unsigned read_priceFormatteds : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * commandFormatteds; 
@property (nonatomic,retain) NSMutableArray * detailFormatteds; 
@property (nonatomic,retain) NSMutableArray * noticeFormatteds; 
@property (nonatomic,retain) NSMutableArray * priceFormatteds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)noticeFormattedType;
+(Class)commandFormattedType;
+(Class)detailFormattedType;
+(Class)priceFormattedType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)description;
-(NSMutableArray *)priceFormatteds;
-(void)addNoticeFormatted:(id)arg1 ;
-(void)addCommandFormatted:(id)arg1 ;
-(void)addDetailFormatted:(id)arg1 ;
-(void)addPriceFormatted:(id)arg1 ;
-(unsigned long long)noticeFormattedsCount;
-(void)clearNoticeFormatteds;
-(id)noticeFormattedAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)commandFormattedsCount;
-(unsigned long long)priceFormattedsCount;
-(void)clearCommandFormatteds;
-(id)commandFormattedAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)detailFormattedsCount;
-(void)clearDetailFormatteds;
-(id)detailFormattedAtIndex:(unsigned long long)arg1 ;
-(void)clearPriceFormatteds;
-(id)priceFormattedAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)noticeFormatteds;
-(void)setNoticeFormatteds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)commandFormatteds;
-(void)setCommandFormatteds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)detailFormatteds;
-(void)setDetailFormatteds:(NSMutableArray *)arg1 ;
-(void)setPriceFormatteds:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)_transit_prepareForDeepMergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

