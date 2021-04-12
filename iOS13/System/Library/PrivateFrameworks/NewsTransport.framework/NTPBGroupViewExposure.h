/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_NT7 _has;

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
+(Class)groupedArticleIdsType;
+(Class)groupedIssueIdsType;
+(Class)sectionIdsType;
+(Class)layoutIdsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)sectionIdsCount;
-(void)clearSectionIds;
-(NSMutableArray *)sectionIds;
-(int)groupType;
-(void)setGroupType:(int)arg1 ;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(BOOL)hasArticleViewingSessionId;
-(NSData *)articleViewingSessionId;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(BOOL)hasFeedViewExposureId;
-(NSData *)feedViewExposureId;
-(void)setHasGroupType:(BOOL)arg1 ;
-(BOOL)hasGroupType;
-(id)groupTypeAsString:(int)arg1 ;
-(int)StringAsGroupType:(id)arg1 ;
-(void)setGroupViewExposureId:(NSData *)arg1 ;
-(BOOL)hasGroupViewExposureId;
-(NSData *)groupViewExposureId;
-(void)setGroupFeedId:(NSString *)arg1 ;
-(BOOL)hasGroupFeedId;
-(NSString *)groupFeedId;
-(void)setCuratedBatchId:(NSString *)arg1 ;
-(void)setIsSubscribedToGroupFeed:(BOOL)arg1 ;
-(void)setHasIsSubscribedToGroupFeed:(BOOL)arg1 ;
-(BOOL)hasIsSubscribedToGroupFeed;
-(void)setGroupArticleCountInForYou:(int)arg1 ;
-(void)setHasGroupArticleCountInForYou:(BOOL)arg1 ;
-(BOOL)hasGroupArticleCountInForYou;
-(void)setGroupDisplayRankInForYou:(int)arg1 ;
-(void)setHasGroupDisplayRankInForYou:(BOOL)arg1 ;
-(BOOL)hasGroupDisplayRankInForYou;
-(void)setTopStoryMandatoryArticleCount:(int)arg1 ;
-(void)setHasTopStoryMandatoryArticleCount:(BOOL)arg1 ;
-(BOOL)hasTopStoryMandatoryArticleCount;
-(void)setTopStoryOptionalArticleCount:(int)arg1 ;
-(void)setHasTopStoryOptionalArticleCount:(BOOL)arg1 ;
-(BOOL)hasTopStoryOptionalArticleCount;
-(int)groupPresentationReason;
-(void)setGroupPresentationReason:(int)arg1 ;
-(void)setHasGroupPresentationReason:(BOOL)arg1 ;
-(BOOL)hasGroupPresentationReason;
-(id)groupPresentationReasonAsString:(int)arg1 ;
-(int)StringAsGroupPresentationReason:(id)arg1 ;
-(int)groupFormationReason;
-(void)setGroupFormationReason:(int)arg1 ;
-(void)setHasGroupFormationReason:(BOOL)arg1 ;
-(BOOL)hasGroupFormationReason;
-(id)groupFormationReasonAsString:(int)arg1 ;
-(int)StringAsGroupFormationReason:(id)arg1 ;
-(int)feedAutoSubscribeType;
-(void)setFeedAutoSubscribeType:(int)arg1 ;
-(void)setHasFeedAutoSubscribeType:(BOOL)arg1 ;
-(BOOL)hasFeedAutoSubscribeType;
-(id)feedAutoSubscribeTypeAsString:(int)arg1 ;
-(int)StringAsFeedAutoSubscribeType:(id)arg1 ;
-(int)curatedContentType;
-(void)setCuratedContentType:(int)arg1 ;
-(void)setHasCuratedContentType:(BOOL)arg1 ;
-(BOOL)hasCuratedContentType;
-(id)curatedContentTypeAsString:(int)arg1 ;
-(int)StringAsCuratedContentType:(id)arg1 ;
-(int)groupLocation;
-(void)setGroupLocation:(int)arg1 ;
-(void)setHasGroupLocation:(BOOL)arg1 ;
-(BOOL)hasGroupLocation;
-(id)groupLocationAsString:(int)arg1 ;
-(int)StringAsGroupLocation:(id)arg1 ;
-(BOOL)hasCuratedBatchId;
-(BOOL)isSubscribedToGroupFeed;
-(int)groupArticleCountInForYou;
-(int)groupDisplayRankInForYou;
-(int)topStoryMandatoryArticleCount;
-(int)topStoryOptionalArticleCount;
-(NSString *)curatedBatchId;
-(void)setScreenfulsFromTop:(int)arg1 ;
-(void)setHasScreenfulsFromTop:(BOOL)arg1 ;
-(BOOL)hasScreenfulsFromTop;
-(int)screenfulsFromTop;
-(void)addGroupedArticleIds:(id)arg1 ;
-(void)addGroupedIssueIds:(id)arg1 ;
-(void)addSectionIds:(id)arg1 ;
-(void)addLayoutIds:(id)arg1 ;
-(void)setGroupExposedInLocationId:(NSString *)arg1 ;
-(void)setGroupExposedInSourceChannelId:(NSString *)arg1 ;
-(void)setCuratedSubtype:(NSString *)arg1 ;
-(void)clearGroupedArticleIds;
-(unsigned long long)groupedArticleIdsCount;
-(id)groupedArticleIdsAtIndex:(unsigned long long)arg1 ;
-(void)setReachedEndOfGroup:(BOOL)arg1 ;
-(void)setHasReachedEndOfGroup:(BOOL)arg1 ;
-(BOOL)hasReachedEndOfGroup;
-(int)groupDisplayMode;
-(void)setGroupDisplayMode:(int)arg1 ;
-(void)setHasGroupDisplayMode:(BOOL)arg1 ;
-(BOOL)hasGroupDisplayMode;
-(int)groupLocationFeedType;
-(void)setGroupLocationFeedType:(int)arg1 ;
-(void)setHasGroupLocationFeedType:(BOOL)arg1 ;
-(BOOL)hasGroupLocationFeedType;
-(id)groupLocationFeedTypeAsString:(int)arg1 ;
-(int)StringAsGroupLocationFeedType:(id)arg1 ;
-(BOOL)hasGroupExposedInLocationId;
-(BOOL)hasGroupExposedInSourceChannelId;
-(void)clearGroupedIssueIds;
-(unsigned long long)groupedIssueIdsCount;
-(id)groupedIssueIdsAtIndex:(unsigned long long)arg1 ;
-(void)setIsIssueContext:(BOOL)arg1 ;
-(void)setHasIsIssueContext:(BOOL)arg1 ;
-(BOOL)hasIsIssueContext;
-(id)sectionIdsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCuratedSubtype;
-(void)clearLayoutIds;
-(unsigned long long)layoutIdsCount;
-(id)layoutIdsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)groupedArticleIds;
-(void)setGroupedArticleIds:(NSMutableArray *)arg1 ;
-(BOOL)reachedEndOfGroup;
-(NSString *)groupExposedInLocationId;
-(NSString *)groupExposedInSourceChannelId;
-(NSMutableArray *)groupedIssueIds;
-(void)setGroupedIssueIds:(NSMutableArray *)arg1 ;
-(BOOL)isIssueContext;
-(void)setSectionIds:(NSMutableArray *)arg1 ;
-(NSString *)curatedSubtype;
-(NSMutableArray *)layoutIds;
-(void)setLayoutIds:(NSMutableArray *)arg1 ;
@end

