/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXSubscriptionStatusProviding <NSObject>
@property (nonatomic,readonly) long long bundleSubscriptionStatus; 
@property (nonatomic,readonly) long long channelSubscriptionStatus; 
@required
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(long long)bundleSubscriptionStatus;
-(long long)channelSubscriptionStatus;

@end

