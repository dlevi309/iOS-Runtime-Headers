/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSXPCConnection, NSMutableSet;

@interface Client : NSObject {

	long long _activeMessageCount;
	long long _barrierMessageCount;
	long long _droppedMessageCount;
	BOOL _shouldSendMessages;
	BOOL _forceUpdateOnWake;
	NSXPCConnection* _connection;
	NSMutableSet* _subscribedNOIs;

}

@property (nonatomic,retain) NSXPCConnection * connection;               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableSet * subscribedNOIs;              //@synthesize subscribedNOIs=_subscribedNOIs - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setSubscribedNOIs:(NSMutableSet *)arg1 ;
-(BOOL)_shouldSendMessages;
-(void)_decrementMessageCounter:(long long)arg1 ;
-(NSMutableSet *)subscribedNOIs;
-(void)_incrementMessageCounter:(long long)arg1 ;
-(id)description;
-(void)_sendBarrierIfNecessaryWithBlock:(/*^block*/id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initWithConn:(id)arg1 ;
@end

