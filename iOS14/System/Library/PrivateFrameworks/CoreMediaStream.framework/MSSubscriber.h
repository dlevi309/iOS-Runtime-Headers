/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <CoreMediaStream/MSCupidStateMachine.h>
#import <libobjc.A.dylib/MSSubscriber.h>

@protocol MSSubscriber
@property (assign,nonatomic) id<MSSubscriberDelegate> delegate; 
@required
-(void)abort;
-(id<MSSubscriberDelegate>)delegate;
-(void)stop;
-(void)setDelegate:(id)arg1;
-(id)subscribedStreams;
-(void)resetSync;
-(void)checkForOutstandingActivities;
-(void)checkForNewAssetCollectionsIfMissingCtag;
-(void)checkForNewAssetCollections;
-(void)retrieveAssets:(id)arg1;
-(id)ownSubscribedStream;

@end

#import <libobjc.A.dylib/MSSubscribeStreamsProtocolDelegate.h>
#import <libobjc.A.dylib/MSSubscribeStorageProtocolDelegate.h>
#import <libobjc.A.dylib/MSReauthorizationProtocolDelegate.h>

@protocol MSSubscriberDelegate, MSSubscribeStorageProtocol;
@class MSMediaStreamDaemon, MSSubscribeStreamsProtocol, NSMutableDictionary, MSReauthorizationProtocol, MSObjectQueue, NSMutableArray, NSString;

@interface MSSubscriber : MSCupidStateMachine <MSSubscriber, MSSubscribeStreamsProtocolDelegate, MSSubscribeStorageProtocolDelegate, MSReauthorizationProtocolDelegate> {

	id<MSSubscriberDelegate> _delegate;
	MSMediaStreamDaemon* _daemon;
	BOOL _checkOneMoreTime;
	int _state;
	MSSubscribeStreamsProtocol* _protocol;
	NSMutableDictionary* _newSubscriptionsByStreamID;
	int _retrievalState;
	id<MSSubscribeStorageProtocol> _storageProtocol;
	MSReauthorizationProtocol* _reauthProtocol;
	MSObjectQueue* _retrievalQueue;
	NSMutableArray* _assetsBeingRetrieved;
	long long _targetRetrievalByteCount;
	int _retrievalBatchSize;
	long long _maxErrorCount;

}

@property (assign,nonatomic) MSMediaStreamDaemon * daemon;                    //@synthesize daemon=_daemon - In the implementation block
@property (assign,nonatomic) long long targetRetrievalByteCount;              //@synthesize targetRetrievalByteCount=_targetRetrievalByteCount - In the implementation block
@property (assign,nonatomic) int retrievalBatchSize;                          //@synthesize retrievalBatchSize=_retrievalBatchSize - In the implementation block
@property (assign,nonatomic) id<MSSubscriberDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)forgetPersonID:(id)arg1 ;
+(id)_descriptionForState:(int)arg1 ;
+(id)nextActivityDate;
+(BOOL)isInRetryState;
+(void)stopAllActivities;
+(id)nextActivityDateForPersonID:(id)arg1 ;
+(void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2 ;
+(id)personIDsWithOutstandingActivities;
+(id)_descriptionForRetrievalState:(int)arg1 ;
+(id)subscriberForPersonID:(id)arg1 ;
+(id)existingSubscriberForPersonID:(id)arg1 ;
+(id)_clearInstantiatedSubscribersByPersonID;
-(void)abort;
-(void)setDaemon:(MSMediaStreamDaemon *)arg1 ;
-(MSMediaStreamDaemon *)daemon;
-(id<MSSubscriberDelegate>)delegate;
-(void)_abort;
-(void)stop;
-(void)deactivate;
-(void)setDelegate:(id<MSSubscriberDelegate>)arg1 ;
-(id)subscribedStreams;
-(void)_forget;
-(void)dealloc;
-(void)resetSync;
-(void)checkForOutstandingActivities;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)_updateMasterManifest;
-(void)_serverSideConfigurationDidChange:(id)arg1 ;
-(BOOL)_isInRetryState;
-(void)reauthorizationProtocol:(id)arg1 reauthorizedAssets:(id)arg2 rejectedAssets:(id)arg3 error:(id)arg4 ;
-(void)reauthorizationProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2 ;
-(void)subscribeStorageProtocol:(id)arg1 didFinishRetrievingAsset:(id)arg2 error:(id)arg3 ;
-(void)subscribeStorageProtocolDidFinishRetrievingAllAssets:(id)arg1 ;
-(void)subscribeStreamsProtocol:(id)arg1 willReceiveUpdatesForPersonID:(id)arg2 wasReset:(BOOL)arg3 metadata:(id)arg4 ;
-(void)subscribeStreamsProtocol:(id)arg1 didReceiveAssetCollections:(id)arg2 forPersonID:(id)arg3 ;
-(void)subscribeStreamsProtocol:(id)arg1 didFinishReceivingUpdatesForPersonID:(id)arg2 ctag:(id)arg3 ;
-(void)subscribeStreamsProtocol:(id)arg1 didFindDisappearedSubscriptionForPersonID:(id)arg2 ;
-(void)subscribeStreamsProtocol:(id)arg1 didFindTemporarilyUnavailableSubscriptionForPersonID:(id)arg2 ;
-(void)subscribeStreamsProtocol:(id)arg1 didFinishError:(id)arg2 ;
-(void)subscribeStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2 ;
-(void)checkForNewAssetCollectionsIfMissingCtag;
-(void)checkForNewAssetCollections;
-(void)retrieveAssets:(id)arg1 ;
-(id)ownSubscribedStream;
-(void)_changeStateTo:(int)arg1 ;
-(void)_changeRetrievalStateTo:(int)arg1 ;
-(void)_refreshServerSideConfigurationParameters;
-(BOOL)_hasOutstandingPoll;
-(void)_setHasOutstandingPoll:(BOOL)arg1 ;
-(id)_subscriptionsByStreamID;
-(void)_setSubscriptionsByStreamID:(id)arg1 ;
-(BOOL)_isAllowedToDownload;
-(void)_checkForNewAssetCollections;
-(void)_didFinishRetrievingSubscriptionUpdate;
-(void)_didReceiveAuthenticationError:(id)arg1 ;
-(void)_retrieveAssets;
-(void)_retrieveNextAssets;
-(void)_reauthorizeAssets;
-(void)_stopOutSubscriberState:(int*)arg1 outRetrievalState:(int*)arg2 ;
-(void)_finishedRetrievingAsset:(id)arg1 ;
-(long long)targetRetrievalByteCount;
-(void)setTargetRetrievalByteCount:(long long)arg1 ;
-(int)retrievalBatchSize;
-(void)setRetrievalBatchSize:(int)arg1 ;
@end

