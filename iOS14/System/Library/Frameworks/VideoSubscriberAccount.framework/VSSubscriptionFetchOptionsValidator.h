/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class VSSubscriptionPredicateFactory;

@interface VSSubscriptionFetchOptionsValidator : NSObject {

	VSSubscriptionPredicateFactory* _predicateFactory;

}

@property (nonatomic,retain) VSSubscriptionPredicateFactory * predicateFactory;              //@synthesize predicateFactory=_predicateFactory - In the implementation block
-(void)setPredicateFactory:(VSSubscriptionPredicateFactory *)arg1 ;
-(VSSubscriptionPredicateFactory *)predicateFactory;
-(id)subscriptionFetchOptionsAllowedForSecurityTask:(id)arg1 ;
-(id)standardizedFetchOptionsFromOptions:(id)arg1 withSecurityTask:(id)arg2 ;
@end

