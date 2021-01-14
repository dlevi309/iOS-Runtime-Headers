/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats : PBCodable <NSCopying> {

	COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats* _channelConversionStats;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats* _globalConversionStats;
	NSMutableArray* _topicConversionStats;

}

@property (nonatomic,retain) NSMutableArray * topicConversionStats;                                                  //@synthesize topicConversionStats=_topicConversionStats - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelConversionStats; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * channelConversionStats;              //@synthesize channelConversionStats=_channelConversionStats - In the implementation block
@property (nonatomic,readonly) BOOL hasGlobalConversionStats; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * globalConversionStats;               //@synthesize globalConversionStats=_globalConversionStats - In the implementation block
+(Class)topicConversionStatsType;
-(id)dictionaryRepresentation;
-(void)setGlobalConversionStats:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)arg1 ;
-(void)setChannelConversionStats:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)addTopicConversionStats:(id)arg1 ;
-(unsigned long long)topicConversionStatsCount;
-(void)clearTopicConversionStats;
-(id)topicConversionStatsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasChannelConversionStats;
-(BOOL)hasGlobalConversionStats;
-(void)setTopicConversionStats:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)globalConversionStats;
-(id)copyWithZone:(NSZone*)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)channelConversionStats;
-(NSMutableArray *)topicConversionStats;
-(BOOL)isEqual:(id)arg1 ;
@end

