/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOFormattedString;

@interface GEOStepGroup : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _stepIds;
	GEOFormattedString* _groupInstruction;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_stepIds : 1;
		unsigned read_groupInstruction : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasGroupInstruction; 
@property (nonatomic,retain) GEOFormattedString * groupInstruction; 
@property (nonatomic,readonly) unsigned long long stepIdsCount; 
@property (nonatomic,readonly) unsigned* stepIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(unsigned*)stepIds;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(GEOFormattedString *)groupInstruction;
-(unsigned long long)stepIdsCount;
-(void)setGroupInstruction:(GEOFormattedString *)arg1 ;
-(void)clearStepIds;
-(unsigned)stepIdAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasGroupInstruction;
-(void)setStepIds:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addStepId:(unsigned)arg1 ;
-(void)dealloc;
@end

