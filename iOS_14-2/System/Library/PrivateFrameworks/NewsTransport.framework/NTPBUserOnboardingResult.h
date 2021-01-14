/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBUserOnboardingResult : PBCodable <NSCopying> {

	NSMutableArray* _channelIds;
	NSString* _onboardAbandonStage;
	int _resultType;
	NSMutableArray* _topicIds;
	int _totalChannelSelections;
	int _totalResets;
	int _totalTopicSelections;
	BOOL _icloudAccountMatch;
	BOOL _sawEmailOptIn;
	SCD_Struct_NT9 _has;

}

@property (assign,nonatomic) BOOL hasResultType; 
@property (assign,nonatomic) int resultType;                              //@synthesize resultType=_resultType - In the implementation block
@property (assign,nonatomic) BOOL hasIcloudAccountMatch; 
@property (assign,nonatomic) BOOL icloudAccountMatch;                     //@synthesize icloudAccountMatch=_icloudAccountMatch - In the implementation block
@property (nonatomic,readonly) BOOL hasOnboardAbandonStage; 
@property (nonatomic,retain) NSString * onboardAbandonStage;              //@synthesize onboardAbandonStage=_onboardAbandonStage - In the implementation block
@property (assign,nonatomic) BOOL hasTotalChannelSelections; 
@property (assign,nonatomic) int totalChannelSelections;                  //@synthesize totalChannelSelections=_totalChannelSelections - In the implementation block
@property (assign,nonatomic) BOOL hasTotalTopicSelections; 
@property (assign,nonatomic) int totalTopicSelections;                    //@synthesize totalTopicSelections=_totalTopicSelections - In the implementation block
@property (nonatomic,retain) NSMutableArray * channelIds;                 //@synthesize channelIds=_channelIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicIds;                   //@synthesize topicIds=_topicIds - In the implementation block
@property (assign,nonatomic) BOOL hasTotalResets; 
@property (assign,nonatomic) int totalResets;                             //@synthesize totalResets=_totalResets - In the implementation block
@property (assign,nonatomic) BOOL hasSawEmailOptIn; 
@property (assign,nonatomic) BOOL sawEmailOptIn;                          //@synthesize sawEmailOptIn=_sawEmailOptIn - In the implementation block
+(Class)channelIdType;
+(Class)topicIdType;
-(void)clearTopicIds;
-(void)setTopicIds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)topicIds;
-(id)dictionaryRepresentation;
-(void)setResultType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)resultType;
-(void)setHasResultType:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)addChannelId:(id)arg1 ;
-(void)addTopicId:(id)arg1 ;
-(void)setOnboardAbandonStage:(NSString *)arg1 ;
-(void)setIcloudAccountMatch:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasIcloudAccountMatch:(BOOL)arg1 ;
-(BOOL)hasIcloudAccountMatch;
-(BOOL)hasOnboardAbandonStage;
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
-(void)setTotalResets:(int)arg1 ;
-(void)setHasTotalResets:(BOOL)arg1 ;
-(BOOL)hasTotalResets;
-(void)setSawEmailOptIn:(BOOL)arg1 ;
-(void)setHasSawEmailOptIn:(BOOL)arg1 ;
-(BOOL)hasSawEmailOptIn;
-(BOOL)icloudAccountMatch;
-(NSString *)onboardAbandonStage;
-(int)totalChannelSelections;
-(int)totalTopicSelections;
-(NSMutableArray *)channelIds;
-(void)setChannelIds:(NSMutableArray *)arg1 ;
-(int)totalResets;
-(BOOL)sawEmailOptIn;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasResultType;
-(unsigned long long)topicIdsCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

