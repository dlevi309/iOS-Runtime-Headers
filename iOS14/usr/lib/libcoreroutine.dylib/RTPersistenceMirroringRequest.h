/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol OS_dispatch_queue, RTPersistenceMirroringRequestDelegate, OS_os_transaction;
@class NSObject, NSCloudKitMirroringRequest, NSMutableArray, NSUUID, NSDate, RTPersistenceMirroringPolicy, RTPowerAssertion;

@interface RTPersistenceMirroringRequest : NSObject {

	unsigned long long _sid;
	NSObject*<OS_dispatch_queue> _queue;
	NSCloudKitMirroringRequest* _request;
	id<RTPersistenceMirroringRequestDelegate> _delegate;
	NSMutableArray* _completionHandlers;
	NSUUID* _identifier;
	NSDate* _startDate;
	NSDate* _enqueueDate;
	double _duration;
	unsigned long long _attemptCount;
	unsigned long long _maxRetryCount;
	RTPersistenceMirroringPolicy* _mirroringPolicy;
	NSObject*<OS_os_transaction> _mirroringTransaction;
	RTPowerAssertion* _mirroringAssertion;
	long long _requestType;

}

@property (nonatomic,readonly) NSUUID * identifier;                                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                                     //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * enqueueDate;                                                   //@synthesize enqueueDate=_enqueueDate - In the implementation block
@property (assign,nonatomic) double duration;                                                        //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned long long attemptCount;                                        //@synthesize attemptCount=_attemptCount - In the implementation block
@property (assign,nonatomic) unsigned long long maxRetryCount;                                       //@synthesize maxRetryCount=_maxRetryCount - In the implementation block
@property (nonatomic,retain) RTPersistenceMirroringPolicy * mirroringPolicy;                         //@synthesize mirroringPolicy=_mirroringPolicy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> mirroringTransaction;                      //@synthesize mirroringTransaction=_mirroringTransaction - In the implementation block
@property (nonatomic,retain) RTPowerAssertion * mirroringAssertion;                                  //@synthesize mirroringAssertion=_mirroringAssertion - In the implementation block
@property (assign,nonatomic) long long requestType;                                                  //@synthesize requestType=_requestType - In the implementation block
@property (getter=isReady,nonatomic,readonly) BOOL ready; 
@property (nonatomic,readonly) NSCloudKitMirroringRequest * request;                                 //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<RTPersistenceMirroringRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSMutableArray * completionHandlers;                                  //@synthesize completionHandlers=_completionHandlers - In the implementation block
-(unsigned long long)attemptCount;
-(void)setRequestType:(long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setAttemptCount:(unsigned long long)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)init;
-(long long)requestType;
-(id<RTPersistenceMirroringRequestDelegate>)delegate;
-(NSDate *)startDate;
-(void)setMaxRetryCount:(unsigned long long)arg1 ;
-(NSCloudKitMirroringRequest *)request;
-(void)setDelegate:(id<RTPersistenceMirroringRequestDelegate>)arg1 ;
-(id)description;
-(unsigned long long)maxRetryCount;
-(BOOL)isReady;
-(NSMutableArray *)completionHandlers;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(double)duration;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 requestType:(long long)arg2 mirroringPolicy:(id)arg3 affectedStores:(id)arg4 options:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_createMirroringRequestWithRequestType:(long long)arg1 affectedStores:(id)arg2 options:(id)arg3 ;
-(void)_dispatchAllHandlersWithError:(id)arg1 ;
-(void)handleMirroringRequestResult:(id)arg1 ;
-(void)_handleMirroringRequestResult:(id)arg1 ;
-(void)_completeRequestWithError:(id)arg1 ;
-(BOOL)isEqualToMirroringRequest:(id)arg1 ;
-(RTPersistenceMirroringPolicy *)mirroringPolicy;
-(void)setMirroringPolicy:(RTPersistenceMirroringPolicy *)arg1 ;
-(NSDate *)enqueueDate;
-(void)completeRequestWithError:(id)arg1 ;
-(id)requestTypeToString:(long long)arg1 ;
-(void)_prepareMirroringRequestForRetry:(id)arg1 ;
-(void)mergeRequest:(id)arg1 ;
-(void)executeMirroringRequestWithContext:(id)arg1 ;
-(void)setEnqueueDate:(NSDate *)arg1 ;
-(NSObject*<OS_os_transaction>)mirroringTransaction;
-(void)setMirroringTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(RTPowerAssertion *)mirroringAssertion;
-(void)setMirroringAssertion:(RTPowerAssertion *)arg1 ;
@end

