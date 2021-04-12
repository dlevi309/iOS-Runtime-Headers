/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOFormattedString, NSMutableArray;

@interface GEODrivingWalkingSpokenInstruction : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOFormattedString* _continueStage;
	NSMutableArray* _executionStages;
	GEOFormattedString* _initialStage;
	GEOFormattedString* _preparationStage;
	GEOFormattedString* _proceedStage;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _shortChainedInstructionIndex;
	struct {
		unsigned has_shortChainedInstructionIndex : 1;
		unsigned read_unknownFields : 1;
		unsigned read_continueStage : 1;
		unsigned read_executionStages : 1;
		unsigned read_initialStage : 1;
		unsigned read_preparationStage : 1;
		unsigned read_proceedStage : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_continueStage : 1;
		unsigned wrote_executionStages : 1;
		unsigned wrote_initialStage : 1;
		unsigned wrote_preparationStage : 1;
		unsigned wrote_proceedStage : 1;
		unsigned wrote_shortChainedInstructionIndex : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasProceedStage; 
@property (nonatomic,retain) GEOFormattedString * proceedStage; 
@property (nonatomic,readonly) BOOL hasContinueStage; 
@property (nonatomic,retain) GEOFormattedString * continueStage; 
@property (nonatomic,readonly) BOOL hasInitialStage; 
@property (nonatomic,retain) GEOFormattedString * initialStage; 
@property (nonatomic,readonly) BOOL hasPreparationStage; 
@property (nonatomic,retain) GEOFormattedString * preparationStage; 
@property (nonatomic,retain) NSMutableArray * executionStages; 
@property (assign,nonatomic) BOOL hasShortChainedInstructionIndex; 
@property (assign,nonatomic) unsigned shortChainedInstructionIndex; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)executionStageType;
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
-(GEOFormattedString *)proceedStage;
-(GEOFormattedString *)continueStage;
-(GEOFormattedString *)initialStage;
-(GEOFormattedString *)preparationStage;
-(NSMutableArray *)executionStages;
-(void)_readProceedStage;
-(void)_readContinueStage;
-(void)_readInitialStage;
-(void)_readPreparationStage;
-(void)_readExecutionStages;
-(void)_addNoFlagsExecutionStage:(id)arg1 ;
-(void)setProceedStage:(GEOFormattedString *)arg1 ;
-(void)setContinueStage:(GEOFormattedString *)arg1 ;
-(void)setInitialStage:(GEOFormattedString *)arg1 ;
-(void)setPreparationStage:(GEOFormattedString *)arg1 ;
-(unsigned long long)executionStagesCount;
-(void)clearExecutionStages;
-(id)executionStageAtIndex:(unsigned long long)arg1 ;
-(void)addExecutionStage:(id)arg1 ;
-(BOOL)hasProceedStage;
-(BOOL)hasContinueStage;
-(BOOL)hasInitialStage;
-(BOOL)hasPreparationStage;
-(void)setExecutionStages:(NSMutableArray *)arg1 ;
-(unsigned)shortChainedInstructionIndex;
-(void)setShortChainedInstructionIndex:(unsigned)arg1 ;
-(void)setHasShortChainedInstructionIndex:(BOOL)arg1 ;
-(BOOL)hasShortChainedInstructionIndex;
@end

