/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOAbAssignInfo, GEOABClientConfig, GEOPDDatasetABStatus, GEOABExperimentAssignment;

@interface GEOLogMsgStateExperiments : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOAbAssignInfo* _abAssignInfo;
	GEOABClientConfig* _clientAbExperimentAssignment;
	GEOPDDatasetABStatus* _datasetAbStatus;
	GEOABExperimentAssignment* _tilesAbExperimentAssignment;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_abAssignInfo : 1;
		unsigned read_clientAbExperimentAssignment : 1;
		unsigned read_datasetAbStatus : 1;
		unsigned read_tilesAbExperimentAssignment : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTilesAbExperimentAssignment; 
@property (nonatomic,retain) GEOABExperimentAssignment * tilesAbExperimentAssignment; 
@property (nonatomic,readonly) BOOL hasClientAbExperimentAssignment; 
@property (nonatomic,retain) GEOABClientConfig * clientAbExperimentAssignment; 
@property (nonatomic,readonly) BOOL hasDatasetAbStatus; 
@property (nonatomic,retain) GEOPDDatasetABStatus * datasetAbStatus; 
@property (nonatomic,readonly) BOOL hasAbAssignInfo; 
@property (nonatomic,retain) GEOAbAssignInfo * abAssignInfo; 
+(BOOL)isValid:(id)arg1 ;
-(GEOAbAssignInfo *)abAssignInfo;
-(void)setAbAssignInfo:(GEOAbAssignInfo *)arg1 ;
-(id)dictionaryRepresentation;
-(GEOPDDatasetABStatus *)datasetAbStatus;
-(BOOL)hasAbAssignInfo;
-(void)setDatasetAbStatus:(GEOPDDatasetABStatus *)arg1 ;
-(BOOL)hasDatasetAbStatus;
-(void)setClientAbExperimentAssignment:(GEOABClientConfig *)arg1 ;
-(GEOABExperimentAssignment *)tilesAbExperimentAssignment;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(BOOL)hasTilesAbExperimentAssignment;
-(id)jsonRepresentation;
-(BOOL)hasClientAbExperimentAssignment;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(GEOABClientConfig *)clientAbExperimentAssignment;
-(void)setTilesAbExperimentAssignment:(GEOABExperimentAssignment *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

