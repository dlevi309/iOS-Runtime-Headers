/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSMutableArray;

@interface NTPBGroupViewExposure : PBCodable <NSCopying> {

	NSData* _articleViewingSessionId;
	NSString* _curatedBatchId;
	int _curatedContentType;
	NSString* _curatedSubtype;
	int _feedAutoSubscribeType;
	NSData* _feedViewExposureId;
	int _groupArticleCountInForYou;
	int _groupDisplayMode;
	int _groupDisplayRankInForYou;
	NSString* _groupExposedInLocationId;
	NSString* _groupExposedInSourceChannelId;
	NSString* _groupFeedId;
	int _groupFormationReason;
	int _groupLocation;
	int _groupLocationFeedType;
	int _groupPresentationReason;
	int _groupType;
	NSData* _groupViewExposureId;
	NSMutableArray* _groupedArticleIds;
	NSMutableArray* _groupedIssueIds;
	NSMutableArray* _layoutIds;
	int _screenfulsFromTop;
	NSMutableArray* _sectionIds;
	int _topStoryMandatoryArticleCount;
	int _topStoryOptionalArticleCount;
	BOOL _isIssueContext;
	BOOL _isSubscribedToGroupFeed;
	BOOL _reachedEndOfGroup;
	SCD_Struct_NT8 _has;

}

