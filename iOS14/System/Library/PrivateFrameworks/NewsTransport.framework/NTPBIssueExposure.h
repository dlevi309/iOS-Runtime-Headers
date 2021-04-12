/*
* Generated on Thursday, January 14, 2021 at 2:23:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_NT8 _has;

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
-(id)groupTypeAsString:(int)arg1 ;
-(void)setChannelData:(NTPBChannelData *)arg1 ;
-(unsigned long long)fractionalCohortMembershipsCount;
-(BOOL)hasParentFeedType;
-(void)setPaidNonpaidSubscriptionCtr:(double)arg1 ;
-(void)setPersonalizationScore:(double)arg1 ;
-(int)displayRank;
-(void)setSubscribedChannelCtr:(double)arg1 ;
-(void)setHasParentFeedType:(BOOL)arg1 ;
-(BOOL)hasUserFeedbackScore;
-(int)parentFeedType;
-(void)setAgedPersonalizationScore:(double)arg1 ;
-(void)setHasFeatureCtr:(BOOL)arg1 ;
-(BOOL)hasIssueExposureData;
-(NTPBIssueData *)issueData;
-(void)clearFractionalCohortMemberships;
-(double)personalizationScore;
-(BOOL)hasGlobalScore;
-(BOOL)isPaidSubscriberToSourceChannel;
-(double)diversifiedPersonalizationScore;
-(void)setHasAdSupportedChannel:(BOOL)arg1 ;
-(void)setUserFeedbackScore:(double)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasSourceChannelId;
-(void)setGroupType:(int)arg1 ;
-(void)setFeatureCtr:(double)arg1 ;
-(double)featureCtr;
-(double)autoSubscribeCtr;
-(void)setAutoSubscribeCtr:(double)arg1 ;
-(double)paidNonpaidSubscriptionCtr;
-(NSString *)sourceChannelId;
-(void)setHasGroupType:(BOOL)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasGroupType;
-(BOOL)hasAdSupportedChannel;
-(int)StringAsGroupType:(id)arg1 ;
-(void)addFractionalCohortMembership:(id)arg1 ;
-(void)setAdSupportedChannel:(BOOL)arg1 ;
-(BOOL)adSupportedChannel;
-(double)globalScore;
-(id)parentFeedTypeAsString:(int)arg1 ;
-(void)setHasComputedGlobalScoreCoefficient:(BOOL)arg1 ;
-(BOOL)hasPaidNonpaidSubscriptionCtr;
-(BOOL)hasLanguage;
-(BOOL)hasComputedGlobalScoreCoefficient;
-(void)setHasAutoSubscribeCtr:(BOOL)arg1 ;
-(void)setDisplayRank:(int)arg1 ;
-(void)setHasUserFeedbackScore:(BOOL)arg1 ;
-(void)setDiversifiedPersonalizationScore:(double)arg1 ;
-(void)setComputedGlobalScoreCoefficient:(double)arg1 ;
-(BOOL)hasSubscribedChannelCtr;
-(void)setAgedUserFeedbackScore:(double)arg1 ;
-(double)subscribedChannelCtr;
-(void)setHasAgedUserFeedbackScore:(BOOL)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(BOOL)hasPersonalizationScore;
-(void)setHasSubscribedChannelCtr:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)surfacedByChannelId;
-(BOOL)hasDiversifiedPersonalizationScore;
-(BOOL)hasIsPaidSubscriberToSourceChannel;
-(double)agedPersonalizationScore;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(void)setSurfacedByChannelId:(NSString *)arg1 ;
-(double)userFeedbackScore;
-(id)description;
-(void)setGlobalScore:(double)arg1 ;
-(void)setHasDisplayRank:(BOOL)arg1 ;
-(void)setHasPersonalizationScore:(BOOL)arg1 ;
-(BOOL)hasDisplayRank;
-(BOOL)hasChannelData;
-(NTPBIssueExposureData *)issueExposureData;
-(BOOL)hasSurfacedByChannelId;
-(void)setHasPaidNonpaidSubscriptionCtr:(BOOL)arg1 ;
-(void)setParentFeedType:(int)arg1 ;
-(int)groupType;
-(BOOL)hasIssueData;
-(unsigned long long)hash;
-(double)computedGlobalScoreCoefficient;
-(void)setHasGlobalScore:(BOOL)arg1 ;
-(int)StringAsParentFeedType:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setParentFeedId:(NSString *)arg1 ;
-(BOOL)hasAgedPersonalizationScore;
-(BOOL)hasParentFeedId;
-(void)setHasIsPaidSubscriberToSourceChannel:(BOOL)arg1 ;
-(id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAutoSubscribeCtr;
-(void)writeTo:(id)arg1 ;
-(NSString *)parentFeedId;
-(NSMutableArray *)fractionalCohortMemberships;
-(void)setFractionalCohortMemberships:(NSMutableArray *)arg1 ;
-(NTPBChannelData *)channelData;
-(double)agedUserFeedbackScore;
-(void)setIsPaidSubscriberToSourceChannel:(BOOL)arg1 ;
-(BOOL)hasAgedUserFeedbackScore;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(void)setIssueExposureData:(NTPBIssueExposureData *)arg1 ;
-(void)setHasDiversifiedPersonalizationScore:(BOOL)arg1 ;
-(BOOL)hasFeatureCtr;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasAgedPersonalizationScore:(BOOL)arg1 ;
@end

