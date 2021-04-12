/*
* Generated on Thursday, January 14, 2021 at 2:23:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NTPBWidgetEngagement;

@interface NTPBAppSessionStart : PBCodable <NSCopying> {

	long long _lastAppSessionTimestamp;
	int _appsAutoSubscribeFeedCount;
	NSMutableArray* _autoSubscribedFeedIds;
	NSString* _campaignId;
	NSString* _campaignType;
	int _channelSubscriptionCount;
	NSString* _creativeId;
	NSMutableArray* _groupableFeedIds;
	int _internalAutoSubscribeFeedCount;
	NSString* _notificationArticleId;
	NSMutableArray* _notificationChannelIds;
	int _notificationEnabledChannelsCount;
	NSString* _notificationId;
	NSString* _notificationSenderChannelId;
	NSString* _notificationSourceChannelId;
	int _notificationType;
	int _notitificationsEnabledChannelsCount;
	NSMutableArray* _paidSubscriptionChannelIds;
	int _portraitAutoSubscribeFeedCount;
	NSString* _referringSourceApplication;
	NSString* _referringUrl;
	int _safariAutoSubscribeFeedCount;
	int _sessionStartMethod;
	NSMutableArray* _subscribedFeedIds;
	int _topicSubscriptionCount;
	NSString* _userActivityType;
	int _viewabilityState;
	NSMutableArray* _visibleViews;
	int _widgetArticleRank;
	NTPBWidgetEngagement* _widgetEngagement;
	int _widgetSection;
	int _widgetSectionArticleRank;
	BOOL _isMarketingNotificationEnabled;
	BOOL _isNewIssuesNotificationEnabled;
	BOOL _startedFromNotification;
	SCD_Struct_NT17 _has;

}

@property (assign,nonatomic) BOOL hasLastAppSessionTimestamp; 
@property (assign,nonatomic) long long lastAppSessionTimestamp;                        //@synthesize lastAppSessionTimestamp=_lastAppSessionTimestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * visibleViews;                            //@synthesize visibleViews=_visibleViews - In the implementation block
@property (assign,nonatomic) BOOL hasChannelSubscriptionCount; 
@property (assign,nonatomic) int channelSubscriptionCount;                             //@synthesize channelSubscriptionCount=_channelSubscriptionCount - In the implementation block
@property (assign,nonatomic) BOOL hasTopicSubscriptionCount; 
@property (assign,nonatomic) int topicSubscriptionCount;                               //@synthesize topicSubscriptionCount=_topicSubscriptionCount - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringSourceApplication; 
@property (nonatomic,retain) NSString * referringSourceApplication;                    //@synthesize referringSourceApplication=_referringSourceApplication - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringUrl; 
@property (nonatomic,retain) NSString * referringUrl;                                  //@synthesize referringUrl=_referringUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasUserActivityType; 
@property (nonatomic,retain) NSString * userActivityType;                              //@synthesize userActivityType=_userActivityType - In the implementation block
@property (nonatomic,retain) NSMutableArray * paidSubscriptionChannelIds;              //@synthesize paidSubscriptionChannelIds=_paidSubscriptionChannelIds - In the implementation block
@property (assign,nonatomic) BOOL hasStartedFromNotification; 
@property (assign,nonatomic) BOOL startedFromNotification;                             //@synthesize startedFromNotification=_startedFromNotification - In the implementation block
@property (nonatomic,readonly) BOOL hasNotificationId; 
@property (nonatomic,retain) NSString * notificationId;                                //@synthesize notificationId=_notificationId - In the implementation block
@property (nonatomic,readonly) BOOL hasNotificationSenderChannelId; 
@property (nonatomic,retain) NSString * notificationSenderChannelId;                   //@synthesize notificationSenderChannelId=_notificationSenderChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasNotificationSourceChannelId; 
@property (nonatomic,retain) NSString * notificationSourceChannelId;                   //@synthesize notificationSourceChannelId=_notificationSourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasNotitificationsEnabledChannelsCount; 
@property (assign,nonatomic) int notitificationsEnabledChannelsCount;                  //@synthesize notitificationsEnabledChannelsCount=_notitificationsEnabledChannelsCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationChannelIds;                  //@synthesize notificationChannelIds=_notificationChannelIds - In the implementation block
@property (nonatomic,readonly) BOOL hasNotificationArticleId; 
@property (nonatomic,retain) NSString * notificationArticleId;                         //@synthesize notificationArticleId=_notificationArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                                    //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;                                  //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                                    //@synthesize creativeId=_creativeId - In the implementation block
@property (assign,nonatomic) BOOL hasNotificationEnabledChannelsCount; 
@property (assign,nonatomic) int notificationEnabledChannelsCount;                     //@synthesize notificationEnabledChannelsCount=_notificationEnabledChannelsCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * subscribedFeedIds;                       //@synthesize subscribedFeedIds=_subscribedFeedIds - In the implementation block
@property (assign,nonatomic) BOOL hasSessionStartMethod; 
@property (assign,nonatomic) int sessionStartMethod;                                   //@synthesize sessionStartMethod=_sessionStartMethod - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetSection; 
@property (assign,nonatomic) int widgetSection;                                        //@synthesize widgetSection=_widgetSection - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetSectionArticleRank; 
@property (assign,nonatomic) int widgetSectionArticleRank;                             //@synthesize widgetSectionArticleRank=_widgetSectionArticleRank - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetArticleRank; 
@property (assign,nonatomic) int widgetArticleRank;                                    //@synthesize widgetArticleRank=_widgetArticleRank - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetEngagement; 
@property (nonatomic,retain) NTPBWidgetEngagement * widgetEngagement;                  //@synthesize widgetEngagement=_widgetEngagement - In the implementation block
@property (nonatomic,retain) NSMutableArray * autoSubscribedFeedIds;                   //@synthesize autoSubscribedFeedIds=_autoSubscribedFeedIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * groupableFeedIds;                        //@synthesize groupableFeedIds=_groupableFeedIds - In the implementation block
@property (assign,nonatomic) BOOL hasPortraitAutoSubscribeFeedCount; 
@property (assign,nonatomic) int portraitAutoSubscribeFeedCount;                       //@synthesize portraitAutoSubscribeFeedCount=_portraitAutoSubscribeFeedCount - In the implementation block
@property (assign,nonatomic) BOOL hasSafariAutoSubscribeFeedCount; 
@property (assign,nonatomic) int safariAutoSubscribeFeedCount;                         //@synthesize safariAutoSubscribeFeedCount=_safariAutoSubscribeFeedCount - In the implementation block
@property (assign,nonatomic) BOOL hasAppsAutoSubscribeFeedCount; 
@property (assign,nonatomic) int appsAutoSubscribeFeedCount;                           //@synthesize appsAutoSubscribeFeedCount=_appsAutoSubscribeFeedCount - In the implementation block
@property (assign,nonatomic) BOOL hasInternalAutoSubscribeFeedCount; 
@property (assign,nonatomic) int internalAutoSubscribeFeedCount;                       //@synthesize internalAutoSubscribeFeedCount=_internalAutoSubscribeFeedCount - In the implementation block
@property (assign,nonatomic) BOOL hasViewabilityState; 
@property (assign,nonatomic) int viewabilityState;                                     //@synthesize viewabilityState=_viewabilityState - In the implementation block
@property (assign,nonatomic) BOOL hasNotificationType; 
@property (assign,nonatomic) int notificationType;                                     //@synthesize notificationType=_notificationType - In the implementation block
@property (assign,nonatomic) BOOL hasIsNewIssuesNotificationEnabled; 
@property (assign,nonatomic) BOOL isNewIssuesNotificationEnabled;                      //@synthesize isNewIssuesNotificationEnabled=_isNewIssuesNotificationEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIsMarketingNotificationEnabled; 
@property (assign,nonatomic) BOOL isMarketingNotificationEnabled;                      //@synthesize isMarketingNotificationEnabled=_isMarketingNotificationEnabled - In the implementation block
+(Class)paidSubscriptionChannelIdsType;
+(Class)subscribedFeedIdsType;
+(Class)visibleViewsType;
+(Class)notificationChannelIdsType;
+(Class)autoSubscribedFeedIdsType;
+(Class)groupableFeedIdsType;
-(void)setHasWidgetSection:(BOOL)arg1 ;
-(BOOL)hasCampaignId;
-(BOOL)hasWidgetArticleRank;
-(NSString *)campaignId;
-(void)setWidgetEngagement:(NTPBWidgetEngagement *)arg1 ;
-(NSString *)notificationId;
-(NSString *)userActivityType;
-(int)widgetSectionArticleRank;
-(void)setWidgetSectionArticleRank:(int)arg1 ;
-(void)setHasWidgetArticleRank:(BOOL)arg1 ;
-(NSString *)referringSourceApplication;
-(BOOL)hasWidgetSectionArticleRank;
-(id)dictionaryRepresentation;
-(BOOL)hasWidgetEngagement;
-(BOOL)hasReferringSourceApplication;
-(NSMutableArray *)paidSubscriptionChannelIds;
-(void)setReferringSourceApplication:(NSString *)arg1 ;
-(void)setTopicSubscriptionCount:(int)arg1 ;
-(id)widgetSectionAsString:(int)arg1 ;
-(int)StringAsWidgetSection:(id)arg1 ;
-(NSString *)referringUrl;
-(BOOL)hasReferringUrl;
-(void)setSubscribedFeedIds:(NSMutableArray *)arg1 ;
-(int)portraitAutoSubscribeFeedCount;
-(void)setHasIsNewIssuesNotificationEnabled:(BOOL)arg1 ;
-(BOOL)hasNotificationId;
-(void)addAutoSubscribedFeedIds:(id)arg1 ;
-(void)setCampaignType:(NSString *)arg1 ;
-(BOOL)hasCampaignType;
-(void)setHasSafariAutoSubscribeFeedCount:(BOOL)arg1 ;
-(NSString *)campaignType;
-(id)notificationChannelIdsAtIndex:(unsigned long long)arg1 ;
-(void)setHasViewabilityState:(BOOL)arg1 ;
-(void)setAppsAutoSubscribeFeedCount:(int)arg1 ;
-(NSString *)notificationArticleId;
-(void)setHasWidgetSectionArticleRank:(BOOL)arg1 ;
-(BOOL)hasCreativeId;
-(BOOL)hasChannelSubscriptionCount;
-(void)setReferringUrl:(NSString *)arg1 ;
-(BOOL)hasWidgetSection;
-(NSMutableArray *)autoSubscribedFeedIds;
-(void)setNotitificationsEnabledChannelsCount:(int)arg1 ;
-(void)setCampaignId:(NSString *)arg1 ;
-(int)widgetSection;
-(void)setHasChannelSubscriptionCount:(BOOL)arg1 ;
-(NTPBWidgetEngagement *)widgetEngagement;
-(BOOL)hasUserActivityType;
-(int)widgetArticleRank;
-(void)setUserActivityType:(NSString *)arg1 ;
-(NSString *)creativeId;
-(void)setNotificationId:(NSString *)arg1 ;
-(void)setWidgetArticleRank:(int)arg1 ;
-(void)setWidgetSection:(int)arg1 ;
-(NSMutableArray *)visibleViews;
-(void)setCreativeId:(NSString *)arg1 ;
-(BOOL)hasInternalAutoSubscribeFeedCount;
-(NSString *)notificationSenderChannelId;
-(BOOL)startedFromNotification;
-(void)setNotificationArticleId:(NSString *)arg1 ;
-(void)addVisibleViews:(id)arg1 ;
-(BOOL)hasStartedFromNotification;
-(int)sessionStartMethod;
-(void)setNotificationSenderChannelId:(NSString *)arg1 ;
-(unsigned long long)paidSubscriptionChannelIdsCount;
-(void)setHasTopicSubscriptionCount:(BOOL)arg1 ;
-(void)clearAutoSubscribedFeedIds;
-(BOOL)hasTopicSubscriptionCount;
-(void)clearNotificationChannelIds;
-(void)clearGroupableFeedIds;
-(unsigned long long)subscribedFeedIdsCount;
-(void)setHasNotificationEnabledChannelsCount:(BOOL)arg1 ;
-(unsigned long long)visibleViewsCount;
-(unsigned long long)notificationChannelIdsCount;
-(BOOL)hasNotificationType;
-(NSMutableArray *)notificationChannelIds;
-(void)setHasIsMarketingNotificationEnabled:(BOOL)arg1 ;
-(void)setGroupableFeedIds:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setNotificationType:(int)arg1 ;
-(NSString *)notificationSourceChannelId;
-(void)setNotificationSourceChannelId:(NSString *)arg1 ;
-(NSMutableArray *)groupableFeedIds;
-(unsigned long long)groupableFeedIdsCount;
-(BOOL)hasViewabilityState;
-(void)setHasPortraitAutoSubscribeFeedCount:(BOOL)arg1 ;
-(void)setHasLastAppSessionTimestamp:(BOOL)arg1 ;
-(void)setHasStartedFromNotification:(BOOL)arg1 ;
-(void)clearPaidSubscriptionChannelIds;
-(void)setSessionStartMethod:(int)arg1 ;
-(void)setLastAppSessionTimestamp:(long long)arg1 ;
-(void)setStartedFromNotification:(BOOL)arg1 ;
-(void)setViewabilityState:(int)arg1 ;
-(BOOL)hasSafariAutoSubscribeFeedCount;
-(id)description;
-(void)setNotificationEnabledChannelsCount:(int)arg1 ;
-(void)setVisibleViews:(NSMutableArray *)arg1 ;
-(void)clearSubscribedFeedIds;
-(id)groupableFeedIdsAtIndex:(unsigned long long)arg1 ;
-(int)notificationEnabledChannelsCount;
-(BOOL)hasNotificationSenderChannelId;
-(BOOL)hasIsNewIssuesNotificationEnabled;
-(BOOL)hasIsMarketingNotificationEnabled;
-(void)setHasNotificationType:(BOOL)arg1 ;
-(BOOL)hasSessionStartMethod;
-(BOOL)hasNotificationSourceChannelId;
-(BOOL)hasNotificationArticleId;
-(void)setPortraitAutoSubscribeFeedCount:(int)arg1 ;
-(BOOL)isMarketingNotificationEnabled;
-(BOOL)isNewIssuesNotificationEnabled;
-(int)notitificationsEnabledChannelsCount;
-(id)visibleViewsAtIndex:(unsigned long long)arg1 ;
-(int)channelSubscriptionCount;
-(int)safariAutoSubscribeFeedCount;
-(void)setHasInternalAutoSubscribeFeedCount:(BOOL)arg1 ;
-(void)setInternalAutoSubscribeFeedCount:(int)arg1 ;
-(void)clearVisibleViews;
-(unsigned long long)hash;
-(void)setSafariAutoSubscribeFeedCount:(int)arg1 ;
-(void)addSubscribedFeedIds:(id)arg1 ;
-(id)subscribedFeedIdsAtIndex:(unsigned long long)arg1 ;
-(int)viewabilityState;
-(BOOL)readFrom:(id)arg1 ;
-(int)appsAutoSubscribeFeedCount;
-(void)addGroupableFeedIds:(id)arg1 ;
-(int)internalAutoSubscribeFeedCount;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasPortraitAutoSubscribeFeedCount;
-(NSMutableArray *)subscribedFeedIds;
-(void)setIsMarketingNotificationEnabled:(BOOL)arg1 ;
-(void)addNotificationChannelIds:(id)arg1 ;
-(int)notificationType;
-(void)setHasAppsAutoSubscribeFeedCount:(BOOL)arg1 ;
-(BOOL)hasNotitificationsEnabledChannelsCount;
-(void)setChannelSubscriptionCount:(int)arg1 ;
-(id)autoSubscribedFeedIdsAtIndex:(unsigned long long)arg1 ;
-(void)setPaidSubscriptionChannelIds:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasSessionStartMethod:(BOOL)arg1 ;
-(void)setNotificationChannelIds:(NSMutableArray *)arg1 ;
-(void)setIsNewIssuesNotificationEnabled:(BOOL)arg1 ;
-(long long)lastAppSessionTimestamp;
-(unsigned long long)autoSubscribedFeedIdsCount;
-(void)addPaidSubscriptionChannelIds:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasLastAppSessionTimestamp;
-(void)setAutoSubscribedFeedIds:(NSMutableArray *)arg1 ;
-(BOOL)hasAppsAutoSubscribeFeedCount;
-(BOOL)hasNotificationEnabledChannelsCount;
-(id)paidSubscriptionChannelIdsAtIndex:(unsigned long long)arg1 ;
-(void)setHasNotitificationsEnabledChannelsCount:(BOOL)arg1 ;
-(int)topicSubscriptionCount;
@end

