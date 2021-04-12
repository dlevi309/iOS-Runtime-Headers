/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSData, GEORPUserSearchInput;

@interface GEORPDirectionsProblem : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _clientSuggestedRoutes;
	NSData* _directionsResponseId;
	GEORPUserSearchInput* _endWaypoint;
	NSMutableArray* _instructionCorrections;
	NSData* _overviewScreenshotImageData;
	NSMutableArray* _problematicRouteIndexs;
	GEORPUserSearchInput* _startWaypoint;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _problematicLineIndex;
	unsigned _problematicStepIndex;
	SCD_Struct_GE92 _flags;

}

@property (nonatomic,readonly) BOOL hasDirectionsResponseId; 
@property (nonatomic,retain) NSData * directionsResponseId; 
@property (nonatomic,readonly) BOOL hasOverviewScreenshotImageData; 
@property (nonatomic,retain) NSData * overviewScreenshotImageData; 
@property (assign,nonatomic) BOOL hasProblematicStepIndex; 
@property (assign,nonatomic) unsigned problematicStepIndex; 
@property (nonatomic,retain) NSMutableArray * clientSuggestedRoutes; 
@property (nonatomic,retain) NSMutableArray * problematicRouteIndexs; 
@property (assign,nonatomic) BOOL hasProblematicLineIndex; 
@property (assign,nonatomic) unsigned problematicLineIndex; 
@property (nonatomic,readonly) BOOL hasStartWaypoint; 
@property (nonatomic,retain) GEORPUserSearchInput * startWaypoint; 
@property (nonatomic,readonly) BOOL hasEndWaypoint; 
@property (nonatomic,retain) GEORPUserSearchInput * endWaypoint; 
@property (nonatomic,retain) NSMutableArray * instructionCorrections; 
+(BOOL)isValid:(id)arg1 ;
+(Class)problematicRouteIndexType;
+(Class)instructionCorrectionType;
+(Class)clientSuggestedRouteType;
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
-(void)_readDirectionsResponseId;
-(NSData *)directionsResponseId;
-(void)setDirectionsResponseId:(NSData *)arg1 ;
-(BOOL)hasDirectionsResponseId;
-(void)_readProblematicRouteIndexs;
-(void)_addNoFlagsProblematicRouteIndex:(id)arg1 ;
-(void)_readInstructionCorrections;
-(void)_addNoFlagsInstructionCorrection:(id)arg1 ;
-(unsigned long long)problematicRouteIndexsCount;
-(void)clearProblematicRouteIndexs;
-(id)problematicRouteIndexAtIndex:(unsigned long long)arg1 ;
-(void)addProblematicRouteIndex:(id)arg1 ;
-(unsigned long long)instructionCorrectionsCount;
-(void)clearInstructionCorrections;
-(id)instructionCorrectionAtIndex:(unsigned long long)arg1 ;
-(void)addInstructionCorrection:(id)arg1 ;
-(NSMutableArray *)problematicRouteIndexs;
-(void)setProblematicRouteIndexs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)instructionCorrections;
-(void)setInstructionCorrections:(NSMutableArray *)arg1 ;
-(void)_readOverviewScreenshotImageData;
-(void)_readClientSuggestedRoutes;
-(void)_addNoFlagsClientSuggestedRoute:(id)arg1 ;
-(void)_readStartWaypoint;
-(void)_readEndWaypoint;
-(NSData *)overviewScreenshotImageData;
-(GEORPUserSearchInput *)startWaypoint;
-(GEORPUserSearchInput *)endWaypoint;
-(void)setOverviewScreenshotImageData:(NSData *)arg1 ;
-(unsigned long long)clientSuggestedRoutesCount;
-(void)clearClientSuggestedRoutes;
-(id)clientSuggestedRouteAtIndex:(unsigned long long)arg1 ;
-(void)addClientSuggestedRoute:(id)arg1 ;
-(void)setStartWaypoint:(GEORPUserSearchInput *)arg1 ;
-(void)setEndWaypoint:(GEORPUserSearchInput *)arg1 ;
-(BOOL)hasOverviewScreenshotImageData;
-(unsigned)problematicStepIndex;
-(void)setProblematicStepIndex:(unsigned)arg1 ;
-(void)setHasProblematicStepIndex:(BOOL)arg1 ;
-(BOOL)hasProblematicStepIndex;
-(NSMutableArray *)clientSuggestedRoutes;
-(void)setClientSuggestedRoutes:(NSMutableArray *)arg1 ;
-(unsigned)problematicLineIndex;
-(void)setProblematicLineIndex:(unsigned)arg1 ;
-(void)setHasProblematicLineIndex:(BOOL)arg1 ;
-(BOOL)hasProblematicLineIndex;
-(BOOL)hasStartWaypoint;
-(BOOL)hasEndWaypoint;
@end

