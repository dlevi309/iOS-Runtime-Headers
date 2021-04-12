/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, FCSubscriptionButtonConfiguration, FCPaywallVisualSpecConfiguration, FCPaywallTopOffsetConfiguration;

@interface FCPaywallConfiguration : NSObject <NSCopying> {

	unsigned long long _paywallType;
	NSString* _title;
	NSString* _descriptionTrial;
	NSString* _descriptionNonTrial;
	NSString* _learnMoreTitle;
	NSURL* _learnMoreURL;
	FCSubscriptionButtonConfiguration* _subscriptionButtonConfig;
	FCPaywallVisualSpecConfiguration* _visualSpecConfig;
	FCPaywallTopOffsetConfiguration* _paywallTopOffsetConfig;

}

@property (assign,nonatomic) unsigned long long paywallType;                                            //@synthesize paywallType=_paywallType - In the implementation block
@property (nonatomic,copy) NSString * title;                                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * learnMoreTitle;                                                   //@synthesize learnMoreTitle=_learnMoreTitle - In the implementation block
@property (nonatomic,copy) NSURL * learnMoreURL;                                                        //@synthesize learnMoreURL=_learnMoreURL - In the implementation block
@property (nonatomic,retain) FCPaywallVisualSpecConfiguration * visualSpecConfig;                       //@synthesize visualSpecConfig=_visualSpecConfig - In the implementation block
@property (nonatomic,retain) FCSubscriptionButtonConfiguration * subscriptionButtonConfig;              //@synthesize subscriptionButtonConfig=_subscriptionButtonConfig - In the implementation block
@property (nonatomic,copy) NSString * descriptionTrial;                                                 //@synthesize descriptionTrial=_descriptionTrial - In the implementation block
@property (nonatomic,copy) NSString * descriptionNonTrial;                                              //@synthesize descriptionNonTrial=_descriptionNonTrial - In the implementation block
@property (nonatomic,readonly) FCPaywallTopOffsetConfiguration * paywallTopOffsetConfig;                //@synthesize paywallTopOffsetConfig=_paywallTopOffsetConfig - In the implementation block
+(id)defaultPaywallTitle;
+(id)defaultPaywallDescription;
+(id)defaultPaywallTopOffsetConfiguration;
+(id)defaultSmallPaywallTitle;
+(id)defaultArticleHardPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultArticleSharedHardPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultArticleSoftPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultArticleSharedSoftPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultChannelSoftPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultMagazineFeedSoftPaywallSmallPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultMagazineFeedSoftPaywallMediumPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultMagazineFeedSoftPaywallLargePaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultMagazineFeedVideoSoftPaywallSmallPaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultMagazineFeedVideoSoftPaywallLargePaywallWithLandingPageArticleID:(id)arg1 ;
+(id)defaultPDFHardPaywallWithLandingPageArticleID:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)learnMoreURL;
-(NSString *)learnMoreTitle;
-(void)setLearnMoreURL:(NSURL *)arg1 ;
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)initWithPaywallType:(unsigned long long)arg1 title:(id)arg2 descriptionTrial:(id)arg3 descriptionNonTrial:(id)arg4 learnMoreTitle:(id)arg5 learnMoreURL:(id)arg6 subscriptionButtonConfig:(id)arg7 visualSpecConfig:(id)arg8 paywallTopOffsetConfig:(id)arg9 ;
-(NSString *)descriptionTrial;
-(NSString *)descriptionNonTrial;
-(FCSubscriptionButtonConfiguration *)subscriptionButtonConfig;
-(FCPaywallVisualSpecConfiguration *)visualSpecConfig;
-(unsigned long long)paywallType;
-(void)setPaywallType:(unsigned long long)arg1 ;
-(void)setDescriptionTrial:(NSString *)arg1 ;
-(void)setDescriptionNonTrial:(NSString *)arg1 ;
-(void)setLearnMoreTitle:(NSString *)arg1 ;
-(void)setSubscriptionButtonConfig:(FCSubscriptionButtonConfiguration *)arg1 ;
-(void)setVisualSpecConfig:(FCPaywallVisualSpecConfiguration *)arg1 ;
-(FCPaywallTopOffsetConfiguration *)paywallTopOffsetConfig;
@end

