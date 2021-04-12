/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@protocol VSDeveloperServiceProtocol <NSObject>
@required
-(void)addDeveloperIdentityProvider:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)updateExistingDeveloperIdentityProvider:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)removeDeveloperIdentityProviderWithUniqueID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchDeveloperSettingsWithCompletionHandler:(/*^block*/id)arg1;
-(void)fetchDeveloperIdentityProvidersWithCompletionHandler:(/*^block*/id)arg1;
-(void)updateDeveloperSettings:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

