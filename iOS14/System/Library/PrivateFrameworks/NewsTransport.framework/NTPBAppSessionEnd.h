/*
* Generated on Thursday, January 14, 2021 at 2:23:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBAppSessionEnd : PBCodable <NSCopying> {

	long long _appSessionDuration;
	int _appsAutoSubscribeFeedCount;
	NSMutableArray* _autoSubscribedFeedIds;
	int _channelSubscriptionCount;
	NSMutableArray* _groupableFeedIds;
	int _internalAutoSubscribeFeedCount;
	NSMutableArray* _lastVisibleViews;
	NSMutableArray* _notificationChannelIds;
	int _notificationEnabledChannelsCount;
	int _notitificationsEnabledChannelsCount;
	NSMutableArray* _paidSubscriptionChannelIds;
	int _portraitAutoSubscribeFeedCount;
	int _safariAutoSubscribeFeedCount;
	int _sessionEndReason;
	NSMutableArray* _subscribedFeedIds;
	int _topicSubscriptionCount;
	BOOL _breakingNewsAvailableDuringSession;
	BOOL _breakingNewsDismissedDuringSession;
	BOOL _syncedOtherUserIdDuringSession;
	SCD_Struct_NT32 _has;

}

@property (assign,nonatomic) BOOL hasSessionEndReason; 
@property (assign,nonatomic) int sessionEndReason;                                     //@synthesize sessionEndReason=_sessionEndReason - In the implementation block
@property (nonatomic,retain) NSMutableArray * lastVisibleViews;                        //@synthesize lastVisibleViews=_lastVisibleViews - In the implementation block
@property (assign,nonatomic) BOOL hasChannelSubscriptionCount; 
@property (assign,nonatomic) int channelSubscriptionCount;                             //@synthesize channelSubscriptionCount=_channelSubscriptionCount - In the implementation block
@property (assign,nonatomic) BOOL hasTopicSubscriptionCount; 
@property (assign,nonatomic) int topicSubscriptionCount;                               //@synthesize topicSubscriptionCount=_topicSubscriptionCount - In the implementation block
@property (assign,nonatomic) BOOL hasAppSessionDuration; 
@property (assign,nonatomic) long long appSessionDuration;                             //@synthesize appSessionDuration=_appSessionDuration - In the implementation block
@property (nonatomic,retain) NSMutableArray * paidSubscriptionChannelIds;              //@synthesize paidSubscriptionChannelIds=_paidSubscriptionChannelIds - In the implementation block
@property (assign,nonatomic) BOOL hasNotitificationsEnabledChannelsCount; 
@property (assign,nonatomic) int notitificationsEnabledChannelsCount;                  //@synthesize notitificationsEnabledChannelsCount=_notitificationsEnabledChannelsCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationChannelIds;                  //@synthesize notificationChannelIds=_notificationChannelIds - In the implementation block
@property (assign,nonatomic) BOOL hasNotificationEnabledChannelsCount; 
@property (assign,nonatomic) int notificationEnabledChannelsCount;                     //@synthesize notificationEnabledChannelsCount=_notificationEnabledChannelsCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * subscribedFeedIds;                       //@synthesize subscribedFeedIds=_subscribedFeedIds - In the implementation block
@property (assign,nonatomic) BOOL hasBreakingNewsAvailableDuringSession; 
@property (assign,nonatomic) BOOL breakingNewsAvailableDuringSession;                  //@synthesize breakingNewsAvailableDuringSession=_breakingNewsAvailableDuringSession - In the implementation block
@property (assign,nonatomic) BOOL hasBreakingNewsDismissedDuringSession; 
@property (assign,nonatomic) BOOL breakingNewsDismissedDuringSession;                  //@synthesize breakingNewsDismissedDuringSession=_breakingNewsDismissedDuringSession - In the implementation block
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
@property (assign,nonatomic) BOOL hasSyncedOtherUserIdDuringSession; 
@property (assign,nonatomic) BOOL syncedOtherUserIdDuringSession;                      //@synthesize syncedOtherUserIdDuringSession=_syncedOtherUserIdDuringSession - In the implementation block
+(Class)paidSubscriptionChannelIdsType;
+(Class)subscribedFeedIdsType;
+(Class)lastVisibleViewsType;
+(Class)notificationChannelIdsType;
+(Class)autoSubscribedFeedIdsType;
+(Class)groupableFeedIdsType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)paidSubscriptionChannelIds;
-(void)setTopicSubscriptionCount:(int)arg1 ;
-(void)setSubscribedFeedIds:(NSMutableArray *)arg1 ;
-(int)portraitAutoSubscribeFeedCount;
-(void)addAutoSubscribedFeedIds:(id)arg1 ;
-(void)setHasSafariAutoSubscribeFeedCount:(BOOL)arg1 ;
-(id)notificationChannelIdsAtIndex:(unsigned long long)arg1 ;
-(int)sessionEndReason;
-(void)setAppsAutoSubscribeFeedCount:(int)arg1 ;
-(BOOL)hasChannelSubscriptionCount;
-(NSMutableArray *)autoSubscribedFeedIds;
-(void)setNotitificationsEnabledChannelsCount:(int)arg1 ;
-(void)setHasChannelSubscriptionCount:(BOOL)arg1 ;
-(BOOL)syncedOtherUserIdDuringSession;
-(BOOL)hasInternalAutoSubscribeFeedCount;
-(void)setHasBreakingNewsDismissedDuringSession:(BOOL)arg1 ;
-(unsigned long long)paidSubscriptionChannelIdsCount;
-(void)setHasTopicSubscriptionCount:(BOOL)arg1 ;
-(void)clearAutoSubscribedFeedIds;
-(BOOL)hasTopicSubscriptionCount;
-(void)clearNotificationChannelIds;
-(void)clearGroupableFeedIds;
-(unsigned long long)subscribedFeedIdsCount;
-(void)setHasNotificationEnabledChannelsCount:(BOOL)arg1 ;
-(unsigned long long)notificationChannelIdsCount;
-(NSMutableArray *)notificationChannelIds;
-(void)setGroupableFeedIds:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)groupableFeedIds;
-(unsigned long long)groupableFeedIdsCount;
-(id)sessionEndReasonAsString:(int)arg1 ;
-(BOOL)hasSessionEndReason;
-(void)setHasPortraitAutoSubscribeFeedCount:(BOOL)arg1 ;
-(void)setHasAppSessionDuration:(BOOL)arg1 ;
-(void)clearPaidSubscriptionChannelIds;
-(BOOL)hasSafariAutoSubscribeFeedCount;
-(BOOL)breakingNewsAvailableDuringSession;
-(id)description;
-(void)setNotificationEnabledChannelsCount:(int)arg1 ;
-(void)clearSubscribedFeedIds;
-(id)groupableFeedIdsAtIndex:(unsigned long long)arg1 ;
-(int)notificationEnabledChannelsCount;
-(void)setSyncedOtherUserIdDuringSession:(BOOL)arg1 ;
-(void)setHasSessionEndReason:(BOOL)arg1 ;
-(id)lastVisibleViewsAtIndex:(unsigned long long)arg1 ;
-(void)setBreakingNewsAvailableDuringSession:(BOOL)arg1 ;
-(void)clearLastVisibleViews;
-(void)setPortraitAutoSubscribeFeedCount:(int)arg1 ;
-(void)setHasBreakingNewsAvailableDuringSession:(BOOL)arg1 ;
-(int)notitificationsEnabledChannelsCount;
-(NSMutableArray *)lastVisibleViews;
-(int)channelSubscriptionCount;
-(BOOL)hasBreakingNewsDismissedDuringSession;
-(int)safariAutoSubscribeFeedCount;
-(BOOL)hasAppSessionDuration;
-(void)setHasInternalAutoSubscribeFeedCount:(BOOL)arg1 ;
-(void)setInternalAutoSubscribeFeedCount:(int)arg1 ;
-(void)setLastVisibleViews:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(void)setSafariAutoSubscribeFeedCount:(int)arg1 ;
-(void)addSubscribedFeedIds:(id)arg1 ;
-(id)subscribedFeedIdsAtIndex:(unsigned long long)arg1 ;
-(void)addLastVisibleViews:(id)arg1 ;
-(void)setAppSessionDuration:(long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasBreakingNewsAvailableDuringSession;
-(int)StringAsSessionEndReason:(id)arg1 ;
-(unsigned long long)lastVisibleViewsCount;
-(int)appsAutoSubscribeFeedCount;
-(void)addGroupableFeedIds:(id)arg1 ;
-(int)internalAutoSubscribeFeedCount;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasPortraitAutoSubscribeFeedCount;
-(NSMutableArray *)subscribedFeedIds;
-(void)addNotificationChannelIds:(id)arg1 ;
-(void)setHasAppsAutoSubscribeFeedCount:(BOOL)arg1 ;
-(BOOL)hasNotitificationsEnabledChannelsCount;
-(void)setChannelSubscriptionCount:(int)arg1 ;
-(id)autoSubscribedFeedIdsAtIndex:(unsigned long long)arg1 ;
-(void)setPaidSubscriptionChannelIds:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setNotificationChannelIds:(NSMutableArray *)arg1 ;
-(void)setHasSyncedOtherUserIdDuringSession:(BOOL)arg1 ;
-(long long)appSessionDuration;
-(unsigned long long)autoSubscribedFeedIdsCount;
-(void)addPaidSubscriptionChannelIds:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSessionEndReason:(int)arg1 ;
-(void)setAutoSubscribedFeedIds:(NSMutableArray *)arg1 ;
-(BOOL)breakingNewsDismissedDuringSession;
-(BOOL)hasSyncedOtherUserIdDuringSession;
-(BOOL)hasAppsAutoSubscribeFeedCount;
-(void)setBreakingNewsDismissedDuringSession:(BOOL)arg1 ;
-(BOOL)hasNotificationEnabledChannelsCount;
-(id)paidSubscriptionChannelIdsAtIndex:(unsigned long long)arg1 ;
-(void)setHasNotitificationsEnabledChannelsCount:(BOOL)arg1 ;
-(int)topicSubscriptionCount;
@end

