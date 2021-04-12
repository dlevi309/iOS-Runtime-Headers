/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@protocol VSDeveloperServiceProtocol <NSObject>
@required
-(void)updateDeveloperSettings:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchDeveloperSettingsWithCompletionHandler:(/*^block*/id)arg1;
-(void)fetchDeveloperIdentityProvidersWithCompletionHandler:(/*^block*/id)arg1;
-(void)addDeveloperIdentityProvider:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)updateExistingDeveloperIdentityProvider:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)removeDeveloperIdentityProviderWithUniqueID:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

