/*
* Generated on Thursday, January 14, 2021 at 2:23:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NTPBChannelData, NSMutableArray, NTPBIssueData, NTPBIssueViewData;

@interface NTPBAudioEngage : PBCodable <NSCopying> {

	double _agedPersonalizationScore;
	double _agedUserFeedbackScore;
	long long _audioDeltaTimePlayed;
	long long _audioTimePlayed;
	double _autoSubscribeCtr;
	double _computedGlobalScoreCoefficient;
	double _diversifiedPersonalizationScore;
	double _featureCtr;
	double _globalScore;
	double _paidNonpaidSubscriptionCtr;
	double _personalizationScore;
	double _subscribedChannelCtr;
	long long _trackDuration;
	double _userFeedbackScore;
	NSString* _articleId;
	NSData* _articleViewingSessionId;
	int _audioEngagementOriginationData;
	NTPBChannelData* _channelData;
	NSString* _engagementId;
	NSString* _feedId;
	int _feedType;
	NSMutableArray* _fractionalCohortMemberships;
	NSString* _groupFeedId;
	int _groupType;
	NSData* _groupViewExposureId;
	NTPBIssueData* _issueData;
	NTPBIssueViewData* _issueViewData;
	NSString* _language;
	int _listeningSource;
	int _playMethod;
	float _playbackSpeed;
	int _position;
	NSString* _sourceChannelId;
	int _trackVariant;
	int _userAction;
	BOOL _adSupportedChannel;
	BOOL _isPaidSubscriberToSourceChannel;
	SCD_Struct_NT27 _has;

}

@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                      //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                                //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasAdSupportedChannel; 
@property (assign,nonatomic) BOOL adSupportedChannel;                                   //@synthesize adSupportedChannel=_adSupportedChannel - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                             //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupFeedId; 
@property (nonatomic,retain) NSString * groupFeedId;                                    //@synthesize groupFeedId=_groupFeedId - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupViewExposureId; 
@property (nonatomic,retain) NSData * groupViewExposureId;                              //@synthesize groupViewExposureId=_groupViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                              //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                                         //@synthesize feedId=_feedId - In the implementation block
@property (assign,nonatomic) BOOL hasTrackDuration; 
@property (assign,nonatomic) long long trackDuration;                                   //@synthesize trackDuration=_trackDuration - In the implementation block
@property (assign,nonatomic) BOOL hasTrackVariant; 
@property (assign,nonatomic) int trackVariant;                                          //@synthesize trackVariant=_trackVariant - In the implementation block
@property (assign,nonatomic) BOOL hasAudioTimePlayed; 
@property (assign,nonatomic) long long audioTimePlayed;                                 //@synthesize audioTimePlayed=_audioTimePlayed - In the implementation block
@property (assign,nonatomic) BOOL hasAudioDeltaTimePlayed; 
@property (assign,nonatomic) long long audioDeltaTimePlayed;                            //@synthesize audioDeltaTimePlayed=_audioDeltaTimePlayed - In the implementation block
@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                            //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) BOOL hasPosition; 
@property (assign,nonatomic) int position;                                              //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) BOOL hasEngagementId; 
@property (nonatomic,retain) NSString * engagementId;                                   //@synthesize engagementId=_engagementId - In the implementation block
@property (assign,nonatomic) BOOL hasPlayMethod; 
@property (assign,nonatomic) int playMethod;                                            //@synthesize playMethod=_playMethod - In the implementation block
@property (assign,nonatomic) BOOL hasListeningSource; 
@property (assign,nonatomic) int listeningSource;                                       //@synthesize listeningSource=_listeningSource - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                          //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (nonatomic,retain) NSMutableArray * fractionalCohortMemberships;              //@synthesize fractionalCohortMemberships=_fractionalCohortMemberships - In the implementation block
@property (assign,nonatomic) BOOL hasAgedPersonalizationScore; 
@property (assign,nonatomic) double agedPersonalizationScore;                           //@synthesize agedPersonalizationScore=_agedPersonalizationScore - In the implementation block
@property (assign,nonatomic) BOOL hasAgedUserFeedbackScore; 
@property (assign,nonatomic) double agedUserFeedbackScore;                              //@synthesize agedUserFeedbackScore=_agedUserFeedbackScore - In the implementation block
@property (assign,nonatomic) BOOL hasAutoSubscribeCtr; 
@property (assign,nonatomic) double autoSubscribeCtr;                                   //@synthesize autoSubscribeCtr=_autoSubscribeCtr - In the implementation block
@property (assign,nonatomic) BOOL hasComputedGlobalScoreCoefficient; 
@property (assign,nonatomic) double computedGlobalScoreCoefficient;                     //@synthesize computedGlobalScoreCoefficient=_computedGlobalScoreCoefficient - In the implementation block
@property (assign,nonatomic) BOOL hasDiversifiedPersonalizationScore; 
@property (assign,nonatomic) double diversifiedPersonalizationScore;                    //@synthesize diversifiedPersonalizationScore=_diversifiedPersonalizationScore - In the implementation block
@property (assign,nonatomic) BOOL hasFeatureCtr; 
@property (assign,nonatomic) double featureCtr;                                         //@synthesize featureCtr=_featureCtr - In the implementation block
@property (assign,nonatomic) BOOL hasGlobalScore; 
@property (assign,nonatomic) double globalScore;                                        //@synthesize globalScore=_globalScore - In the implementation block
@property (assign,nonatomic) BOOL hasPaidNonpaidSubscriptionCtr; 
@property (assign,nonatomic) double paidNonpaidSubscriptionCtr;                         //@synthesize paidNonpaidSubscriptionCtr=_paidNonpaidSubscriptionCtr - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalizationScore; 
@property (assign,nonatomic) double personalizationScore;                               //@synthesize personalizationScore=_personalizationScore - In the implementation block
@property (assign,nonatomic) BOOL hasSubscribedChannelCtr; 
@property (assign,nonatomic) double subscribedChannelCtr;                               //@synthesize subscribedChannelCtr=_subscribedChannelCtr - In the implementation block
@property (assign,nonatomic) BOOL hasUserFeedbackScore; 
@property (assign,nonatomic) double userFeedbackScore;                                  //@synthesize userFeedbackScore=_userFeedbackScore - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueData; 
@property (nonatomic,retain) NTPBIssueData * issueData;                                 //@synthesize issueData=_issueData - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueViewData; 
@property (nonatomic,retain) NTPBIssueViewData * issueViewData;                         //@synthesize issueViewData=_issueViewData - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelData; 
@property (nonatomic,retain) NTPBChannelData * channelData;                             //@synthesize channelData=_channelData - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                                       //@synthesize language=_language - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriberToSourceChannel; 
@property (assign,nonatomic) BOOL isPaidSubscriberToSourceChannel;                      //@synthesize isPaidSubscriberToSourceChannel=_isPaidSubscriberToSourceChannel - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackSpeed; 
@property (assign,nonatomic) float playbackSpeed;                                       //@synthesize playbackSpeed=_playbackSpeed - In the implementation block
@property (assign,nonatomic) BOOL hasAudioEngagementOriginationData; 
@property (assign,nonatomic) int audioEngagementOriginationData;                        //@synthesize audioEngagementOriginationData=_audioEngagementOriginationData - In the implementation block
+(Class)fractionalCohortMembershipType;
-(id)groupTypeAsString:(int)arg1 ;
-(void)setChannelData:(NTPBChannelData *)arg1 ;
-(unsigned long long)fractionalCohortMembershipsCount;
-(void)setPaidNonpaidSubscriptionCtr:(double)arg1 ;
-(void)setPersonalizationScore:(double)arg1 ;
-(NSData *)groupViewExposureId;
-(void)setSubscribedChannelCtr:(double)arg1 ;
-(BOOL)hasPosition;
-(BOOL)hasUserFeedbackScore;
-(void)setAgedPersonalizationScore:(double)arg1 ;
-(void)setHasFeatureCtr:(BOOL)arg1 ;
-(NTPBIssueData *)issueData;
-(void)clearFractionalCohortMemberships;
-(BOOL)hasGroupViewExposureId;
-(double)personalizationScore;
-(BOOL)hasGlobalScore;
-(BOOL)isPaidSubscriberToSourceChannel;
-(BOOL)hasGroupFeedId;
-(double)diversifiedPersonalizationScore;
-(void)setHasAdSupportedChannel:(BOOL)arg1 ;
-(void)setGroupFeedId:(NSString *)arg1 ;
-(void)setUserFeedbackScore:(double)arg1 ;
-(void)setGroupViewExposureId:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasSourceChannelId;
-(void)setGroupType:(int)arg1 ;
-(void)setFeatureCtr:(double)arg1 ;
-(double)featureCtr;
-(double)autoSubscribeCtr;
-(void)setAutoSubscribeCtr:(double)arg1 ;
-(double)paidNonpaidSubscriptionCtr;
-(void)setFeedId:(NSString *)arg1 ;
-(BOOL)hasArticleViewingSessionId;
-(int)feedType;
-(int)position;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(NSString *)sourceChannelId;
-(void)setHasGroupType:(BOOL)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasGroupType;
-(BOOL)hasAdSupportedChannel;
-(int)StringAsGroupType:(id)arg1 ;
-(NSString *)groupFeedId;
-(void)addFractionalCohortMembership:(id)arg1 ;
-(void)setAdSupportedChannel:(BOOL)arg1 ;
-(NSData *)articleViewingSessionId;
-(BOOL)adSupportedChannel;
-(double)globalScore;
-(void)setHasComputedGlobalScoreCoefficient:(BOOL)arg1 ;
-(BOOL)hasPaidNonpaidSubscriptionCtr;
-(BOOL)hasLanguage;
-(BOOL)hasComputedGlobalScoreCoefficient;
-(void)setHasAutoSubscribeCtr:(BOOL)arg1 ;
-(void)setHasUserFeedbackScore:(BOOL)arg1 ;
-(void)setDiversifiedPersonalizationScore:(double)arg1 ;
-(void)setComputedGlobalScoreCoefficient:(double)arg1 ;
-(BOOL)hasSubscribedChannelCtr;
-(void)setAgedUserFeedbackScore:(double)arg1 ;
-(double)subscribedChannelCtr;
-(BOOL)hasArticleId;
-(id)feedTypeAsString:(int)arg1 ;
-(void)setFeedType:(int)arg1 ;
-(void)setHasAgedUserFeedbackScore:(BOOL)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(long long)trackDuration;
-(BOOL)hasPersonalizationScore;
-(float)playbackSpeed;
-(void)setPlaybackSpeed:(float)arg1 ;
-(void)setHasSubscribedChannelCtr:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDiversifiedPersonalizationScore;
-(BOOL)hasIsPaidSubscriberToSourceChannel;
-(double)agedPersonalizationScore;
-(int)playMethod;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(NTPBIssueViewData *)issueViewData;
-(void)setArticleId:(NSString *)arg1 ;
-(double)userFeedbackScore;
-(id)description;
-(BOOL)hasFeedId;
-(void)setGlobalScore:(double)arg1 ;
-(void)setEngagementId:(NSString *)arg1 ;
-(void)setTrackDuration:(long long)arg1 ;
-(void)setHasTrackDuration:(BOOL)arg1 ;
-(int)trackVariant;
-(NSString *)articleId;
-(int)userAction;
-(void)setHasPersonalizationScore:(BOOL)arg1 ;
-(BOOL)hasTrackDuration;
-(void)setTrackVariant:(int)arg1 ;
-(void)setHasTrackVariant:(BOOL)arg1 ;
-(BOOL)hasTrackVariant;
-(id)trackVariantAsString:(int)arg1 ;
-(int)StringAsTrackVariant:(id)arg1 ;
-(void)setAudioTimePlayed:(long long)arg1 ;
-(void)setHasAudioTimePlayed:(BOOL)arg1 ;
-(BOOL)hasAudioTimePlayed;
-(void)setAudioDeltaTimePlayed:(long long)arg1 ;
-(void)setHasAudioDeltaTimePlayed:(BOOL)arg1 ;
-(BOOL)hasAudioDeltaTimePlayed;
-(void)setHasPosition:(BOOL)arg1 ;
-(BOOL)hasEngagementId;
-(void)setPlayMethod:(int)arg1 ;
-(void)setHasPlayMethod:(BOOL)arg1 ;
-(BOOL)hasPlayMethod;
-(int)listeningSource;
-(void)setListeningSource:(int)arg1 ;
-(void)setHasListeningSource:(BOOL)arg1 ;
-(BOOL)hasListeningSource;
-(int)audioEngagementOriginationData;
-(void)setAudioEngagementOriginationData:(int)arg1 ;
-(void)setHasAudioEngagementOriginationData:(BOOL)arg1 ;
-(BOOL)hasAudioEngagementOriginationData;
-(long long)audioTimePlayed;
-(long long)audioDeltaTimePlayed;
-(NSString *)engagementId;
-(int)StringAsFeedType:(id)arg1 ;
-(BOOL)hasChannelData;
-(BOOL)hasUserAction;
-(void)setHasFeedType:(BOOL)arg1 ;
-(void)setHasPaidNonpaidSubscriptionCtr:(BOOL)arg1 ;
-(void)setPosition:(int)arg1 ;
-(int)groupType;
-(BOOL)hasIssueData;
-(unsigned long long)hash;
-(double)computedGlobalScoreCoefficient;
-(void)setHasGlobalScore:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasAgedPersonalizationScore;
-(NSString *)feedId;
-(void)setHasIsPaidSubscriberToSourceChannel:(BOOL)arg1 ;
-(id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAutoSubscribeCtr;
-(void)setUserAction:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setIssueViewData:(NTPBIssueViewData *)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(BOOL)hasIssueViewData;
-(NSMutableArray *)fractionalCohortMemberships;
-(void)setFractionalCohortMemberships:(NSMutableArray *)arg1 ;
-(NTPBChannelData *)channelData;
-(double)agedUserFeedbackScore;
-(void)setIsPaidSubscriberToSourceChannel:(BOOL)arg1 ;
-(BOOL)hasAgedUserFeedbackScore;
-(BOOL)hasFeedType;
-(BOOL)hasPlaybackSpeed;
-(void)setHasPlaybackSpeed:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(void)setHasDiversifiedPersonalizationScore:(BOOL)arg1 ;
-(BOOL)hasFeatureCtr;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasAgedPersonalizationScore:(BOOL)arg1 ;
@end

