/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDistance; 
@property (nonatomic,retain) GEOFormattedString * distance; 
@property (nonatomic,retain) NSMutableArray * normalCommands; 
@property (nonatomic,retain) NSMutableArray * continueCommands; 
@property (nonatomic,retain) NSMutableArray * mergeCommands; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)normalCommandType;
+(Class)continueCommandType;
+(Class)mergeCommandType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)setDistance:(GEOFormattedString *)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(GEOFormattedString *)distance;
-(void)addNormalCommand:(id)arg1 ;
-(void)addContinueCommand:(id)arg1 ;
-(void)addMergeCommand:(id)arg1 ;
-(unsigned long long)normalCommandsCount;
-(void)clearNormalCommands;
-(id)normalCommandAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)continueCommandsCount;
-(void)clearContinueCommands;
-(id)continueCommandAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)mergeCommandsCount;
-(void)clearMergeCommands;
-(id)mergeCommandAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)normalCommands;
-(void)setNormalCommands:(NSMutableArray *)arg1 ;
-(NSMutableArray *)continueCommands;
-(void)setContinueCommands:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mergeCommands;
-(void)setMergeCommands:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDistance;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

