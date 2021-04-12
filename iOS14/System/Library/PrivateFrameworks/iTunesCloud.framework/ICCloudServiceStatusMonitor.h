/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICCloudServiceStatusRemoteMonitoringClient.h>

@protocol OS_dispatch_source;
@class NSXPCConnection, NSError, NSMutableSet, ICCloudServerListenerEndpointProvider, NSUUID, NSString, NSObject;

@interface ICCloudServiceStatusMonitor : NSObject <ICCloudServiceStatusRemoteMonitoringClient> {

	NSXPCConnection* _cloudServiceStatusMonitorConnection;
	NSError* _cloudServiceStatusMonitorConnectionEstablishmentError;
	NSMutableSet* _activeTransactionIdentifiersForCloudServiceStatusMonitorConnection;
	ICCloudServerListenerEndpointProvider* _listenerEndpointProvider;
	long long _privacyAcknowledgementPolicy;
	BOOL _isObservingCloudServiceStatus;
	NSUUID* _observationToken;
	NSString* _transactionIdentifierForActiveObservationToken;
	int _cloudServerLaunchedNotifyToken;
	NSObject*<OS_dispatch_source> _cloudServerLaunchTimeoutTimer;
	unsigned long long _capabilities;
	BOOL _hasValidCapabilities;
	NSString* _storefrontCountryCode;
	NSString* _storefrontIdentifier;
	os_unfair_lock_s _lock;

}

@property (assign) long long privacyAcknowledgementPolicy; 
@property (getter=isObservingCloudServiceStatus,readonly) BOOL observingCloudServiceStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)storefrontCountryCodeDidChange:(id)arg1 ;
-(void)storefrontIdentifierDidChange:(id)arg1 ;
-(void)requestStorefrontCountryCodeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestStorefrontIdentifierWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestCapabilitiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)capabilitiesDidChange:(unsigned long long)arg1 ;
-(void)_invalidateTriggersForCloudServiceStatusObservationRecovery;
-(void)_beginObservingCloudServiceStatus;
-(void)beginObservingCloudServiceStatus;
-(void)_endObservingCloudServiceStatusWithToken:(id)arg1 ;
-(void)_requestCapabilitiesWithPrivacyPromptPolicy:(long long)arg1 requestCapabilitiesWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)_refreshCloudServiceStatus;
-(void)_requestStorefrontCountryCodeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_requestStorefrontIdentifierWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_didEndRequestingUserTokenWithTransactionIdentifier:(id)arg1 ;
-(void)_updateWithStorefrontCountryCode:(id)arg1 transactionIdentifier:(id)arg2 ;
-(void)_performCloudServiceStatusMonitorRequestWithDescription:(id)arg1 requestHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)_updateWithCapabilities:(unsigned long long)arg1 hasValidCapabilities:(BOOL)arg2 transactionIdentifier:(id)arg3 ;
-(void)_updateWithStorefrontIdentifier:(id)arg1 transactionIdentifier:(id)arg2 ;
-(void)_resetCloudServiceStatusMonitorConnectionAllowingExplicitInvalidation:(BOOL)arg1 ;
-(void)_cloudServiceStatusMonitorConnectionWasInterrupted;
-(void)_cloudServiceStatusMonitorConnectionWasInvalidated;
-(void)_recoverObservingCloudServiceStatus;
-(void)_beginTransactionForCloudServiceStatusMonitorConnectionWithIdentifier:(id)arg1 ;
-(id)_cloudServiceStatusMonitorConnectionForTransactionIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)_endTransactionForCloudServiceStatusMonitorConnectionWithIdentifier:(id)arg1 ;
-(id)_handleCloudServiceStatusMonitorConnectionRemoteObjectProxyError:(id)arg1 forRequestWithDescription:(id)arg2 transactionIdentifier:(id)arg3 ;
-(void)_scheduleTriggersForCloudServiceStatusObservationRecovery;
-(void)_invalidateCloudServerLaunchTimeoutTimer;
-(void)_didBeginObservingCloudServiceStatusWithToken:(id)arg1 transactionIdentifier:(id)arg2 ;
-(void)_didEndObservingCloudServiceStatusWithToken:(id)arg1 transactionIdentifier:(id)arg2 ;
-(void)_registerCloudServerLaunchedNotifyToken;
-(void)_scheduleCloudServerLaunchTimeoutTimer;
-(void)_cancelCloudServerLaunchedNotifyToken;
-(long long)privacyAcknowledgementPolicy;
-(void)setPrivacyAcknowledgementPolicy:(long long)arg1 ;
-(BOOL)isObservingCloudServiceStatus;
-(void)endObservingCloudServiceStatus;
-(void)requestUserTokenForDeveloperToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

