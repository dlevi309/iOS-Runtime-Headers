/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional, VSStoreURLBag, NSOperationQueue, VSDevice;

@interface VSSetupFlowPreparationOperation : VSAsyncOperation {

	VSOptional* _storage;
	VSOptional* _preferences;
	VSOptional* _result;
	VSStoreURLBag* _bag;
	NSOperationQueue* _privateQueue;
	VSDevice* _currentDevice;

}

@property (nonatomic,retain) VSOptional * result;                          //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) VSStoreURLBag * bag;                          //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;              //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) VSDevice * currentDevice;                     //@synthesize currentDevice=_currentDevice - In the implementation block
@property (nonatomic,retain) VSOptional * storage;                         //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) VSOptional * preferences;                     //@synthesize preferences=_preferences - In the implementation block
-(void)setResult:(VSOptional *)arg1 ;
-(void)setStorage:(VSOptional *)arg1 ;
-(void)executionDidBegin;
-(id)init;
-(VSOptional *)storage;
-(void)_finishWithError:(id)arg1 ;
-(VSOptional *)preferences;
-(VSDevice *)currentDevice;
-(NSOperationQueue *)privateQueue;
-(void)setPreferences:(VSOptional *)arg1 ;
-(VSStoreURLBag *)bag;
-(void)setBag:(VSStoreURLBag *)arg1 ;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(VSOptional *)result;
-(void)setCurrentDevice:(VSDevice *)arg1 ;
-(void)_checkPreferences;
-(void)_checkAvailability;
-(void)_finishWithFlow:(id)arg1 ;
-(void)_checkForExistingAccounts;
-(void)_fetchProviderForAccount:(id)arg1 ;
-(void)_fetchAllProvidersIfNeeded;
-(void)_fetchAllProviders;
-(void)_checkForSupportedAppsButton;
-(id)createAppDescriptionFetchOperationForProvider:(id)arg1 withFlow:(id)arg2 ;
-(void)_resolveBundleIDs:(id)arg1 forFlow:(id)arg2 ;
-(void)_checkForSupportedAppsButtonWithFlow:(id)arg1 ;
-(void)_loadProviderAppDescriptionWithFlow:(id)arg1 ;
-(void)_getSTBProviderFromAllProviders:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)prepareSTBSetupForAccount:(id)arg1 forProvider:(id)arg2 ;
-(void)_checkForSupportedAppsFromProvider:(id)arg1 ;
-(void)_checkForPersonalizedChannelsWithResponse:(id)arg1 identityProvider:(id)arg2 ;
-(void)_findBundleIDsForAdamIDs:(id)arg1 withFlow:(id)arg2 ;
@end

