/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * laneInfos; 
@property (nonatomic,retain) NSMutableArray * instructions; 
@property (nonatomic,retain) NSMutableArray * titles; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)titleType;
+(Class)laneInfoType;
+(Class)instructionType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)titleAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)instructions;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setTitles:(NSMutableArray *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setInstructions:(NSMutableArray *)arg1 ;
-(id)description;
-(void)addTitle:(id)arg1 ;
-(unsigned long long)titlesCount;
-(void)clearTitles;
-(NSMutableArray *)laneInfos;
-(void)addLaneInfo:(id)arg1 ;
-(void)setLaneInfos:(NSMutableArray *)arg1 ;
-(void)addInstruction:(id)arg1 ;
-(unsigned long long)laneInfosCount;
-(void)clearLaneInfos;
-(id)laneInfoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)instructionsCount;
-(void)clearInstructions;
-(id)instructionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(NSMutableArray *)titles;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