@property (nonatomic,readonly) BOOL hasGroupFeedId; 
@property (nonatomic,retain) NSString * groupFeedId;                                //@synthesize groupFeedId=_groupFeedId - In the implementation block
@property (nonatomic,retain) NSMutableArray * groupedArticleIds;                    //@synthesize groupedArticleIds=_groupedArticleIds - In the implementation block
@property (assign,nonatomic) BOOL hasGroupDisplayRankInForYou; 
@property (assign,nonatomic) int groupDisplayRankInForYou;                          //@synthesize groupDisplayRankInForYou=_groupDisplayRankInForYou - In the implementation block
@property (assign,nonatomic) BOOL hasGroupArticleCountInForYou; 
@property (assign,nonatomic) int groupArticleCountInForYou;                         //@synthesize groupArticleCountInForYou=_groupArticleCountInForYou - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                         //@synthesize groupType=_groupType - In the implementation block
@property (assign,nonatomic) BOOL hasIsSubscribedToGroupFeed; 
@property (assign,nonatomic) BOOL isSubscribedToGroupFeed;                          //@synthesize isSubscribedToGroupFeed=_isSubscribedToGroupFeed - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                           //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasTopStoryMandatoryArticleCount; 
@property (assign,nonatomic) int topStoryMandatoryArticleCount;                     //@synthesize topStoryMandatoryArticleCount=_topStoryMandatoryArticleCount - In the implementation block
@property (assign,nonatomic) BOOL hasTopStoryOptionalArticleCount; 
@property (assign,nonatomic) int topStoryOptionalArticleCount;                      //@synthesize topStoryOptionalArticleCount=_topStoryOptionalArticleCount - In the implementation block
@property (assign,nonatomic) BOOL hasGroupPresentationReason; 
@property (assign,nonatomic) int groupPresentationReason;                           //@synthesize groupPresentationReason=_groupPresentationReason - In the implementation block
@property (assign,nonatomic) BOOL hasGroupFormationReason; 
@property (assign,nonatomic) int groupFormationReason;                              //@synthesize groupFormationReason=_groupFormationReason - In the implementation block
@property (assign,nonatomic) BOOL hasFeedAutoSubscribeType; 
@property (assign,nonatomic) int feedAutoSubscribeType;                             //@synthesize feedAutoSubscribeType=_feedAutoSubscribeType - In the implementation block
@property (assign,nonatomic) BOOL hasReachedEndOfGroup; 
@property (assign,nonatomic) BOOL reachedEndOfGroup;                                //@synthesize reachedEndOfGroup=_reachedEndOfGroup - In the implementation block
@property (assign,nonatomic) BOOL hasCuratedContentType; 
@property (assign,nonatomic) int curatedContentType;                                //@synthesize curatedContentType=_curatedContentType - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupViewExposureId; 
@property (nonatomic,retain) NSData * groupViewExposureId;                          //@synthesize groupViewExposureId=_groupViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasGroupDisplayMode; 
@property (assign,nonatomic) int groupDisplayMode;                                  //@synthesize groupDisplayMode=_groupDisplayMode - In the implementation block
@property (assign,nonatomic) BOOL hasGroupLocation; 
@property (assign,nonatomic) int groupLocation;                                     //@synthesize groupLocation=_groupLocation - In the implementation block
@property (assign,nonatomic) BOOL hasGroupLocationFeedType; 
@property (assign,nonatomic) int groupLocationFeedType;                             //@synthesize groupLocationFeedType=_groupLocationFeedType - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupExposedInLocationId; 
@property (nonatomic,retain) NSString * groupExposedInLocationId;                   //@synthesize groupExposedInLocationId=_groupExposedInLocationId - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupExposedInSourceChannelId; 
@property (nonatomic,retain) NSString * groupExposedInSourceChannelId;              //@synthesize groupExposedInSourceChannelId=_groupExposedInSourceChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                      //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (assign,nonatomic) BOOL hasScreenfulsFromTop; 
@property (assign,nonatomic) int screenfulsFromTop;                                 //@synthesize screenfulsFromTop=_screenfulsFromTop - In the implementation block
@property (nonatomic,retain) NSMutableArray * groupedIssueIds;                      //@synthesize groupedIssueIds=_groupedIssueIds - In the implementation block
@property (assign,nonatomic) BOOL hasIsIssueContext; 
@property (assign,nonatomic) BOOL isIssueContext;                                   //@synthesize isIssueContext=_isIssueContext - In the implementation block
@property (nonatomic,retain) NSMutableArray * sectionIds;                           //@synthesize sectionIds=_sectionIds - In the implementation block
@property (nonatomic,readonly) BOOL hasCuratedSubtype; 
@property (nonatomic,retain) NSString * curatedSubtype;                             //@synthesize curatedSubtype=_curatedSubtype - In the implementation block
@property (nonatomic,readonly) BOOL hasCuratedBatchId; 
@property (nonatomic,retain) NSString * curatedBatchId;                             //@synthesize curatedBatchId=_curatedBatchId - In the implementation block
@property (nonatomic,retain) NSMutableArray * layoutIds;                            //@synthesize layoutIds=_layoutIds - In the implementation block
+(Class)layoutIdsType;
+(Class)sectionIdsType;
+(Class)groupedArticleIdsType;
+(Class)groupedIssueIdsType;
-(BOOL)hasGroupFormationReason;
-(void)setHasGroupLocation:(BOOL)arg1 ;
-(id)groupTypeAsString:(int)arg1 ;
-(BOOL)hasTopStoryMandatoryArticleCount;
-(BOOL)hasCuratedContentType;
-(void)setGroupLocation:(int)arg1 ;
-(void)setCuratedBatchId:(NSString *)arg1 ;
-(BOOL)hasGroupDisplayRankInForYou;
-(int)StringAsCuratedContentType:(id)arg1 ;
-(NSData *)groupViewExposureId;
-(id)feedAutoSubscribeTypeAsString:(int)arg1 ;
-(int)topStoryMandatoryArticleCount;
-(void)setHasGroupPresentationReason:(BOOL)arg1 ;
-(BOOL)hasFeedAutoSubscribeType;
-(BOOL)hasGroupViewExposureId;
-(int)groupPresentationReason;
-(void)setHasCuratedContentType:(BOOL)arg1 ;
-(BOOL)hasGroupFeedId;
-(int)topStoryOptionalArticleCount;
-(void)setGroupFeedId:(NSString *)arg1 ;
-(BOOL)hasFeedViewExposureId;
-(void)setHasFeedAutoSubscribeType:(BOOL)arg1 ;
-(void)setGroupViewExposureId:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(id)groupLocationAsString:(int)arg1 ;
-(void)setGroupType:(int)arg1 ;
-(int)groupLocation;
-(int)groupFormationReason;
-(void)setGroupPresentationReason:(int)arg1 ;
-(BOOL)hasGroupArticleCountInForYou;
-(BOOL)hasTopStoryOptionalArticleCount;
-(int)groupDisplayRankInForYou;
-(id)groupPresentationReasonAsString:(int)arg1 ;
-(void)setHasGroupArticleCountInForYou:(BOOL)arg1 ;
-(void)setHasTopStoryOptionalArticleCount:(BOOL)arg1 ;
-(int)StringAsFeedAutoSubscribeType:(id)arg1 ;
-(void)setTopStoryOptionalArticleCount:(int)arg1 ;
-(void)setTopStoryMandatoryArticleCount:(int)arg1 ;
-(NSString *)curatedBatchId;
-(BOOL)hasArticleViewingSessionId;
-(void)setHasGroupFormationReason:(BOOL)arg1 ;
-(void)setFeedAutoSubscribeType:(int)arg1 ;
-(void)setGroupFormationReason:(int)arg1 ;
-(void)setIsIssueContext:(BOOL)arg1 ;
-(BOOL)isSubscribedToGroupFeed;
-(int)StringAsGroupLocation:(id)arg1 ;
-(void)setGroupDisplayRankInForYou:(int)arg1 ;
-(int)StringAsGroupFormationReason:(id)arg1 ;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(BOOL)hasGroupLocation;
-(void)setHasIsSubscribedToGroupFeed:(BOOL)arg1 ;
-(int)feedAutoSubscribeType;
-(void)setHasGroupType:(BOOL)arg1 ;
-(void)setGroupExposedInSourceChannelId:(NSString *)arg1 ;
-(void)setIsSubscribedToGroupFeed:(BOOL)arg1 ;
-(id)groupFormationReasonAsString:(int)arg1 ;
-(id)curatedContentTypeAsString:(int)arg1 ;
-(BOOL)hasIsSubscribedToGroupFeed;
-(BOOL)hasGroupType;
-(void)setHasTopStoryMandatoryArticleCount:(BOOL)arg1 ;
-(BOOL)hasCuratedBatchId;
-(void)setHasGroupDisplayRankInForYou:(BOOL)arg1 ;
-(int)StringAsGroupType:(id)arg1 ;
-(void)setCuratedContentType:(int)arg1 ;
-(NSString *)groupFeedId;
-(int)curatedContentType;
-(NSData *)feedViewExposureId;
-(void)setGroupArticleCountInForYou:(int)arg1 ;
-(NSString *)groupExposedInLocationId;
-(int)StringAsGroupPresentationReason:(id)arg1 ;
-(int)groupArticleCountInForYou;
-(BOOL)hasGroupPresentationReason;
-(NSData *)articleViewingSessionId;
-(unsigned long long)layoutIdsCount;
-(void)addLayoutIds:(id)arg1 ;
-(BOOL)hasGroupExposedInLocationId;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(void)clearGroupedIssueIds;
-(NSMutableArray *)layoutIds;
-(BOOL)hasIsIssueContext;
-(BOOL)isIssueContext;
-(int)StringAsGroupLocationFeedType:(id)arg1 ;
-(void)clearSectionIds;
-(int)groupDisplayMode;
-(NSString *)groupExposedInSourceChannelId;
-(unsigned long long)groupedArticleIdsCount;
-(id)sectionIdsAtIndex:(unsigned long long)arg1 ;
-(void)setLayoutIds:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)groupedArticleIdsAtIndex:(unsigned long long)arg1 ;
-(NSString *)curatedSubtype;
-(BOOL)hasGroupExposedInSourceChannelId;
-(BOOL)hasReachedEndOfGroup;
-(NSMutableArray *)sectionIds;
-(void)setGroupedIssueIds:(NSMutableArray *)arg1 ;
-(int)screenfulsFromTop;
-(unsigned long long)sectionIdsCount;
-(void)setHasReachedEndOfGroup:(BOOL)arg1 ;
-(id)groupLocationFeedTypeAsString:(int)arg1 ;
-(BOOL)hasCuratedSubtype;
-(id)description;
-(void)addSectionIds:(id)arg1 ;
-(BOOL)hasGroupDisplayMode;
-(BOOL)hasScreenfulsFromTop;
-(void)setScreenfulsFromTop:(int)arg1 ;
-(void)setGroupExposedInLocationId:(NSString *)arg1 ;
-(void)setHasIsIssueContext:(BOOL)arg1 ;
-(void)setReachedEndOfGroup:(BOOL)arg1 ;
-(void)clearGroupedArticleIds;
-(id)layoutIdsAtIndex:(unsigned long long)arg1 ;
-(void)setHasGroupDisplayMode:(BOOL)arg1 ;
-(int)groupType;
-(unsigned long long)hash;
-(void)setGroupDisplayMode:(int)arg1 ;
-(unsigned long long)groupedIssueIdsCount;
-(void)clearLayoutIds;
-(BOOL)readFrom:(id)arg1 ;
-(void)addGroupedIssueIds:(id)arg1 ;
-(int)groupLocationFeedType;
-(void)setSectionIds:(NSMutableArray *)arg1 ;
-(BOOL)hasGroupLocationFeedType;
-(void)setGroupLocationFeedType:(int)arg1 ;
-(NSMutableArray *)groupedArticleIds;
-(void)setGroupedArticleIds:(NSMutableArray *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addGroupedArticleIds:(id)arg1 ;
-(id)groupedIssueIdsAtIndex:(unsigned long long)arg1 ;
-(void)setCuratedSubtype:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasGroupLocationFeedType:(BOOL)arg1 ;
-(NSMutableArray *)groupedIssueIds;
-(BOOL)reachedEndOfGroup;
-(void)setHasScreenfulsFromTop:(BOOL)arg1 ;
@end

