/*
* Generated on Thursday, January 14, 2021 at 2:23:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores : PBCodable <NSCopying> {

	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _globalCohorts;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _sourceChannelCohorts;
	NSMutableArray* _topicCohortScores;
	NSMutableArray* _topicCohorts;

}

@property (nonatomic,retain) NSMutableArray * topicCohorts;                                                   //@synthesize topicCohorts=_topicCohorts - In the implementation block
@property (nonatomic,readonly) BOOL hasGlobalCohorts; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * globalCohorts;                     //@synthesize globalCohorts=_globalCohorts - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelCohorts; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * sourceChannelCohorts;              //@synthesize sourceChannelCohorts=_sourceChannelCohorts - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicCohortScores;                                              //@synthesize topicCohortScores=_topicCohortScores - In the implementation block
+(Class)topicCohortsType;
+(Class)topicCohortScoresType;
-(id)dictionaryRepresentation;
-(void)setGlobalCohorts:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)arg1 ;
-(void)addTopicCohorts:(id)arg1 ;
-(id)topicCohortScoresAtIndex:(unsigned long long)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)globalCohorts;
-(unsigned long long)topicCohortsCount;
-(void)mergeFrom:(id)arg1 ;
-(void)clearTopicCohorts;
-(void)clearTopicCohortScores;
-(void)setTopicCohortScores:(NSMutableArray *)arg1 ;
-(id)description;
-(BOOL)hasSourceChannelCohorts;
-(NSMutableArray *)topicCohortScores;
-(BOOL)hasGlobalCohorts;
-(void)setTopicCohorts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)topicCohorts;
-(unsigned long long)hash;
-(unsigned long long)topicCohortScoresCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)addTopicCohortScores:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)topicCohortsAtIndex:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSourceChannelCohorts:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)sourceChannelCohorts;
@end

