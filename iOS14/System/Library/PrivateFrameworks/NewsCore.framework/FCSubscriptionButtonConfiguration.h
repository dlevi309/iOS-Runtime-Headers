/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, FCColor;

@interface FCSubscriptionButtonConfiguration : NSObject <NSCopying> {

	BOOL _dismissLandingPagePostPurchase;
	unsigned long long _subscriptionButtonType;
	NSString* _trialText;
	NSString* _nonTrialText;
	unsigned long long _targetType;
	unsigned long long _postPurchaseActionType;
	NSURL* _postPurchaseURL;
	NSString* _landingPageArticleID;
	FCColor* _buttonColor;
	FCColor* _buttonTextColor;

}

@property (assign,nonatomic) unsigned long long subscriptionButtonType;                                                    //@synthesize subscriptionButtonType=_subscriptionButtonType - In the implementation block
@property (assign,nonatomic) unsigned long long targetType;                                                                //@synthesize targetType=_targetType - In the implementation block
@property (assign,nonatomic) unsigned long long postPurchaseActionType;                                                    //@synthesize postPurchaseActionType=_postPurchaseActionType - In the implementation block
@property (nonatomic,copy) NSURL * postPurchaseURL;                                                                        //@synthesize postPurchaseURL=_postPurchaseURL - In the implementation block
@property (nonatomic,copy) NSString * landingPageArticleID;                                                                //@synthesize landingPageArticleID=_landingPageArticleID - In the implementation block
@property (assign,getter=shouldDismissLandingPagePostPurchase,nonatomic) BOOL dismissLandingPagePostPurchase;              //@synthesize dismissLandingPagePostPurchase=_dismissLandingPagePostPurchase - In the implementation block
@property (nonatomic,copy) NSString * trialText;                                                                           //@synthesize trialText=_trialText - In the implementation block
@property (nonatomic,copy) NSString * nonTrialText;                                                                        //@synthesize nonTrialText=_nonTrialText - In the implementation block
@property (nonatomic,retain) FCColor * buttonColor;                                                                        //@synthesize buttonColor=_buttonColor - In the implementation block
@property (nonatomic,retain) FCColor * buttonTextColor;                                                                    //@synthesize buttonTextColor=_buttonTextColor - In the implementation block
+(id)defaultLandingPageTargetSubscriptionButtonWithLandingPageArticleID:(id)arg1 ;
+(id)defaultTrialText;
+(id)defaultSubscriptionButtonText;
+(id)defaultNonTrialText;
+(id)defaultOsloSheetTargetSubscriptionButton;
+(id)defaultAmsSheetTargetSubscriptionButton;
+(id)defaultArticleSubscriptionButtonWithLandingPageArticleID:(id)arg1 ;
+(id)defaultLandingPageSubscriptionButtonWithLandingPageArticleID:(id)arg1 ;
+(id)defaultIssueCoverSubscriptionButtonWithLandingPageArticleID:(id)arg1 ;
-(id)initWithConfigDictionary:(id)arg1 ;
-(void)setButtonColor:(FCColor *)arg1 ;
-(unsigned long long)postPurchaseActionType;
-(void)setTrialText:(NSString *)arg1 ;
-(FCColor *)buttonColor;
-(id)init;
-(void)setTargetType:(unsigned long long)arg1 ;
-(FCColor *)buttonTextColor;
-(unsigned long long)subscriptionButtonType;
-(id)initWithSubscriptionButtonType:(unsigned long long)arg1 trialText:(id)arg2 nonTrialText:(id)arg3 buttonColor:(id)arg4 buttonTextColor:(id)arg5 targetType:(unsigned long long)arg6 postPurchaseActionType:(unsigned long long)arg7 postPurchaseURL:(id)arg8 landingPageArticleID:(id)arg9 dismissLandingPagePostPurchase:(BOOL)arg10 ;
-(void)setDismissLandingPagePostPurchase:(BOOL)arg1 ;
-(void)setLandingPageArticleID:(NSString *)arg1 ;
-(unsigned long long)targetType;
-(void)setNonTrialText:(NSString *)arg1 ;
-(void)setPostPurchaseActionType:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(NSURL *)postPurchaseURL;
-(NSString *)trialText;
-(NSString *)landingPageArticleID;
-(BOOL)shouldDismissLandingPagePostPurchase;
-(NSString *)nonTrialText;
-(void)setButtonTextColor:(FCColor *)arg1 ;
-(void)setPostPurchaseURL:(NSURL *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubscriptionButtonType:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

