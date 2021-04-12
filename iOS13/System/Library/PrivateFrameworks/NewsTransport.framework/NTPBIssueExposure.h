/*
* Generated on Monday, March 1, 2021 at 2:32:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBChannelData, NSMutableArray, NTPBIssueData, NTPBIssueExposureData, NSString;

@interface NTPBIssueExposure : PBCodable <NSCopying> {

	double _agedPersonalizationScore;
	double _agedUserFeedbackScore;
	double _autoSubscribeCtr;
	double _computedGlobalScoreCoefficient;
	double _diversifiedPersonalizationScore;
	double _featureCtr;
	double _globalScore;
	double _paidNonpaidSubscriptionCtr;
	double _personalizationScore;
	double _subscribedChannelCtr;
	double _userFeedbackScore;
	NTPBChannelData* _channelData;
	int _displayRank;
	NSMutableArray* _fractionalCohortMemberships;
	int _groupType;
	NTPBIssueData* _issueData;
	NTPBIssueExposureData* _issueExposureData;
	NSString* _language;
	NSString* _parentFeedId;
	int _parentFeedType;
	NSString* _sourceChannelId;
	NSString* _surfacedByChannelId;
	BOOL _adSupportedChannel;
	BOOL _isPaidSubscriberToSourceChannel;
	SCD_Struct_NT7 _has;

}

@property (nonatomic,readonly) BOOL hasIssueData; 
@property (nonatomic,retain) NTPBIssueData * issueData;                                 //@synthesize issueData=_issueData - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueExposureData; 
@property (nonatomic,retain) NTPBIssueExposureData * issueExposureData;                 //@synthesize issueExposureData=_issueExposureData - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelData; 
@property (nonatomic,retain) NTPBChannelData * channelData;                             //@synthesize channelData=_channelData - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                                //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasParentFeedType; 
@property (assign,nonatomic) int parentFeedType;                                        //@synthesize parentFeedType=_parentFeedType - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                             //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,readonly) BOOL hasParentFeedId; 
@property (nonatomic,retain) NSString * parentFeedId;                                   //@synthesize parentFeedId=_parentFeedId - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayRank; 
@property (assign,nonatomic) int displayRank;                                           //@synthesize displayRank=_displayRank - In the implementation block
@property (assign,nonatomic) BOOL hasAdSupportedChannel; 
@property (assign,nonatomic) BOOL adSupportedChannel;                                   //@synthesize adSupportedChannel=_adSupportedChannel - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriberToSourceChannel; 
@property (assign,nonatomic) BOOL isPaidSubscriberToSourceChannel;                      //@synthesize isPaidSubscriberToSourceChannel=_isPaidSubscriberToSourceChannel - In the implementation block
@property (nonatomic,retain) NSMutableArray * fractionalCohortMemberships;              //@synthesize fractionalCohortMemberships=_fractionalCohortMemberships - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalizationScore; 
@property (assign,nonatomic) double personalizationScore;                               //@synthesize personalizationScore=_personalizationScore - In the implementation block
@property (assign,nonatomic) BOOL hasFeatureCtr; 
@property (assign,nonatomic) double featureCtr;                                         //@synthesize featureCtr=_featureCtr - In the implementation block
@property (assign,nonatomic) BOOL hasPaidNonpaidSubscriptionCtr; 
@property (assign,nonatomic) double paidNonpaidSubscriptionCtr;                         //@synthesize paidNonpaidSubscriptionCtr=_paidNonpaidSubscriptionCtr - In the implementation block
@property (assign,nonatomic) BOOL hasAutoSubscribeCtr; 
@property (assign,nonatomic) double autoSubscribeCtr;                                   //@synthesize autoSubscribeCtr=_autoSubscribeCtr - In the implementation block
@property (assign,nonatomic) BOOL hasComputedGlobalScoreCoefficient; 
@property (assign,nonatomic) double computedGlobalScoreCoefficient;                     //@synthesize computedGlobalScoreCoefficient=_computedGlobalScoreCoefficient - In the implementation block
@property (assign,nonatomic) BOOL hasGlobalScore; 
@property (assign,nonatomic) double globalScore;                                        //@synthesize globalScore=_globalScore - In the implementation block
@property (assign,nonatomic) BOOL hasUserFeedbackScore; 
@property (assign,nonatomic) double userFeedbackScore;                                  //@synthesize userFeedbackScore=_userFeedbackScore - In the implementation block
@property (assign,nonatomic) BOOL hasAgedUserFeedbackScore; 
@property (assign,nonatomic) double agedUserFeedbackScore;                              //@synthesize agedUserFeedbackScore=_agedUserFeedbackScore - In the implementation block
@property (assign,nonatomic) BOOL hasAgedPersonalizationScore; 
@property (assign,nonatomic) double agedPersonalizationScore;                           //@synthesize agedPersonalizationScore=_agedPersonalizationScore - In the implementation block
@property (assign,nonatomic) BOOL hasDiversifiedPersonalizationScore; 
@property (assign,nonatomic) double diversifiedPersonalizationScore;                    //@synthesize diversifiedPersonalizationScore=_diversifiedPersonalizationScore - In the implementation block
@property (assign,nonatomic) BOOL hasSubscribedChannelCtr; 
@property (assign,nonatomic) double subscribedChannelCtr;                               //@synthesize subscribedChannelCtr=_subscribedChannelCtr - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                                       //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedByChannelId; 
@property (nonatomic,retain) NSString * surfacedByChannelId;                            //@synthesize surfacedByChannelId=_surfacedByChannelId - In the implementation block
+(Class)fractionalCohortMembershipType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(BOOL)hasLanguage;
-(double)personalizationScore;
-(void)setPersonalizationScore:(double)arg1 ;
-(int)groupType;
-(void)setGroupType:(int)arg1 ;
-(double)agedPersonalizationScore;
-(void)setFeatureCtr:(double)arg1 ;
-(void)setPaidNonpaidSubscriptionCtr:(double)arg1 ;
-(void)setSubscribedChannelCtr:(double)arg1 ;
-(void)setAutoSubscribeCtr:(double)arg1 ;
-(void)setComputedGlobalScoreCoefficient:(double)arg1 ;
-(void)setUserFeedbackScore:(double)arg1 ;
-(void)setAgedPersonalizationScore:(double)arg1 ;
-(double)globalScore;
-(double)featureCtr;
-(double)paidNonpaidSubscriptionCtr;
-(double)subscribedChannelCtr;
-(double)autoSubscribeCtr;
-(double)computedGlobalScoreCoefficient;
-(double)userFeedbackScore;
-(double)diversifiedPersonalizationScore;
-(void)setDiversifiedPersonalizationScore:(double)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasSourceChannelId;
-(NSString *)sourceChannelId;
-(void)setHasGroupType:(BOOL)arg1 ;
-(BOOL)hasGroupType;
-(id)groupTypeAsString:(int)arg1 ;
-(int)StringAsGroupType:(id)arg1 ;
-(void)setDisplayRank:(int)arg1 ;
-(void)setHasDisplayRank:(BOOL)arg1 ;
-(BOOL)hasDisplayRank;
-(int)displayRank;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(void)setIssueExposureData:(NTPBIssueExposureData *)arg1 ;
-(void)setParentFeedId:(NSString *)arg1 ;
-(BOOL)hasIssueData;
-(BOOL)hasIssueExposureData;
-(int)parentFeedType;
-(void)setParentFeedType:(int)arg1 ;
-(void)setHasParentFeedType:(BOOL)arg1 ;
-(BOOL)hasParentFeedType;
-(id)parentFeedTypeAsString:(int)arg1 ;
-(int)StringAsParentFeedType:(id)arg1 ;
-(BOOL)hasParentFeedId;
-(void)setAdSupportedChannel:(BOOL)arg1 ;
-(void)setHasAdSupportedChannel:(BOOL)arg1 ;
-(BOOL)hasAdSupportedChannel;
-(NTPBIssueData *)issueData;
-(NTPBIssueExposureData *)issueExposureData;
-(NSString *)parentFeedId;
-(BOOL)adSupportedChannel;
-(void)addFractionalCohortMembership:(id)arg1 ;
-(void)setSurfacedByChannelId:(NSString *)arg1 ;
-(BOOL)hasSurfacedByChannelId;
-(void)clearFractionalCohortMemberships;
-(unsigned long long)fractionalCohortMembershipsCount;
-(id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1 ;
-(NSString *)surfacedByChannelId;
-(NSMutableArray *)fractionalCohortMemberships;
-(void)setFractionalCohortMemberships:(NSMutableArray *)arg1 ;
-(void)setChannelData:(NTPBChannelData *)arg1 ;
-(void)setIsPaidSubscriberToSourceChannel:(BOOL)arg1 ;
-(void)setHasIsPaidSubscriberToSourceChannel:(BOOL)arg1 ;
-(BOOL)hasIsPaidSubscriberToSourceChannel;
-(BOOL)hasChannelData;
-(BOOL)isPaidSubscriberToSourceChannel;
-(NTPBChannelData *)channelData;
-(void)setHasPersonalizationScore:(BOOL)arg1 ;
-(BOOL)hasPersonalizationScore;
-(void)setHasFeatureCtr:(BOOL)arg1 ;
-(BOOL)hasFeatureCtr;
-(void)setHasPaidNonpaidSubscriptionCtr:(BOOL)arg1 ;
-(BOOL)hasPaidNonpaidSubscriptionCtr;
-(void)setHasAutoSubscribeCtr:(BOOL)arg1 ;
-(BOOL)hasAutoSubscribeCtr;
-(void)setHasComputedGlobalScoreCoefficient:(BOOL)arg1 ;
-(BOOL)hasComputedGlobalScoreCoefficient;
-(void)setGlobalScore:(double)arg1 ;
-(void)setHasGlobalScore:(BOOL)arg1 ;
-(BOOL)hasGlobalScore;
-(void)setHasUserFeedbackScore:(BOOL)arg1 ;
-(BOOL)hasUserFeedbackScore;
-(void)setAgedUserFeedbackScore:(double)arg1 ;
-(void)setHasAgedUserFeedbackScore:(BOOL)arg1 ;
-(BOOL)hasAgedUserFeedbackScore;
-(void)setHasAgedPersonalizationScore:(BOOL)arg1 ;
-(BOOL)hasAgedPersonalizationScore;
-(void)setHasDiversifiedPersonalizationScore:(BOOL)arg1 ;
-(BOOL)hasDiversifiedPersonalizationScore;
-(void)setHasSubscribedChannelCtr:(BOOL)arg1 ;
-(BOOL)hasSubscribedChannelCtr;
-(double)agedUserFeedbackScore;
@end

