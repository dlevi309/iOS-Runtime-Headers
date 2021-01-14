/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/


@protocol SXSubscriptionStatusProviding <NSObject>
@property (readonly,nonatomic) long long bundleSubscriptionStatus; 
@property (readonly,nonatomic) long long channelSubscriptionStatus; 
@required
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(long long)bundleSubscriptionStatus;
-(long long)channelSubscriptionStatus;

@end

