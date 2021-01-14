/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOInstructionSet, GEOTransitScheduleInfo, NSData, GEOTransitVehiclePositionInfo;

@interface GEOTransitStepUpdate : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOInstructionSet* _instructions;
	GEOTransitScheduleInfo* _scheduleInfo;
	NSData* _updateIdentifier;
	GEOTransitVehiclePositionInfo* _vehiclePositionInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_instructions : 1;
		unsigned read_scheduleInfo : 1;
		unsigned read_updateIdentifier : 1;
		unsigned read_vehiclePositionInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasUpdateIdentifier; 
@property (nonatomic,retain) NSData * updateIdentifier; 
@property (nonatomic,readonly) BOOL hasInstructions; 
@property (nonatomic,retain) GEOInstructionSet * instructions; 
@property (nonatomic,readonly) BOOL hasVehiclePositionInfo; 
@property (nonatomic,retain) GEOTransitVehiclePositionInfo * vehiclePositionInfo; 
@property (nonatomic,readonly) BOOL hasScheduleInfo; 
@property (nonatomic,retain) GEOTransitScheduleInfo * scheduleInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOInstructionSet *)instructions;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)updateIdentifier;
-(GEOTransitVehiclePositionInfo *)vehiclePositionInfo;
-(GEOTransitScheduleInfo *)scheduleInfo;
-(void)setUpdateIdentifier:(NSData *)arg1 ;
-(void)setInstructions:(GEOInstructionSet *)arg1 ;
-(BOOL)hasInstructions;
-(void)setVehiclePositionInfo:(GEOTransitVehiclePositionInfo *)arg1 ;
-(void)setScheduleInfo:(GEOTransitScheduleInfo *)arg1 ;
-(BOOL)hasUpdateIdentifier;
-(BOOL)hasVehiclePositionInfo;
-(id)description;
-(BOOL)hasScheduleInfo;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

