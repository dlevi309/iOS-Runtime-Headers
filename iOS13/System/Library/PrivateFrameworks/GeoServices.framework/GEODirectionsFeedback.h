/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSData;

@interface GEODirectionsFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _alightNotificationFeedbacks;
	NSData* _directionResponseID;
	NSMutableArray* _guidanceFeedbacks;
	NSMutableArray* _modalitys;
	NSMutableArray* _stepFeedbacks;
	NSMutableArray* _trafficRerouteFeedbacks;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_alightNotificationFeedbacks : 1;
		unsigned read_directionResponseID : 1;
		unsigned read_guidanceFeedbacks : 1;
		unsigned read_modalitys : 1;
		unsigned read_stepFeedbacks : 1;
		unsigned read_trafficRerouteFeedbacks : 1;
		unsigned wrote_alightNotificationFeedbacks : 1;
		unsigned wrote_directionResponseID : 1;
		unsigned wrote_guidanceFeedbacks : 1;
		unsigned wrote_modalitys : 1;
		unsigned wrote_stepFeedbacks : 1;
		unsigned wrote_trafficRerouteFeedbacks : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDirectionResponseID; 
@property (nonatomic,retain) NSData * directionResponseID; 
@property (nonatomic,retain) NSMutableArray * stepFeedbacks; 
@property (nonatomic,retain) NSMutableArray * trafficRerouteFeedbacks; 
@property (nonatomic,retain) NSMutableArray * alightNotificationFeedbacks; 
@property (nonatomic,retain) NSMutableArray * guidanceFeedbacks; 
@property (nonatomic,retain) NSMutableArray * modalitys; 
+(BOOL)isValid:(id)arg1 ;
+(Class)stepFeedbackType;
+(Class)trafficRerouteFeedbackType;
+(Class)alightNotificationFeedbackType;
+(Class)guidanceFeedbackType;
+(Class)modalityType;
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
-(void)setDirectionResponseID:(NSData *)arg1 ;
-(void)addGuidanceFeedback:(id)arg1 ;
-(void)addStepFeedback:(id)arg1 ;
-(void)addTrafficRerouteFeedback:(id)arg1 ;
-(void)addAlightNotificationFeedback:(id)arg1 ;
-(void)setModalitys:(NSMutableArray *)arg1 ;
-(void)_readDirectionResponseID;
-(NSData *)directionResponseID;
-(BOOL)hasDirectionResponseID;
-(void)_readStepFeedbacks;
-(void)_addNoFlagsStepFeedback:(id)arg1 ;
-(void)_readTrafficRerouteFeedbacks;
-(void)_addNoFlagsTrafficRerouteFeedback:(id)arg1 ;
-(void)_readAlightNotificationFeedbacks;
-(void)_addNoFlagsAlightNotificationFeedback:(id)arg1 ;
-(void)_readGuidanceFeedbacks;
-(void)_addNoFlagsGuidanceFeedback:(id)arg1 ;
-(void)_readModalitys;
-(void)_addNoFlagsModality:(id)arg1 ;
-(unsigned long long)stepFeedbacksCount;
-(void)clearStepFeedbacks;
-(id)stepFeedbackAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)trafficRerouteFeedbacksCount;
-(void)clearTrafficRerouteFeedbacks;
-(id)trafficRerouteFeedbackAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)alightNotificationFeedbacksCount;
-(void)clearAlightNotificationFeedbacks;
-(id)alightNotificationFeedbackAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)guidanceFeedbacksCount;
-(void)clearGuidanceFeedbacks;
-(id)guidanceFeedbackAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)modalitysCount;
-(void)clearModalitys;
-(id)modalityAtIndex:(unsigned long long)arg1 ;
-(void)addModality:(id)arg1 ;
-(NSMutableArray *)stepFeedbacks;
-(void)setStepFeedbacks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)trafficRerouteFeedbacks;
-(void)setTrafficRerouteFeedbacks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)alightNotificationFeedbacks;
-(void)setAlightNotificationFeedbacks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)guidanceFeedbacks;
-(void)setGuidanceFeedbacks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)modalitys;
@end

