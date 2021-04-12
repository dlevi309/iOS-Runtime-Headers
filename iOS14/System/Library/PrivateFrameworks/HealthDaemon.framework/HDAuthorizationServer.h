/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProfile:(HDProfile *)arg1 ;
-(void)_invalidate;
-(NSString *)sourceBundleIdentifier;
-(HDHealthStoreClient *)client;
-(void)enqueueObjectAuthorizationRequestForSamples:(id)arg1 promptIfNeeded:(BOOL)arg2 authorizationNeededHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)authorizationStatusForType:(id)arg1 error:(id*)arg2 ;
-(id)_authorizationStatusForTypes:(id)arg1 error:(id*)arg2 ;
-(void)_queue_beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)readAuthorizationStatusForType:(id)arg1 error:(id*)arg2 ;
-(id)readAuthorizationWithTypes:(id)arg1 error:(id*)arg2 ;
-(NSUUID *)transactionSessionIdentifier;
-(BOOL)isAuthorizationStatusDeterminedForTypes:(id)arg1 error:(id*)arg2 ;
-(void)performIfAuthorizedToDeleteObjectsWithTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)enqueueAuthorizationRequestToWriteTypes:(id)arg1 readTypes:(id)arg2 authorizationNeededHandler:(/*^block*/id)arg3 requestCompletionHandler:(/*^block*/id)arg4 ;
-(void)setTransactionSessionIdentifier:(NSUUID *)arg1 ;
-(void)handleAuthorizationRequestsForBundleIdentifier:(id)arg1 promptHandler:(/*^block*/id)arg2 requestCompletionHandler:(/*^block*/id)arg3 ;
-(HDProfile *)profile;
-(void)beginAuthorizationRequestDelegateTransactionWithRequestRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateDefaultAuthorizationStatusesWithCompletion:(/*^block*/id)arg1 ;
-(void)beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)endAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2 ;
-(void)_queue_enqueueAuthorizationRequestForBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 authorizationNeededHandler:(/*^block*/id)arg4 requestCompletionHandler:(/*^block*/id)arg5 ;
-(void)handleAuthorizationRequestsWithPromptHandler:(/*^block*/id)arg1 requestCompletionHandler:(/*^block*/id)arg2 ;
-(void)invalidate;
-(void)setAuthorizationRequestIdentifiers:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)performIfAuthorizedToReadTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)handleObjectAuthorizationRequestsWithPromptHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableArray *)authorizationRequestIdentifiers;
-(id)initWithClient:(id)arg1 queue:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_performIfAuthorizedForTypes:(id)arg1 sharing:(BOOL)arg2 onQueue:(id)arg3 usingBlock:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(void)performIfAuthorizedToSaveObjectsWithTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
@end

