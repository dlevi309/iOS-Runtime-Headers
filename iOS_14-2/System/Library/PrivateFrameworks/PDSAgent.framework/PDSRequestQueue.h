/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/


@protocol PDSRequestQueueDelegate, OS_dispatch_queue;
@class PDSRequest, NSObject, FTMessageDelivery, PDSUserTracker, NSDate;

@interface PDSRequestQueue : NSObject {

	id<PDSRequestQueueDelegate> _delegate;
	PDSRequest* _inflightRequest;
	PDSRequest* _queuedRequest;
	NSObject*<OS_dispatch_queue> _queue;
	FTMessageDelivery* _messageDelivery;
	PDSUserTracker* _userTracker;
	/*^block*/id _pushTokenBlock;
	long long _authRetries;
	NSDate* _lastReauthAttempt;

}

@property (nonatomic,retain) PDSRequest * inflightRequest;                             //@synthesize inflightRequest=_inflightRequest - In the implementation block
@property (nonatomic,retain) PDSRequest * queuedRequest;                               //@synthesize queuedRequest=_queuedRequest - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) FTMessageDelivery * messageDelivery;                      //@synthesize messageDelivery=_messageDelivery - In the implementation block
@property (nonatomic,retain) PDSUserTracker * userTracker;                             //@synthesize userTracker=_userTracker - In the implementation block
@property (nonatomic,copy) id pushTokenBlock;                                          //@synthesize pushTokenBlock=_pushTokenBlock - In the implementation block
@property (assign,nonatomic) long long authRetries;                                    //@synthesize authRetries=_authRetries - In the implementation block
@property (nonatomic,retain) NSDate * lastReauthAttempt;                               //@synthesize lastReauthAttempt=_lastReauthAttempt - In the implementation block
@property (assign,nonatomic,__weak) id<PDSRequestQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_machineID;
-(id<PDSRequestQueueDelegate>)delegate;
-(id)_osVersion;
-(void)_logProtoUserPushToken:(id)arg1 ;
-(PDSRequest *)queuedRequest;
-(FTMessageDelivery *)messageDelivery;
-(void)setPushTokenBlock:(id)arg1 ;
-(void)setQueuedRequest:(PDSRequest *)arg1 ;
-(PDSUserTracker *)userTracker;
-(BOOL)_isAuthIssue:(long long)arg1 ;
-(void)setDelegate:(id<PDSRequestQueueDelegate>)arg1 ;
-(NSDate *)lastReauthAttempt;
-(id)pushTokenBlock;
-(PDSRequest *)inflightRequest;
-(void)_logEntries:(id)arg1 ;
-(id)_deviceInfo;
-(long long)authRetries;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_dequeueIfNeeded;
-(BOOL)enqueueRequest:(id)arg1 ;
-(void)setMessageDelivery:(FTMessageDelivery *)arg1 ;
-(void)_reAuthAndContinueWithRequest:(id)arg1 forUser:(id)arg2 ;
-(void)_flightRequest:(id)arg1 ;
-(void)setUserTracker:(PDSUserTracker *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_hwVersion;
-(void)setAuthRetries:(long long)arg1 ;
-(void)setInflightRequest:(PDSRequest *)arg1 ;
-(id)initWithMessageDelivery:(id)arg1 userTracker:(id)arg2 queue:(id)arg3 pushTokenBlock:(/*^block*/id)arg4 ;
-(void)setLastReauthAttempt:(NSDate *)arg1 ;
@end

