/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _isCarplayConnected;
	struct {
		unsigned has_isCarplayConnected : 1;
		unsigned read_alightNotificationFeedbacks : 1;
		unsigned read_directionResponseID : 1;
		unsigned read_guidanceFeedbacks : 1;
		unsigned read_modalitys : 1;
		unsigned read_stepFeedbacks : 1;
		unsigned read_trafficRerouteFeedbacks : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDirectionResponseID; 
@property (nonatomic,retain) NSData * directionResponseID; 
@property (nonatomic,retain) NSMutableArray * stepFeedbacks; 
@property (nonatomic,retain) NSMutableArray * trafficRerouteFeedbacks; 
@property (nonatomic,retain) NSMutableArray * alightNotificationFeedbacks; 
@property (nonatomic,retain) NSMutableArray * guidanceFeedbacks; 
@property (nonatomic,retain) NSMutableArray * modalitys; 
@property (assign,nonatomic) BOOL hasIsCarplayConnected; 
@property (assign,nonatomic) BOOL isCarplayConnected; 
+(Class)modalityType;
+(Class)stepFeedbackType;
+(Class)trafficRerouteFeedbackType;
+(Class)alightNotificationFeedbackType;
+(Class)guidanceFeedbackType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSMutableArray *)modalitys;
-(void)addModality:(id)arg1 ;
-(unsigned long long)modalitysCount;
-(void)addStepFeedback:(id)arg1 ;
-(void)addTrafficRerouteFeedback:(id)arg1 ;
-(void)addAlightNotificationFeedback:(id)arg1 ;
-(void)addGuidanceFeedback:(id)arg1 ;
-(void)setIsCarplayConnected:(BOOL)arg1 ;
-(void)clearModalitys;
-(unsigned long long)stepFeedbacksCount;
-(void)clearStepFeedbacks;
-(id)stepFeedbackAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)trafficRerouteFeedbacksCount;
-(void)clearTrafficRerouteFeedbacks;
-(id)trafficRerouteFeedbackAtIndex:(unsigned long long)arg1 ;
-(void)clearGuidanceFeedbacks;
-(unsigned long long)alightNotificationFeedbacksCount;
-(void)clearAlightNotificationFeedbacks;
-(unsigned long long)guidanceFeedbacksCount;
-(id)alightNotificationFeedbackAtIndex:(unsigned long long)arg1 ;
-(id)guidanceFeedbackAtIndex:(unsigned long long)arg1 ;
-(id)modalityAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)stepFeedbacks;
-(void)setModalitys:(NSMutableArray *)arg1 ;
-(void)setStepFeedbacks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)trafficRerouteFeedbacks;
-(void)setTrafficRerouteFeedbacks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)alightNotificationFeedbacks;
-(void)setAlightNotificationFeedbacks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)guidanceFeedbacks;
-(void)setGuidanceFeedbacks:(NSMutableArray *)arg1 ;
-(BOOL)isCarplayConnected;
-(void)setHasIsCarplayConnected:(BOOL)arg1 ;
-(BOOL)hasIsCarplayConnected;
-(unsigned long long)hash;
-(NSData *)directionResponseID;
-(void)setDirectionResponseID:(NSData *)arg1 ;
-(BOOL)hasDirectionResponseID;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

