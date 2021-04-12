/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_instructions : 1;
		unsigned wrote_scheduleInfo : 1;
		unsigned wrote_updateIdentifier : 1;
		unsigned wrote_vehiclePositionInfo : 1;
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
-(void)_readInstructions;
-(GEOInstructionSet *)instructions;
-(void)setInstructions:(GEOInstructionSet *)arg1 ;
-(BOOL)hasInstructions;
-(NSData *)updateIdentifier;
-(GEOTransitVehiclePositionInfo *)vehiclePositionInfo;
-(GEOTransitScheduleInfo *)scheduleInfo;
-(void)_readUpdateIdentifier;
-(void)_readVehiclePositionInfo;
-(void)_readScheduleInfo;
-(void)setUpdateIdentifier:(NSData *)arg1 ;
-(void)setVehiclePositionInfo:(GEOTransitVehiclePositionInfo *)arg1 ;
-(void)setScheduleInfo:(GEOTransitScheduleInfo *)arg1 ;
-(BOOL)hasUpdateIdentifier;
-(BOOL)hasVehiclePositionInfo;
-(BOOL)hasScheduleInfo;
@end

