/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
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
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(GEOABExperimentAssignment *)tilesAbExperimentAssignment;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(BOOL)hasTilesAbExperimentAssignment;
-(id)jsonRepresentation;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setTilesAbExperimentAssignment:(GEOABExperimentAssignment *)arg1 ;
-(unsigned long long)hash;
-(void)addAbExperimentAssignment:(id)arg1 ;
-(void)addTimeToLeaveHypothesisFeedbackCollection:(id)arg1 ;
-(void)addTimeToLeaveInitialTravelTimeFeedbackCollection:(id)arg1 ;
-(unsigned long long)abExperimentAssignmentsCount;
-(void)clearAbExperimentAssignments;
-(id)abExperimentAssignmentAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)timeToLeaveHypothesisFeedbackCollectionsCount;
-(NSMutableArray *)timeToLeaveHypothesisFeedbackCollections;
-(void)clearTimeToLeaveHypothesisFeedbackCollections;
-(id)timeToLeaveHypothesisFeedbackCollectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)timeToLeaveInitialTravelTimeFeedbackCollectionsCount;
-(void)setAbExperimentAssignments:(NSMutableArray *)arg1 ;
-(void)clearTimeToLeaveInitialTravelTimeFeedbackCollections;
-(id)timeToLeaveInitialTravelTimeFeedbackCollectionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)abExperimentAssignments;
-(void)setTimeToLeaveHypothesisFeedbackCollections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)timeToLeaveInitialTravelTimeFeedbackCollections;
-(void)setTimeToLeaveInitialTravelTimeFeedbackCollections:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

