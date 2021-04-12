/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
@class NSString, HDProfile, NSObject, HDHealthStoreClient, NSMutableArray, NSUUID;

@interface HDAuthorizationServer : NSObject {

	AB _invalidated;
	NSString* _sourceBundleIdentifier;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	HDHealthStoreClient* _client;
	NSMutableArray* _authorizationRequestIdentifiers;
	NSUUID* _transactionSessionIdentifier;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                    //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) HDHealthStoreClient * client;                                //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSMutableArray * authorizationRequestIdentifiers;              //@synthesize authorizationRequestIdentifiers=_authorizationRequestIdentifiers - In the implementation block
@property (nonatomic,retain) NSUUID * transactionSessionIdentifier;                         //@synthesize transactionSessionIdentifier=_transactionSessionIdentifier - In the implementation block
@property (copy,readonly) NSString * sourceBundleIdentifier;                                //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)invalidate;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithClient:(id)arg1 queue:(id)arg2 ;
-(HDHealthStoreClient *)client;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(NSString *)sourceBundleIdentifier;
-(void)setAuthorizationStatuses:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(id)readAuthorizationStatusForType:(id)arg1 error:(id*)arg2 ;
-(BOOL)isAuthorizationStatusDeterminedForTypes:(id)arg1 error:(id*)arg2 ;
-(id)readAuthorizationWithTypes:(id)arg1 error:(id*)arg2 ;
-(void)handleObjectAuthorizationRequestsWithPromptHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enqueueObjectAuthorizationRequestForSamples:(id)arg1 promptIfNeeded:(BOOL)arg2 authorizationNeededHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_performIfAuthorizedForTypes:(id)arg1 sharing:(BOOL)arg2 onQueue:(id)arg3 usingBlock:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(id)_authorizationStatusForTypes:(id)arg1 error:(id*)arg2 ;
-(void)_queue_enqueueAuthorizationRequestForBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 authorizationNeededHandler:(/*^block*/id)arg4 requestCompletionHandler:(/*^block*/id)arg5 ;
-(void)handleAuthorizationRequestsForBundleIdentifier:(id)arg1 promptHandler:(/*^block*/id)arg2 requestCompletionHandler:(/*^block*/id)arg3 ;
-(void)performIfAuthorizedToReadTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)performIfAuthorizedToSaveObjectsWithTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)performIfAuthorizedToDeleteObjectsWithTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(id)authorizationStatusForType:(id)arg1 error:(id*)arg2 ;
-(void)enqueueAuthorizationRequestToWriteTypes:(id)arg1 readTypes:(id)arg2 authorizationNeededHandler:(/*^block*/id)arg3 requestCompletionHandler:(/*^block*/id)arg4 ;
-(void)handleAuthorizationRequestsWithPromptHandler:(/*^block*/id)arg1 requestCompletionHandler:(/*^block*/id)arg2 ;
-(NSMutableArray *)authorizationRequestIdentifiers;
-(void)setAuthorizationRequestIdentifiers:(NSMutableArray *)arg1 ;
-(NSUUID *)transactionSessionIdentifier;
-(void)setTransactionSessionIdentifier:(NSUUID *)arg1 ;
-(void)_setAuthorizationStatusesEntitled:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)_queue_beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)allAuthorizationRecordsForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)allAuthorizationRecordsForType:(id)arg1 error:(id*)arg2 ;
-(id)allSourcesRequestingTypes:(id)arg1 error:(id*)arg2 ;
-(id)allDocumentAuthorizationRecordsForType:(id)arg1 bundleIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)allObjectAuthorizationsForSampleWithUUID:(id)arg1 error:(id*)arg2 ;
-(void)requestAuthorizationForBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)beginAuthorizationRequestDelegateTransactionWithRequestRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)endAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2 ;
-(BOOL)resetAuthorizationStatusesForObjects:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetAuthorizationStatusForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)updateDefaultAuthorizationStatusesWithCompletion:(/*^block*/id)arg1 ;
@end

