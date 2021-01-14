/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@protocol OS_dispatch_queue;
@class ACDQueueDictionary, ACRateLimiter, NSMutableSet, NSLock, NSMutableDictionary, NSObject;

@interface ACDAuthenticationPluginManager : NSObject {

	ACDQueueDictionary* _verificationHandlerQueues;
	ACDQueueDictionary* _renewalHandlerQueues;
	ACDQueueDictionary* _discoveryHandlerQueues;
	ACRateLimiter* _renewalRateLimiter;
	NSMutableSet* _keysForRateExceededBugSent;
	NSLock* _verificationHandlersLock;
	NSLock* _renewalHandlersLock;
	NSLock* _discoveryHandlersLock;
	NSMutableDictionary* _authenticationPluginsByType;
	NSObject*<OS_dispatch_queue> _authenticationPluginQueue;

}

@property (retain) ACRateLimiter * renewalRateLimiter; 
-(id)init;
-(BOOL)isPushSupportedForAccount:(id)arg1 ;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_sanitizeError:(id)arg1 ;
-(void)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)discoverPropertiesForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_authenticationTypeForAccount:(id)arg1 ;
-(id)_pluginForAuthenticationType:(id)arg1 ;
-(id)_unsanitizeOptionsDictionary:(id)arg1 ;
-(id)_authCapableParentAccountForAccount:(id)arg1 ;
-(void)_handleVerificationCompletionForAccount:(id)arg1 verifiedAccount:(id)arg2 error:(id)arg3 store:(id)arg4 shouldSave:(BOOL)arg5 ;
-(BOOL)_renewalRequestIsWithinLimitsForAccount:(id)arg1 accountStore:(id)arg2 ;
-(void)_handleRenewalCompletionResult:(long long)arg1 forAccount:(id)arg2 renewalID:(id)arg3 accountStore:(id)arg4 error:(id)arg5 ;
-(id)_descriptionForRenewalResult:(long long)arg1 ;
-(void)_handleDiscoveryCompletionResult:(id)arg1 forAccount:(id)arg2 discoveryID:(id)arg3 accountStore:(id)arg4 shouldSave:(BOOL)arg5 error:(id)arg6 ;
-(ACRateLimiter *)renewalRateLimiter;
-(void)setRenewalRateLimiter:(ACRateLimiter *)arg1 ;
@end

