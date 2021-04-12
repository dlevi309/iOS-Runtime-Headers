/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)_shouldSendMessages;
-(void)_incrementMessageCounter:(long long)arg1 ;
-(void)_decrementMessageCounter:(long long)arg1 ;
-(NSMutableSet *)subscribedNOIs;
-(void)_sendBarrierIfNecessaryWithBlock:(/*^block*/id)arg1 ;
-(id)initWithConn:(id)arg1 ;
-(void)setSubscribedNOIs:(NSMutableSet *)arg1 ;
@end

