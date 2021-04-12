/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setAccountStore:(VSAccountStore *)arg1 ;
-(VSAccountStore *)accountStore;
-(void)setPreferences:(VSPreferences *)arg1 ;
-(VSPreferences *)preferences;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_accountStoreDidChange;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
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

