/*
* Generated on Monday, March 1, 2021 at 2:32:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores : PBCodable <NSCopying> {

	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _globalCohorts;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _sourceChannelCohorts;
	NSMutableArray* _topicCohorts;

}

@property (nonatomic,retain) NSMutableArray * topicCohorts;                                                   //@synthesize topicCohorts=_topicCohorts - In the implementation block
@property (nonatomic,readonly) BOOL hasGlobalCohorts; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * globalCohorts;                     //@synthesize globalCohorts=_globalCohorts - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelCohorts; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * sourceChannelCohorts;              //@synthesize sourceChannelCohorts=_sourceChannelCohorts - In the implementation block
+(Class)topicCohortsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)globalCohorts;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)sourceChannelCohorts;
-(NSMutableArray *)topicCohorts;
-(void)setGlobalCohorts:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)arg1 ;
-(void)setSourceChannelCohorts:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)arg1 ;
-(void)addTopicCohorts:(id)arg1 ;
-(unsigned long long)topicCohortsCount;
-(void)clearTopicCohorts;
-(id)topicCohortsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasGlobalCohorts;
-(BOOL)hasSourceChannelCohorts;
-(void)setTopicCohorts:(NSMutableArray *)arg1 ;
@end

