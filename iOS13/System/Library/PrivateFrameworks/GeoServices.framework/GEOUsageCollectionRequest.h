/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, GEOABExperimentAssignment;

@interface GEOUsageCollectionRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _abExperimentAssignments;
	GEOABExperimentAssignment* _tilesAbExperimentAssignment;
	NSMutableArray* _timeToLeaveHypothesisFeedbackCollections;
	NSMutableArray* _timeToLeaveInitialTravelTimeFeedbackCollections;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_abExperimentAssignments : 1;
		unsigned read_tilesAbExperimentAssignment : 1;
		unsigned read_timeToLeaveHypothesisFeedbackCollections : 1;
		unsigned read_timeToLeaveInitialTravelTimeFeedbackCollections : 1;
		unsigned wrote_abExperimentAssignments : 1;
		unsigned wrote_tilesAbExperimentAssignment : 1;
		unsigned wrote_timeToLeaveHypothesisFeedbackCollections : 1;
		unsigned wrote_timeToLeaveInitialTravelTimeFeedbackCollections : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * abExperimentAssignments; 
@property (nonatomic,retain) NSMutableArray * timeToLeaveHypothesisFeedbackCollections; 
@property (nonatomic,retain) NSMutableArray * timeToLeaveInitialTravelTimeFeedbackCollections; 
@property (nonatomic,readonly) BOOL hasTilesAbExperimentAssignment; 
@property (nonatomic,retain) GEOABExperimentAssignment * tilesAbExperimentAssignment; 
+(BOOL)isValid:(id)arg1 ;
+(Class)abExperimentAssignmentType;
+(Class)timeToLeaveHypothesisFeedbackCollectionType;
+(Class)timeToLeaveInitialTravelTimeFeedbackCollectionType;
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
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)readAll:(BOOL)arg1 ;
-(void)_readAbExperimentAssignments;
-(void)_addNoFlagsAbExperimentAssignment:(id)arg1 ;
-(void)_readTimeToLeaveHypothesisFeedbackCollections;
-(void)_addNoFlagsTimeToLeaveHypothesisFeedbackCollection:(id)arg1 ;
-(void)_readTimeToLeaveInitialTravelTimeFeedbackCollections;
-(void)_addNoFlagsTimeToLeaveInitialTravelTimeFeedbackCollection:(id)arg1 ;
-(void)_readTilesAbExperimentAssignment;
-(GEOABExperimentAssignment *)tilesAbExperimentAssignment;
-(unsigned long long)abExperimentAssignmentsCount;
-(void)clearAbExperimentAssignments;
-(id)abExperimentAssignmentAtIndex:(unsigned long long)arg1 ;
-(void)addAbExperimentAssignment:(id)arg1 ;
-(unsigned long long)timeToLeaveHypothesisFeedbackCollectionsCount;
-(void)clearTimeToLeaveHypothesisFeedbackCollections;
-(id)timeToLeaveHypothesisFeedbackCollectionAtIndex:(unsigned long long)arg1 ;
-(void)addTimeToLeaveHypothesisFeedbackCollection:(id)arg1 ;
-(unsigned long long)timeToLeaveInitialTravelTimeFeedbackCollectionsCount;
-(void)clearTimeToLeaveInitialTravelTimeFeedbackCollections;
-(id)timeToLeaveInitialTravelTimeFeedbackCollectionAtIndex:(unsigned long long)arg1 ;
-(void)addTimeToLeaveInitialTravelTimeFeedbackCollection:(id)arg1 ;
-(void)setTilesAbExperimentAssignment:(GEOABExperimentAssignment *)arg1 ;
-(NSMutableArray *)abExperimentAssignments;
-(void)setAbExperimentAssignments:(NSMutableArray *)arg1 ;
-(NSMutableArray *)timeToLeaveHypothesisFeedbackCollections;
-(void)setTimeToLeaveHypothesisFeedbackCollections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)timeToLeaveInitialTravelTimeFeedbackCollections;
-(void)setTimeToLeaveInitialTravelTimeFeedbackCollections:(NSMutableArray *)arg1 ;
-(BOOL)hasTilesAbExperimentAssignment;
@end

