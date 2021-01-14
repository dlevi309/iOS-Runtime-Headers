/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class VSAppInstallationInfoCenter;

@interface VSSubscriptionPredicateFactory : NSObject {

	VSAppInstallationInfoCenter* _appInstallationInfoCenter;

}

@property (nonatomic,retain) VSAppInstallationInfoCenter * appInstallationInfoCenter;              //@synthesize appInstallationInfoCenter=_appInstallationInfoCenter - In the implementation block
+(id)_subscriptionSourcePredicateTemplateValues;
+(id)_subscriptionSourceKindPredicateTemplateValues;
+(id)_subscriptionPredicateTemplateValues;
-(id)_predicateTemplateForSourceKind:(long long)arg1 ;
-(id)_predicateTemplateForSourceIdentifier:(id)arg1 ;
-(id)_topLevelAccessPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2 ;
-(id)_predicateTemplateForSourceOfTask:(id)arg1 ;
-(id)_predicateTemplateForAppPredicate:(id)arg1 withTask:(id)arg2 ;
-(id)_predicateTemplateForRequestKind:(long long)arg1 fromTask:(id)arg2 ;
-(id)allowedSubscriptionsPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2 ;
-(VSAppInstallationInfoCenter *)appInstallationInfoCenter;
-(id)_expressionByConvertingSubscriptionKeyPathInExpression:(id)arg1 toAttributeKeysInEntity:(id)arg2 ;
-(id)predicateByConvertingSubscriptionKeyPathsInPredicate:(id)arg1 toAttributeKeysInEntity:(id)arg2 ;
-(id)allowedSubscriptionSourceKindsPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2 ;
-(id)allowedSubscriptionSourcesPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2 ;
-(id)allowedSubscriptionsPredicateForTask:(id)arg1 ;
-(id)subscriptionFetchPredicateForTask:(id)arg1 withOptions:(id)arg2 ;
-(void)setAppInstallationInfoCenter:(VSAppInstallationInfoCenter *)arg1 ;
@end

