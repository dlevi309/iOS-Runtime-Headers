/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, HDProfile, NSObject, NSMutableArray, _HDAuthorizationRequestGroup, NSString;

@interface HDAuthorizationManager : NSObject <HDDiagnosticObject> {

	NSMutableDictionary* _openAppCompletionHandlersByBundleID;
	NSMutableDictionary* _remoteAuthorizationRecordsByBundleID;
	BOOL _suppressAuthorizationPrompt;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSMutableDictionary* _requestGroupsByBundleIdentifier;
	NSMutableArray* _pendingRequestGroups;
	_HDAuthorizationRequestGroup* _promptingRequestGroup;
	NSMutableDictionary* _pendingObjectAuthorizationRequestsByBundleIdentifier;
	NSMutableDictionary* _activeObjectPromptSessionsBySessionIdentifier;
	double _requestSessionTimeout;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;                                            //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestGroupsByBundleIdentifier;                                   //@synthesize requestGroupsByBundleIdentifier=_requestGroupsByBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingRequestGroups;                                                   //@synthesize pendingRequestGroups=_pendingRequestGroups - In the implementation block
@property (nonatomic,retain) _HDAuthorizationRequestGroup * promptingRequestGroup;                                    //@synthesize promptingRequestGroup=_promptingRequestGroup - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingObjectAuthorizationRequestsByBundleIdentifier;              //@synthesize pendingObjectAuthorizationRequestsByBundleIdentifier=_pendingObjectAuthorizationRequestsByBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeObjectPromptSessionsBySessionIdentifier;                     //@synthesize activeObjectPromptSessionsBySessionIdentifier=_activeObjectPromptSessionsBySessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL suppressAuthorizationPrompt;                                                        //@synthesize suppressAuthorizationPrompt=_suppressAuthorizationPrompt - In the implementation block
@property (assign,nonatomic) double requestSessionTimeout;                                                            //@synthesize requestSessionTimeout=_requestSessionTimeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setProfile:(HDProfile *)arg1 ;
-(BOOL)suppressAuthorizationPrompt;
-(id)enqueueObjectAuthorizationRequestForBundleIdentifier:(id)arg1 samples:(id)arg2 promptIfNeeded:(BOOL)arg3 authorizationNeededHandler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)openAppForAuthorization:(id)arg1 sessionIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)enqueueAuthorizationRequestForBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 authorizationNeededHandler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_validateRequiredAuthorizationWithRequestGroup:(id)arg1 ;
-(void)handleObjectAuthorizationRequestsForBundleIdentifier:(id)arg1 promptHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateSourceOrderWithAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_performNanoSyncImmediatelyWithReason:(id)arg1 ;
-(void)_queue_resetAllAuthorizationRecordsWithCompletion:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)pendingObjectAuthorizationRequestsByBundleIdentifier;
-(id)initWithProfile:(id)arg1 ;
-(void)resetAllAuthorizationRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelAuthorizationRequestsWithIdentifiers:(id)arg1 ;
-(void)applicationsUninstalledNotification:(id)arg1 ;
-(void)setActiveObjectPromptSessionsBySessionIdentifier:(NSMutableDictionary *)arg1 ;
-(id)_queue_activePromptSessionForBundleIdentifier:(id)arg1 ;
-(void)setSuppressAuthorizationPrompt:(BOOL)arg1 ;
-(void)setPromptingRequestGroup:(_HDAuthorizationRequestGroup *)arg1 ;
-(NSMutableDictionary *)requestGroupsByBundleIdentifier;
-(void)setAuthorizationStatuses:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(long long)authorizationRequestStatusForClientBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 error:(id*)arg4 ;
-(BOOL)hasRequiredAuthorizationStatusesForBundleIdentifier:(id)arg1 requiredReadTypes:(id)arg2 error:(id*)arg3 ;
-(id)diagnosticDescription;
-(HDProfile *)profile;
-(_HDAuthorizationRequestGroup *)promptingRequestGroup;
-(void)setRequestGroupsByBundleIdentifier:(NSMutableDictionary *)arg1 ;
-(void)_queue_setAuthorizationStatuses:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)_queue_handleNextAuthorizationRequestGroup;
-(void)_queue_requestGroupDidFinishPrompting:(id)arg1 error:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_queue_cancelAuthorizationRequestsWithIdentifiers:(id)arg1 ;
-(double)requestSessionTimeout;
-(void)setPendingRequestGroups:(NSMutableArray *)arg1 ;
-(void)requestRemoteAuthorizationForRequestRecord:(id)arg1 requestSentHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2 ;
-(void)_reportAuthorizationChangeForBundleIdentifier:(id)arg1 ;
-(NSMutableDictionary *)activeObjectPromptSessionsBySessionIdentifier;
-(void)setRequestSessionTimeout:(double)arg1 ;
-(NSMutableArray *)pendingRequestGroups;
-(BOOL)verifyProfileAuthorizationForClient:(id)arg1 error:(id*)arg2 ;
-(void)setPendingObjectAuthorizationRequestsByBundleIdentifier:(NSMutableDictionary *)arg1 ;
-(BOOL)_queue_resetAuthorizationRecordsForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)handleAuthorizationRequestsForBundleIdentifier:(id)arg1 promptHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)_authorizationRequestStatusForClientBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 updateAuthorizationStatuses:(BOOL)arg4 error:(id*)arg5 ;
-(void)_queue_enqueueAuthorizationRequestWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 writeTypes:(id)arg3 readTypes:(id)arg4 authorizationNeededHandler:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)dealloc;
-(void)_queue_endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2 ;
@end

