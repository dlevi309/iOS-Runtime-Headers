/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOFormattedString;

@interface GEODrivingWalkingInstruction : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _continueCommands;
	GEOFormattedString* _distance;
	NSMutableArray* _mergeCommands;
	NSMutableArray* _normalCommands;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_continueCommands : 1;
		unsigned read_distance : 1;
		unsigned read_mergeCommands : 1;
		unsigned read_normalCommands : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_continueCommands : 1;
		unsigned wrote_distance : 1;
		unsigned wrote_mergeCommands : 1;
		unsigned wrote_normalCommands : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDistance; 
@property (nonatomic,retain) GEOFormattedString * distance; 
@property (nonatomic,retain) NSMutableArray * normalCommands; 
@property (nonatomic,retain) NSMutableArray * continueCommands; 
@property (nonatomic,retain) NSMutableArray * mergeCommands; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)normalCommandType;
+(Class)continueCommandType;
+(Class)mergeCommandType;
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
-(void)setDistance:(GEOFormattedString *)arg1 ;
-(GEOFormattedString *)distance;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasDistance;
-(NSMutableArray *)normalCommands;
-(NSMutableArray *)mergeCommands;
-(NSMutableArray *)continueCommands;
-(void)_readDistance;
-(void)_readNormalCommands;
-(void)_addNoFlagsNormalCommand:(id)arg1 ;
-(void)_readContinueCommands;
-(void)_addNoFlagsContinueCommand:(id)arg1 ;
-(void)_readMergeCommands;
-(void)_addNoFlagsMergeCommand:(id)arg1 ;
-(unsigned long long)normalCommandsCount;
-(void)clearNormalCommands;
-(id)normalCommandAtIndex:(unsigned long long)arg1 ;
-(void)addNormalCommand:(id)arg1 ;
-(unsigned long long)continueCommandsCount;
-(void)clearContinueCommands;
-(id)continueCommandAtIndex:(unsigned long long)arg1 ;
-(void)addContinueCommand:(id)arg1 ;
-(unsigned long long)mergeCommandsCount;
-(void)clearMergeCommands;
-(id)mergeCommandAtIndex:(unsigned long long)arg1 ;
-(void)addMergeCommand:(id)arg1 ;
-(void)setNormalCommands:(NSMutableArray *)arg1 ;
-(void)setContinueCommands:(NSMutableArray *)arg1 ;
-(void)setMergeCommands:(NSMutableArray *)arg1 ;
@end

