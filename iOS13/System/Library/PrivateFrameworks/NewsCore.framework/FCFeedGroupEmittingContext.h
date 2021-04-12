/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCCoreConfiguration, FCFeedPersonalizing;
@class FCForYouCatchUpOperation, FCCloudContext, FCDateRange, FCFeedEdition, NSDate, FCFeedDescriptor, NSArray, NSHashTable, FCFeedRefreshSession, NSSet;

@interface FCFeedGroupEmittingContext : NSObject {

	BOOL _isTopOfPage;
	BOOL _isFirstPageInRefreshSession;
	BOOL _preferSpeedOverQuality;
	BOOL _isOffline;
	FCForYouCatchUpOperation* _forYouCatchUpOperation;
	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _cloudContext;
	id<FCFeedPersonalizing> _personalizer;
	FCDateRange* _refreshDateRange;
	FCDateRange* _pageDateRange;
	FCFeedEdition* _edition;
	NSDate* _editionKeyDate;
	FCFeedDescriptor* _feedDescriptor;
	unsigned long long _desiredHeadlineCount;
	NSArray* _precedingGroups;
	NSArray* _pendingGroups;
	NSArray* _followingGroups;
	NSArray* _pendingGroupsFromOtherSessions;
	NSHashTable* _groupsFromPage;
	FCFeedRefreshSession* _refreshSession;
	NSHashTable* _insertedGroupsFromPage;
	FCFeedEdition* _followingEdition;
	NSArray* _emitters;
	NSArray* _remainingEmitters;
	NSSet* _articleIDs;
	NSSet* _clusterIDs;
	NSSet* _groupIDs;

}

