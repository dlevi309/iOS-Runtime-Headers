/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_arrivalCoordinate : 1;
		unsigned wrote_directionsResponseId : 1;
		unsigned wrote_instructionCorrections : 1;
		unsigned wrote_overviewScreenshotImageId : 1;
		unsigned wrote_problematicRouteIndexs : 1;
		unsigned wrote_noGoodRoutesShown : 1;
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
+(BOOL)isValid:(id)arg1 ;
+(Class)problematicRouteIndexType;
+(Class)instructionCorrectionType;
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readDirectionsResponseId;
-(NSData *)directionsResponseId;
-(void)setDirectionsResponseId:(NSData *)arg1 ;
-(BOOL)hasDirectionsResponseId;
-(void)_readProblematicRouteIndexs;
-(void)_addNoFlagsProblematicRouteIndex:(id)arg1 ;
-(void)_readInstructionCorrections;
-(void)_addNoFlagsInstructionCorrection:(id)arg1 ;
-(void)_readOverviewScreenshotImageId;
-(void)_readArrivalCoordinate;
-(NSString *)overviewScreenshotImageId;
-(GEORPCorrectedCoordinate *)arrivalCoordinate;
-(unsigned long long)problematicRouteIndexsCount;
-(void)clearProblematicRouteIndexs;
-(id)problematicRouteIndexAtIndex:(unsigned long long)arg1 ;
-(void)addProblematicRouteIndex:(id)arg1 ;
-(unsigned long long)instructionCorrectionsCount;
-(void)clearInstructionCorrections;
-(id)instructionCorrectionAtIndex:(unsigned long long)arg1 ;
-(void)addInstructionCorrection:(id)arg1 ;
-(void)setOverviewScreenshotImageId:(NSString *)arg1 ;
-(void)setArrivalCoordinate:(GEORPCorrectedCoordinate *)arg1 ;
-(NSMutableArray *)problematicRouteIndexs;
-(void)setProblematicRouteIndexs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)instructionCorrections;
-(void)setInstructionCorrections:(NSMutableArray *)arg1 ;
-(BOOL)hasOverviewScreenshotImageId;
-(BOOL)hasArrivalCoordinate;
-(BOOL)noGoodRoutesShown;
-(void)setNoGoodRoutesShown:(BOOL)arg1 ;
-(void)setHasNoGoodRoutesShown:(BOOL)arg1 ;
-(BOOL)hasNoGoodRoutesShown;
@end

