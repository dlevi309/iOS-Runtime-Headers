/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOVisualLaneGuidance : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _instructions;
	NSMutableArray* _laneInfos;
	NSMutableArray* _titles;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_instructions : 1;
		unsigned read_laneInfos : 1;
		unsigned read_titles : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_instructions : 1;
		unsigned wrote_laneInfos : 1;
		unsigned wrote_titles : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * laneInfos; 
@property (nonatomic,retain) NSMutableArray * instructions; 
@property (nonatomic,retain) NSMutableArray * titles; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)titleType;
+(BOOL)isValid:(id)arg1 ;
+(Class)laneInfoType;
+(Class)instructionType;
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
-(void)setTitles:(NSMutableArray *)arg1 ;
-(NSMutableArray *)titles;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readInstructions;
-(NSMutableArray *)instructions;
-(void)setInstructions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)laneInfos;
-(void)_readTitles;
-(void)_addNoFlagsTitle:(id)arg1 ;
-(unsigned long long)titlesCount;
-(void)clearTitles;
-(id)titleAtIndex:(unsigned long long)arg1 ;
-(void)addTitle:(id)arg1 ;
-(void)_readLaneInfos;
-(void)_addNoFlagsLaneInfo:(id)arg1 ;
-(void)_addNoFlagsInstruction:(id)arg1 ;
-(unsigned long long)laneInfosCount;
-(void)clearLaneInfos;
-(id)laneInfoAtIndex:(unsigned long long)arg1 ;
-(void)addLaneInfo:(id)arg1 ;
-(unsigned long long)instructionsCount;
-(void)clearInstructions;
-(id)instructionAtIndex:(unsigned long long)arg1 ;
-(void)addInstruction:(id)arg1 ;
-(void)setLaneInfos:(NSMutableArray *)arg1 ;
@end

