/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, FCSubscriptionButtonConfiguration, FCPaywallVisualSpecConfiguration, FCPaywallTopOffsetConfiguration;

@interface FCPaywallConfiguration : NSObject <NSCopying> {

	BOOL _externalOverridesEnabled;
	unsigned long long _paywallType;
	NSString* _title;
	NSString* _descriptionTrial;
	NSString* _descriptionNonTrial;
	NSString* _learnMoreTitle;
	NSURL* _learnMoreURL;
	NSString* _offersLinkTitle;
	NSURL* _offersLinkURL;
	unsigned long long _offersLinkTargetType;
	FCSubscriptionButtonConfiguration* _subscriptionButtonConfig;
	FCPaywallVisualSpecConfiguration* _visualSpecConfig;
	FCPaywallTopOffsetConfiguration* _paywallTopOffsetConfig;

}

@property (assign,nonatomic) unsigned long long paywallType;                                            //@synthesize paywallType=_paywallType - In the implementation block
@property (nonatomic,copy) NSString * title;                                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * learnMoreTitle;                                                   //@synthesize learnMoreTitle=_learnMoreTitle - In the implementation block
@property (nonatomic,copy) NSURL * learnMoreURL;                                                        //@synthesize learnMoreURL=_learnMoreURL - In the implementation block
@property (nonatomic,copy) NSString * offersLinkTitle;                                                  //@synthesize offersLinkTitle=_offersLinkTitle - In the implementation block
@property (nonatomic,copy) NSURL * offersLinkURL;                                                       //@synthesize offersLinkURL=_offersLinkURL - In the implementation block
@property (assign,nonatomic) unsigned long long offersLinkTargetType;                                   //@synthesize offersLinkTargetType=_offersLinkTargetType - In the implementation block
@property (nonatomic,retain) FCPaywallVisualSpecConfiguration * visualSpecConfig;                       //@synthesize visualSpecConfig=_visualSpecConfig - In the implementation block
@property (nonatomic,retain) FCSubscriptionButtonConfiguration * subscriptionButtonConfig;              //@synthesize subscriptionButtonConfig=_subscriptionButtonConfig - In the implementation block
@property (nonatomic,copy) NSString * descriptionTrial;                                                 //@synthesize descriptionTrial=_descriptionTrial - In the implementation block
@property (nonatomic,copy) NSString * descriptionNonTrial;                                              //@synthesize descriptionNonTrial=_descriptionNonTrial - In the implementation block
@property (nonatomic,readonly) BOOL externalOverridesEnabled;                                           //@synthesize externalOverridesEnabled=_externalOverridesEnabled - In the implementation block
@property (nonatomic,readonly) FCPaywallTopOffsetConfiguration * paywallTopOffsetConfig;                //@synthesize paywallTopOffsetConfig=_paywallTopOffsetConfig - In the implementation block
+(id)defaultPaywallTitle;
+(id)defaultPaywallDescription;
+(id)defaultPaywallTopOffsetConfiguration;
+(id)defaultSmallPaywallTitle;
+(id)defaultDeferredPaywallTopOffsetConfiguration;
+(id)defaultAudioPaywallTitle;
+(id)defaultAudioPaywallDescription;
+(id)defaultArticleHardPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultArticleSharedHardPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultArticleDeferredHardPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultArticleSharedDeferredHardPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultArticleSoftPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultArticleSharedSoftPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultChannelSoftPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultMagazineFeedSoftPaywallSmallPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultMagazineFeedSoftPaywallMediumPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultMagazineFeedSoftPaywallLargePaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultMagazineFeedVideoSoftPaywallSmallPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultMagazineFeedVideoSoftPaywallLargePaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultPDFHardPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultAudioArticleHardPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultAudioArticleSharedHardPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultAudioArticleDeferredHardPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultAudioArticleSharedDeferredHardPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultAudioArticleSoftPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultAudioArticleSharedSoftPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultAudioFeedSoftPaywallSmallPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultAudioFeedSoftPaywallLargePaywallWithLandingPageArticleID:(id)arg1 ;
-(id)initWithConfigDictionary:(id)arg1 ;
-(void)setOffersLinkTargetType:(unsigned long long)arg1 ;
-(NSString *)descriptionNonTrial;
-(id)init;
-(void)setOffersLinkURL:(NSURL *)arg1 ;
-(NSString *)descriptionTrial;
-(FCSubscriptionButtonConfiguration *)subscriptionButtonConfig;
-(void)setTitle:(NSString *)arg1 ;
-(FCPaywallTopOffsetConfiguration *)paywallTopOffsetConfig;
-(BOOL)externalOverridesEnabled;
-(void)setDescriptionNonTrial:(NSString *)arg1 ;
-(unsigned long long)paywallType;
-(FCPaywallVisualSpecConfiguration *)visualSpecConfig;
-(void)setSubscriptionButtonConfig:(FCSubscriptionButtonConfiguration *)arg1 ;
-(void)setLearnMoreURL:(NSURL *)arg1 ;
-(unsigned long long)offersLinkTargetType;
-(NSString *)offersLinkTitle;
-(void)setVisualSpecConfig:(FCPaywallVisualSpecConfiguration *)arg1 ;
-(unsigned long long)hash;
-(void)setOffersLinkTitle:(NSString *)arg1 ;
-(NSURL *)learnMoreURL;
-(void)setLearnMoreTitle:(NSString *)arg1 ;
-(void)setDescriptionTrial:(NSString *)arg1 ;
-(id)initWithPaywallType:(unsigned long long)arg1 title:(id)arg2 descriptionTrial:(id)arg3 descriptionNonTrial:(id)arg4 learnMoreTitle:(id)arg5 learnMoreURL:(id)arg6 offersLinkTitle:(id)arg7 offersLinkURL:(id)arg8 offersLinkTargetType:(unsigned long long)arg9 externalOverridesEnabled:(BOOL)arg10 subscriptionButtonConfig:(id)arg11 visualSpecConfig:(id)arg12 paywallTopOffsetConfig:(id)arg13 ;
-(NSString *)learnMoreTitle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPaywallType:(unsigned long long)arg1 ;
-(NSURL *)offersLinkURL;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

