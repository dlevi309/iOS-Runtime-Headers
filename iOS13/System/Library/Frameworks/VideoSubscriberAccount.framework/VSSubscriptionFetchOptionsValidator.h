/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class VSSubscriptionPredicateFactory;

@interface VSSubscriptionFetchOptionsValidator : NSObject {

	VSSubscriptionPredicateFactory* _predicateFactory;

}

@property (nonatomic,retain) VSSubscriptionPredicateFactory * predicateFactory;              //@synthesize predicateFactory=_predicateFactory - In the implementation block
-(VSSubscriptionPredicateFactory *)predicateFactory;
-(id)subscriptionFetchOptionsAllowedForSecurityTask:(id)arg1 ;
-(id)standardizedFetchOptionsFromOptions:(id)arg1 withSecurityTask:(id)arg2 ;
-(void)setPredicateFactory:(VSSubscriptionPredicateFactory *)arg1 ;
@end

