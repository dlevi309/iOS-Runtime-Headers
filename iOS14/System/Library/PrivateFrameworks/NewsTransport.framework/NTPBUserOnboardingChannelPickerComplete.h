/*
* Generated on Thursday, January 14, 2021 at 2:23:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_NT2 _has;

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
-(void)clearTopicIds;
-(void)setTopicIds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)topicIds;
-(id)dictionaryRepresentation;
-(id)channelPickerPresentationReasonAsString:(int)arg1 ;
-(BOOL)fromPersonalizeNews;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setChannelPickerPresentationReason:(int)arg1 ;
-(int)StringAsChannelPickerPresentationReason:(id)arg1 ;
-(BOOL)hasChannelPickerPresentationReason;
-(unsigned long long)hash;
-(int)channelPickerPresentationReason;
-(void)addChannelId:(id)arg1 ;
-(void)addTopicId:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasChannelPickerPresentationReason:(BOOL)arg1 ;
-(void)setTotalChannelSelections:(int)arg1 ;
-(void)setHasTotalChannelSelections:(BOOL)arg1 ;
-(BOOL)hasTotalChannelSelections;
-(void)setTotalTopicSelections:(int)arg1 ;
-(void)setHasTotalTopicSelections:(BOOL)arg1 ;
-(BOOL)hasTotalTopicSelections;
-(void)clearChannelIds;
-(unsigned long long)channelIdsCount;
-(id)channelIdAtIndex:(unsigned long long)arg1 ;
-(id)topicIdAtIndex:(unsigned long long)arg1 ;
-(void)setHasFromPersonalizeNews:(BOOL)arg1 ;
-(int)totalChannelSelections;
-(int)totalTopicSelections;
-(NSMutableArray *)channelIds;
-(void)setChannelIds:(NSMutableArray *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasFromPersonalizeNews;
-(void)setFromPersonalizeNews:(BOOL)arg1 ;
-(unsigned long long)topicIdsCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

