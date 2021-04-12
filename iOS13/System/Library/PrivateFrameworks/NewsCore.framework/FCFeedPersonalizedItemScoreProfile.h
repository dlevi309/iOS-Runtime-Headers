/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSDictionary;

@interface FCFeedPersonalizedItemScoreProfile : NSObject {

	double _featureCtr;
	double _paidNonpaidSubscriptionCtr;
	double _subscribedChannelCtr;
	double _autoSubscribeCtr;
	double _computedGlobalScoreCoefficient;
	double _userFeedbackScore;
	double _personalizationScore;
	double _firstPassPersonalizationScore;
	double _agedPersonalizationScore;
	double _diversifiedPersonalizationScore;
	NSDictionary* _cohortMemberships;
	NSDictionary* _articleCohortMemberships;

}

@property (assign,nonatomic) double featureCtr;                                    //@synthesize featureCtr=_featureCtr - In the implementation block
@property (assign,nonatomic) double paidNonpaidSubscriptionCtr;                    //@synthesize paidNonpaidSubscriptionCtr=_paidNonpaidSubscriptionCtr - In the implementation block
@property (assign,nonatomic) double subscribedChannelCtr;                          //@synthesize subscribedChannelCtr=_subscribedChannelCtr - In the implementation block
@property (assign,nonatomic) double autoSubscribeCtr;                              //@synthesize autoSubscribeCtr=_autoSubscribeCtr - In the implementation block
@property (assign,nonatomic) double computedGlobalScoreCoefficient;                //@synthesize computedGlobalScoreCoefficient=_computedGlobalScoreCoefficient - In the implementation block
@property (assign,nonatomic) double userFeedbackScore;                             //@synthesize userFeedbackScore=_userFeedbackScore - In the implementation block
@property (assign,nonatomic) double personalizationScore;                          //@synthesize personalizationScore=_personalizationScore - In the implementation block
@property (assign,nonatomic) double firstPassPersonalizationScore;                 //@synthesize firstPassPersonalizationScore=_firstPassPersonalizationScore - In the implementation block
@property (assign,nonatomic) double agedPersonalizationScore;                      //@synthesize agedPersonalizationScore=_agedPersonalizationScore - In the implementation block
@property (assign,nonatomic) double diversifiedPersonalizationScore;               //@synthesize diversifiedPersonalizationScore=_diversifiedPersonalizationScore - In the implementation block
@property (nonatomic,retain) NSDictionary * cohortMemberships;                     //@synthesize cohortMemberships=_cohortMemberships - In the implementation block
@property (nonatomic,retain) NSDictionary * articleCohortMemberships;              //@synthesize articleCohortMemberships=_articleCohortMemberships - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)personalizationScore;
-(void)setPersonalizationScore:(double)arg1 ;
-(double)agedPersonalizationScore;
-(void)setFeatureCtr:(double)arg1 ;
-(void)setPaidNonpaidSubscriptionCtr:(double)arg1 ;
-(void)setSubscribedChannelCtr:(double)arg1 ;
-(void)setAutoSubscribeCtr:(double)arg1 ;
-(void)setComputedGlobalScoreCoefficient:(double)arg1 ;
-(void)setUserFeedbackScore:(double)arg1 ;
-(void)setAgedPersonalizationScore:(double)arg1 ;
-(void)setFirstPassPersonalizationScore:(double)arg1 ;
-(void)setCohortMemberships:(NSDictionary *)arg1 ;
-(void)setArticleCohortMemberships:(NSDictionary *)arg1 ;
-(double)firstPassPersonalizationScore;
-(double)featureCtr;
-(double)paidNonpaidSubscriptionCtr;
-(double)subscribedChannelCtr;
-(double)autoSubscribeCtr;
-(double)computedGlobalScoreCoefficient;
-(double)userFeedbackScore;
-(double)diversifiedPersonalizationScore;
-(NSDictionary *)cohortMemberships;
-(NSDictionary *)articleCohortMemberships;
-(void)setDiversifiedPersonalizationScore:(double)arg1 ;
@end

