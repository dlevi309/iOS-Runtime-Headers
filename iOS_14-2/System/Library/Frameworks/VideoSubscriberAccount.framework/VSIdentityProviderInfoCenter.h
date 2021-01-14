/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@protocol OS_dispatch_queue;
@class VSPreferences, NSObject, NSOperationQueue, VSAccountStore, VSIdentityProvider, NSString;

@interface VSIdentityProviderInfoCenter : NSObject {

	VSPreferences* _preferences;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSOperationQueue* _privateQueue;
	VSAccountStore* _accountStore;
	VSIdentityProvider* _cachedIdentityProvider;
	NSString* _cachedDesignatedAppBundleIdentifier;

}

@property (nonatomic,retain) VSPreferences * preferences;                                 //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                    //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;                             //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) VSAccountStore * accountStore;                               //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) VSIdentityProvider * cachedIdentityProvider;                 //@synthesize cachedIdentityProvider=_cachedIdentityProvider - In the implementation block
@property (nonatomic,retain) NSString * cachedDesignatedAppBundleIdentifier;              //@synthesize cachedDesignatedAppBundleIdentifier=_cachedDesignatedAppBundleIdentifier - In the implementation block
+(id)sharedCenter;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(VSPreferences *)preferences;
-(NSOperationQueue *)privateQueue;
-(VSAccountStore *)accountStore;
-(void)setPreferences:(VSPreferences *)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAccountStore:(VSAccountStore *)arg1 ;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(void)_accountStoreDidChange;
-(void)dealloc;
-(VSIdentityProvider *)cachedIdentityProvider;
-(NSString *)cachedDesignatedAppBundleIdentifier;
-(void)setCachedDesignatedAppBundleIdentifier:(NSString *)arg1 ;
-(void)setCachedIdentityProvider:(VSIdentityProvider *)arg1 ;
-(void)enqueueInfoQueryWithCompletion:(/*^block*/id)arg1 ;
-(void)enqueueSetTopBoxProfileProviderQueryWithCompletion:(/*^block*/id)arg1 ;
-(void)enqueueIdentityProviderAppsQueryWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateCachedBundleInfoWithAdamID:(id)arg1 ;
-(id)_value:(id)arg1 withDefault:(id)arg2 ;
@end

