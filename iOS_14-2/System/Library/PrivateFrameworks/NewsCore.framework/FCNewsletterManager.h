/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCNewsletterManager.h>

@protocol FCNewsletterManager <NSObject>
@property (nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) long long activeNewsletter; 
@property (nonatomic,readonly) long long subscription; 
@property (nonatomic,readonly) BOOL isSubscribed; 
@property (nonatomic,readonly) BOOL canSubscribe; 
@property (nonatomic,readonly) BOOL canUnsubscribe; 
@required
-(void)subscribe;
-(void)unsubscribe;
-(BOOL)enabled;
-(void)addObserver:(id)arg1;
-(BOOL)canUnsubscribe;
-(void)deletePersonalizationVector;
-(id)updateSubscription;
-(id)forceUpdateSubscription;
-(void)subscribeTo:(long long)arg1;
-(void)submitPersonalizationVector:(id)arg1;
-(BOOL)canSubscribeToNewsletter:(long long)arg1;
-(long long)activeNewsletter;
-(long long)subscription;
-(BOOL)shouldSubmitPersonalizationVector;
-(void)removeObserver:(id)arg1;
-(void)updateCacheWithNewsletterString:(id)arg1;
-(long long)subscriptionStatusForNewsletter:(long long)arg1;
-(BOOL)canSubscribe;
-(BOOL)isSubscribed;
-(void)notifyObservers;

@end

#import <libobjc.A.dylib/FCAppActivityObserving.h>
#import <libobjc.A.dylib/FCAppleAccountObserver.h>

@protocol FCAppleAccount, FCNewsAppConfigurationManager;
@class FCNewsletterEndpointConnection, FCCommandQueue, NSHashTable, NSDate, NFPromise, NSString;

@interface FCNewsletterManager : NSObject <FCNewsletterManager, FCAppActivityObserving, FCAppleAccountObserver> {

	long long _subscription;
	FCNewsletterEndpointConnection* _endpointConnection;
	FCCommandQueue* _endpointCommandQueue;
	id<FCAppleAccount> _appleAccount;
	id<FCNewsAppConfigurationManager> _appConfig;
	NSHashTable* _observers;
	NSDate* _cacheExpiration;
	NFPromise* _updateSubscriptionPromise;
	NSString* _cachedVector;

}

@property (assign,nonatomic) long long subscription;                                             //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,readonly) FCNewsletterEndpointConnection * endpointConnection;              //@synthesize endpointConnection=_endpointConnection - In the implementation block
@property (nonatomic,readonly) FCCommandQueue * endpointCommandQueue;                            //@synthesize endpointCommandQueue=_endpointCommandQueue - In the implementation block
@property (nonatomic,readonly) id<FCAppleAccount> appleAccount;                                  //@synthesize appleAccount=_appleAccount - In the implementation block
@property (nonatomic,readonly) id<FCNewsAppConfigurationManager> appConfig;                      //@synthesize appConfig=_appConfig - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                          //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSDate * cacheExpiration;                                           //@synthesize cacheExpiration=_cacheExpiration - In the implementation block
@property (nonatomic,retain) NFPromise * updateSubscriptionPromise;                              //@synthesize updateSubscriptionPromise=_updateSubscriptionPromise - In the implementation block
@property (nonatomic,retain) NSString * cachedVector;                                            //@synthesize cachedVector=_cachedVector - In the implementation block
@property (nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) long long activeNewsletter; 
@property (nonatomic,readonly) BOOL isSubscribed; 
@property (nonatomic,readonly) BOOL canSubscribe; 
@property (nonatomic,readonly) BOOL canUnsubscribe; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)subscribe;
-(void)unsubscribe;
-(FCNewsletterEndpointConnection *)endpointConnection;
-(BOOL)enabled;
-(void)addObserver:(id)arg1 ;
-(double)cacheTimeout;
-(BOOL)canUnsubscribe;
-(NSString *)cachedVector;
-(void)deletePersonalizationVector;
-(NSHashTable *)observers;
-(id)updateSubscription;
-(NSDate *)cacheExpiration;
-(void)setSubscription:(long long)arg1 ;
-(id)forceUpdateSubscription;
-(void)subscribeTo:(long long)arg1 ;
-(void)notifyObserversWithPreviousSubscription:(long long)arg1 ;
-(void)submitPersonalizationVector:(id)arg1 ;
-(BOOL)canSubscribeToNewsletter:(long long)arg1 ;
-(void)activityObservingApplicationDidBecomeActive;
-(long long)activeNewsletter;
-(id<FCNewsAppConfigurationManager>)appConfig;
-(long long)subscription;
-(void)appleAccountChanged;
-(void)setCachedVector:(NSString *)arg1 ;
-(BOOL)shouldSubmitPersonalizationVector;
-(void)removeObserver:(id)arg1 ;
-(id<FCAppleAccount>)appleAccount;
-(void)updateCacheWithNewsletterString:(id)arg1 ;
-(long long)subscriptionStatusForNewsletter:(long long)arg1 ;
-(BOOL)canSubscribe;
-(BOOL)isSubscribed;
-(NFPromise *)updateSubscriptionPromise;
-(void)notifyObservers;
-(void)setCacheExpiration:(NSDate *)arg1 ;
-(id)initWithEndpointConnection:(id)arg1 endpointCommandQueue:(id)arg2 appleAccount:(id)arg3 appConfig:(id)arg4 ;
-(void)setUpdateSubscriptionPromise:(NFPromise *)arg1 ;
-(FCCommandQueue *)endpointCommandQueue;
@end