@property (nonatomic,retain) FCFeedRefreshSession * refreshSession;                            //@synthesize refreshSession=_refreshSession - In the implementation block
@property (nonatomic,retain) NSHashTable * groupsFromPage;                                     //@synthesize groupsFromPage=_groupsFromPage - In the implementation block
@property (nonatomic,retain) NSHashTable * insertedGroupsFromPage;                             //@synthesize insertedGroupsFromPage=_insertedGroupsFromPage - In the implementation block
@property (nonatomic,retain) FCFeedEdition * followingEdition;                                 //@synthesize followingEdition=_followingEdition - In the implementation block
@property (nonatomic,retain) NSArray * emitters;                                               //@synthesize emitters=_emitters - In the implementation block
@property (nonatomic,retain) NSArray * remainingEmitters;                                      //@synthesize remainingEmitters=_remainingEmitters - In the implementation block
@property (nonatomic,copy,readonly) NSSet * articleIDs;                                        //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * clusterIDs;                                        //@synthesize clusterIDs=_clusterIDs - In the implementation block
@property (nonatomic,copy,readonly) NSSet * groupIDs;                                          //@synthesize groupIDs=_groupIDs - In the implementation block
@property (nonatomic,copy,readonly) id<FCCoreConfiguration> configuration;                     //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) FCCloudContext * cloudContext;                                  //@synthesize cloudContext=_cloudContext - In the implementation block
@property (nonatomic,readonly) id<FCFeedPersonalizing> personalizer;                           //@synthesize personalizer=_personalizer - In the implementation block
@property (nonatomic,readonly) FCDateRange * refreshDateRange;                                 //@synthesize refreshDateRange=_refreshDateRange - In the implementation block
@property (nonatomic,copy,readonly) FCDateRange * pageDateRange;                               //@synthesize pageDateRange=_pageDateRange - In the implementation block
@property (nonatomic,readonly) BOOL isTopOfPage;                                               //@synthesize isTopOfPage=_isTopOfPage - In the implementation block
@property (nonatomic,readonly) BOOL isFirstPageInRefreshSession;                               //@synthesize isFirstPageInRefreshSession=_isFirstPageInRefreshSession - In the implementation block
@property (nonatomic,copy,readonly) FCFeedEdition * edition;                                   //@synthesize edition=_edition - In the implementation block
@property (nonatomic,readonly) NSDate * editionKeyDate;                                        //@synthesize editionKeyDate=_editionKeyDate - In the implementation block
@property (nonatomic,copy,readonly) FCFeedDescriptor * feedDescriptor;                         //@synthesize feedDescriptor=_feedDescriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long desiredHeadlineCount;                        //@synthesize desiredHeadlineCount=_desiredHeadlineCount - In the implementation block
@property (nonatomic,readonly) BOOL preferSpeedOverQuality;                                    //@synthesize preferSpeedOverQuality=_preferSpeedOverQuality - In the implementation block
@property (nonatomic,copy,readonly) NSArray * precedingGroups;                                 //@synthesize precedingGroups=_precedingGroups - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pendingGroups;                                   //@synthesize pendingGroups=_pendingGroups - In the implementation block
@property (nonatomic,copy,readonly) NSArray * followingGroups;                                 //@synthesize followingGroups=_followingGroups - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pendingGroupsFromOtherSessions;                  //@synthesize pendingGroupsFromOtherSessions=_pendingGroupsFromOtherSessions - In the implementation block
@property (nonatomic,readonly) long long precedingGroupType; 
@property (nonatomic,readonly) BOOL isOffline;                                                 //@synthesize isOffline=_isOffline - In the implementation block
@property (nonatomic,readonly) FCForYouCatchUpOperation * forYouCatchUpOperation;              //@synthesize forYouCatchUpOperation=_forYouCatchUpOperation - In the implementation block
-(id<FCCoreConfiguration>)configuration;
-(FCFeedEdition *)edition;
-(BOOL)isOffline;
-(NSArray *)pendingGroups;
-(id)allGroupIDs;
-(NSSet *)clusterIDs;
-(FCFeedDescriptor *)feedDescriptor;
-(FCForYouCatchUpOperation *)forYouCatchUpOperation;
-(id)filterTransformationWithFilterOptions:(long long)arg1 ;
-(FCCloudContext *)cloudContext;
-(id)allArticleIDs;
-(NSSet *)articleIDs;
-(FCDateRange *)refreshDateRange;
-(FCDateRange *)pageDateRange;
-(id<FCFeedPersonalizing>)personalizer;
-(BOOL)isNewEdition;
-(BOOL)isTopOfPage;
-(BOOL)pageHasExhaustedGroupsWithTypes:(id)arg1 ;
-(NSArray *)followingGroups;
-(unsigned long long)desiredHeadlineCount;
-(FCFeedRefreshSession *)refreshSession;
-(BOOL)isFirstPageInRefreshSession;
-(id)creationDateOfFollowingGroupWithType:(long long)arg1 ;
-(id)precedingAndPendingTopicIDsInSession;
-(id)precedingAdjacentHeadlinesFromGroupType:(long long)arg1 ;
-(id)followingAdjacentHeadlinesFromGroupType:(long long)arg1 ;
-(id)precedingNewFavoriteTagIDs;
-(id)filterTransformationWithFilterOptions:(long long)arg1 ignoringCurrentPageOutputFrom:(id)arg2 ;
-(NSArray *)precedingGroups;
-(void)setRefreshSession:(FCFeedRefreshSession *)arg1 ;
-(id)filterTransformationWithFilterOptions:(long long)arg1 considerOutputFrom:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 cloudContext:(id)arg2 refreshSession:(id)arg3 refreshDateRange:(id)arg4 currentEdition:(id)arg5 followingEdition:(id)arg6 precedingGroups:(id)arg7 followingGroups:(id)arg8 pendingGroupsFromOtherSessions:(id)arg9 feedDescriptor:(id)arg10 emitters:(id)arg11 desiredHeadlineCount:(unsigned long long)arg12 preferSpeedOverQuality:(BOOL)arg13 forYouCatchUpOperation:(id)arg14 ;
-(NSHashTable *)groupsFromPage;
-(id)groupFromPageWithSourceIdentifier:(id)arg1 ;
-(NSArray *)remainingEmitters;
-(NSHashTable *)insertedGroupsFromPage;
-(NSArray *)pendingGroupsFromOtherSessions;
-(id)_filterTransformationWithFilterOptions:(long long)arg1 groupTypes:(id)arg2 includeArticlesFromGroupTypes:(BOOL)arg3 ;
-(NSSet *)groupIDs;
-(BOOL)pageWillContainExpandedNewGroupWithSourceIdentifier:(id)arg1 ;
-(id)creationDateOfGroupWithSourceIdentifier:(id)arg1 ;
-(FCFeedEdition *)followingEdition;
-(id)copyWithRefreshSession:(id)arg1 ;
-(unsigned long long)countOfGroupsFromPageWithType:(long long)arg1 ;
-(long long)precedingGroupType;
-(unsigned long long)countOfPrecedingAdjacentGroupsWithTypes:(id)arg1 ;
-(BOOL)pageIsWaitingForFirstGroupFromSourceIdentifier:(id)arg1 ;
-(BOOL)pageWillHaveGroupWithSourceIdentifier:(id)arg1 ;
-(BOOL)pageHasPrecedingGroupWithSourceIdentifier:(id)arg1 ;
-(id)filterTransformationWithFilterOptions:(long long)arg1 additionalArticleIDs:(id)arg2 ;
-(id)filterTransformationWithFilterOptions:(long long)arg1 ignoringOutputFrom:(id)arg2 ;
-(id)groupOfGroupType:(long long)arg1 ;
-(id)articleIDsContainedByGroupsWithSourceIdentifier:(id)arg1 ;
-(NSDate *)editionKeyDate;
-(BOOL)preferSpeedOverQuality;
-(void)setGroupsFromPage:(NSHashTable *)arg1 ;
-(void)setInsertedGroupsFromPage:(NSHashTable *)arg1 ;
-(void)setFollowingEdition:(FCFeedEdition *)arg1 ;
-(NSArray *)emitters;
-(void)setEmitters:(NSArray *)arg1 ;
-(void)setRemainingEmitters:(NSArray *)arg1 ;
@end

