/*
* Generated on Monday, March 1, 2021 at 2:32:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBUserOnboardingChannelPickerComplete : PBCodable <NSCopying> {

	NSMutableArray* _channelIds;
	int _channelPickerPresentationReason;
	NSMutableArray* _topicIds;
	int _totalChannelSelections;
	int _totalTopicSelections;
	BOOL _fromPersonalizeNews;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasTotalChannelSelections; 
@property (assign,nonatomic) int totalChannelSelections;                           //@synthesize totalChannelSelections=_totalChannelSelections - In the implementation block
@property (assign,nonatomic) BOOL hasTotalTopicSelections; 
@property (assign,nonatomic) int totalTopicSelections;                             //@synthesize totalTopicSelections=_totalTopicSelections - In the implementation block
@property (nonatomic,retain) NSMutableArray * channelIds;                          //@synthesize channelIds=_channelIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicIds;                            //@synthesize topicIds=_topicIds - In the implementation block
@property (assign,nonatomic) BOOL hasFromPersonalizeNews; 
@property (assign,nonatomic) BOOL fromPersonalizeNews;                             //@synthesize fromPersonalizeNews=_fromPersonalizeNews - In the implementation block
@property (assign,nonatomic) BOOL hasChannelPickerPresentationReason; 
@property (assign,nonatomic) int channelPickerPresentationReason;                  //@synthesize channelPickerPresentationReason=_channelPickerPresentationReason - In the implementation block
+(Class)channelIdType;
+(Class)topicIdType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)addChannelId:(id)arg1 ;
-(void)addTopicId:(id)arg1 ;
-(void)setTotalChannelSelections:(int)arg1 ;
-(void)setHasTotalChannelSelections:(BOOL)arg1 ;
-(BOOL)hasTotalChannelSelections;
-(void)setTotalTopicSelections:(int)arg1 ;
-(void)setHasTotalTopicSelections:(BOOL)arg1 ;
-(BOOL)hasTotalTopicSelections;
-(void)clearChannelIds;
-(unsigned long long)channelIdsCount;
-(id)channelIdAtIndex:(unsigned long long)arg1 ;
-(void)clearTopicIds;
-(unsigned long long)topicIdsCount;
-(id)topicIdAtIndex:(unsigned long long)arg1 ;
-(int)totalChannelSelections;
-(int)totalTopicSelections;
-(NSMutableArray *)channelIds;
-(void)setChannelIds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)topicIds;
-(void)setTopicIds:(NSMutableArray *)arg1 ;
-(void)setFromPersonalizeNews:(BOOL)arg1 ;
-(void)setHasFromPersonalizeNews:(BOOL)arg1 ;
-(BOOL)hasFromPersonalizeNews;
-(int)channelPickerPresentationReason;
-(void)setChannelPickerPresentationReason:(int)arg1 ;
-(void)setHasChannelPickerPresentationReason:(BOOL)arg1 ;
-(BOOL)hasChannelPickerPresentationReason;
-(id)channelPickerPresentationReasonAsString:(int)arg1 ;
-(int)StringAsChannelPickerPresentationReason:(id)arg1 ;
-(BOOL)fromPersonalizeNews;
@end

