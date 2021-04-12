/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_abAssignInfo : 1;
		unsigned wrote_clientAbExperimentAssignment : 1;
		unsigned wrote_datasetAbStatus : 1;
		unsigned wrote_tilesAbExperimentAssignment : 1;
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
-(void)_readDatasetAbStatus;
-(GEOPDDatasetABStatus *)datasetAbStatus;
-(void)setDatasetAbStatus:(GEOPDDatasetABStatus *)arg1 ;
-(BOOL)hasDatasetAbStatus;
-(void)setAbAssignInfo:(GEOAbAssignInfo *)arg1 ;
-(void)_readAbAssignInfo;
-(GEOAbAssignInfo *)abAssignInfo;
-(BOOL)hasAbAssignInfo;
-(void)_readTilesAbExperimentAssignment;
-(GEOABExperimentAssignment *)tilesAbExperimentAssignment;
-(void)setTilesAbExperimentAssignment:(GEOABExperimentAssignment *)arg1 ;
-(BOOL)hasTilesAbExperimentAssignment;
-(void)_readClientAbExperimentAssignment;
-(GEOABClientConfig *)clientAbExperimentAssignment;
-(void)setClientAbExperimentAssignment:(GEOABClientConfig *)arg1 ;
-(BOOL)hasClientAbExperimentAssignment;
@end

