/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CATTaskClientDelegate.h>
#import <libobjc.A.dylib/CRKRequestPerformingProtocol.h>

@class CATTaskClient, CATOperationQueue, NSHashTable, NSString;

@interface CRKStudentDaemonProxy : NSObject <CATTaskClientDelegate, CRKRequestPerformingProtocol> {

	CATTaskClient* mTaskClient;
	CATOperationQueue* mOperationQueue;
	NSHashTable* mObservers;
	long long mConnectionAttempt;
	BOOL mConnecting;
	BOOL _connected;
	BOOL _userExpectsReconnect;
	long long _maxConnectionAttempts;

}

@property (assign,getter=isConnected,nonatomic) BOOL connected;              //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) BOOL userExpectsReconnect;                      //@synthesize userExpectsReconnect=_userExpectsReconnect - In the implementation block
@property (assign,nonatomic) long long maxConnectionAttempts;                //@synthesize maxConnectionAttempts=_maxConnectionAttempts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setActiveStudentIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)studentDidAuthenticate:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)fetchResourceFromURL:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)studentDaemonConnection;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)disconnect;
-(void)connect;
-(BOOL)isConnected;
-(void)setConnected:(BOOL)arg1 ;
-(void)enqueueOperation:(id)arg1 ;
-(void)clientDidDisconnect:(id)arg1 ;
-(void)client:(id)arg1 didInterruptWithError:(id)arg2 ;
-(void)clientDidConnect:(id)arg1 ;
-(void)client:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(id)operationForRequest:(id)arg1 ;
-(id)enqueuedOperationForRequest:(id)arg1 ;
-(void)setUserExpectsReconnect:(BOOL)arg1 ;
-(BOOL)userExpectsReconnect;
-(long long)maxConnectionAttempts;
-(void)setMaxConnectionAttempts:(long long)arg1 ;
@end

