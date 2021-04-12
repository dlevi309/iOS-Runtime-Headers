/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)defaultSubscriptionButtonText;
+(id)defaultTrialText;
+(id)defaultNonTrialText;
+(id)defaultOsloSheetTargetSubscriptionButton;
+(id)defaultArticleSubscriptionButtonWithLandingPageArticleID:(id)arg1 ;
+(id)defaultLandingPageSubscriptionButtonWithLandingPageArticleID:(id)arg1 ;
+(id)defaultIssueCoverSubscriptionButtonWithLandingPageArticleID:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCColor *)buttonTextColor;
-(void)setButtonTextColor:(FCColor *)arg1 ;
-(unsigned long long)targetType;
-(void)setTargetType:(unsigned long long)arg1 ;
-(FCColor *)buttonColor;
-(void)setButtonColor:(FCColor *)arg1 ;
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)initWithSubscriptionButtonType:(unsigned long long)arg1 trialText:(id)arg2 nonTrialText:(id)arg3 buttonColor:(id)arg4 buttonTextColor:(id)arg5 targetType:(unsigned long long)arg6 postPurchaseActionType:(unsigned long long)arg7 postPurchaseURL:(id)arg8 landingPageArticleID:(id)arg9 dismissLandingPagePostPurchase:(BOOL)arg10 ;
-(unsigned long long)subscriptionButtonType;
-(unsigned long long)postPurchaseActionType;
-(BOOL)shouldDismissLandingPagePostPurchase;
-(NSString *)trialText;
-(NSString *)nonTrialText;
-(NSURL *)postPurchaseURL;
-(NSString *)landingPageArticleID;
-(void)setSubscriptionButtonType:(unsigned long long)arg1 ;
-(void)setTrialText:(NSString *)arg1 ;
-(void)setNonTrialText:(NSString *)arg1 ;
-(void)setPostPurchaseActionType:(unsigned long long)arg1 ;
-(void)setPostPurchaseURL:(NSURL *)arg1 ;
-(void)setLandingPageArticleID:(NSString *)arg1 ;
-(void)setDismissLandingPagePostPurchase:(BOOL)arg1 ;
@end

