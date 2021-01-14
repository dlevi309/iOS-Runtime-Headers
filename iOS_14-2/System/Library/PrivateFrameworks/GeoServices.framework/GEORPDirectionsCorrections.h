/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPCorrectedCoordinate, NSData, NSMutableArray, NSString;

@interface GEORPDirectionsCorrections : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPCorrectedCoordinate* _arrivalCoordinate;
	NSData* _directionsResponseId;
	NSMutableArray* _instructionCorrections;
	NSString* _overviewScreenshotImageId;
	NSMutableArray* _problematicRouteIndexs;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _noGoodRoutesShown;
	struct {
		unsigned has_noGoodRoutesShown : 1;
		unsigned read_unknownFields : 1;
		unsigned read_arrivalCoordinate : 1;
		unsigned read_directionsResponseId : 1;
		unsigned read_instructionCorrections : 1;
		unsigned read_overviewScreenshotImageId : 1;
		unsigned read_problematicRouteIndexs : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDirectionsResponseId; 
@property (nonatomic,retain) NSData * directionsResponseId; 
@property (nonatomic,retain) NSMutableArray * problematicRouteIndexs; 
@property (nonatomic,retain) NSMutableArray * instructionCorrections; 
@property (nonatomic,readonly) BOOL hasOverviewScreenshotImageId; 
@property (nonatomic,retain) NSString * overviewScreenshotImageId; 
@property (nonatomic,readonly) BOOL hasArrivalCoordinate; 
@property (nonatomic,retain) GEORPCorrectedCoordinate * arrivalCoordinate; 
@property (assign,nonatomic) BOOL hasNoGoodRoutesShown; 
@property (assign,nonatomic) BOOL noGoodRoutesShown; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)problematicRouteIndexType;
+(Class)instructionCorrectionType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(GEORPCorrectedCoordinate *)arrivalCoordinate;
-(void)setArrivalCoordinate:(GEORPCorrectedCoordinate *)arg1 ;
-(NSString *)overviewScreenshotImageId;
-(void)addProblematicRouteIndex:(id)arg1 ;
-(void)addInstructionCorrection:(id)arg1 ;
-(void)setOverviewScreenshotImageId:(NSString *)arg1 ;
-(void)setNoGoodRoutesShown:(BOOL)arg1 ;
-(unsigned long long)problematicRouteIndexsCount;
-(void)clearProblematicRouteIndexs;
-(id)problematicRouteIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)instructionCorrectionsCount;
-(void)clearInstructionCorrections;
-(id)instructionCorrectionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)problematicRouteIndexs;
-(void)setProblematicRouteIndexs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)instructionCorrections;
-(void)setInstructionCorrections:(NSMutableArray *)arg1 ;
-(BOOL)hasOverviewScreenshotImageId;
-(BOOL)hasArrivalCoordinate;
-(BOOL)noGoodRoutesShown;
-(void)setHasNoGoodRoutesShown:(BOOL)arg1 ;
-(BOOL)hasNoGoodRoutesShown;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)directionsResponseId;
-(void)setDirectionsResponseId:(NSData *)arg1 ;
-(BOOL)hasDirectionsResponseId;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

