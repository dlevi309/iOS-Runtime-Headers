/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <libobjc.A.dylib/SYStateLoggable.h>

@protocol SYSyncEngineResponder, OS_os_transaction, OS_os_activity, OS_dispatch_queue;
@class NSObject, SYService, NSString, PBCodable;

@interface SYSyncEngine : NSObject <SYStateLoggable> {

	id<SYSyncEngineResponder> _responder;
	NSObject*<OS_os_transaction> _transaction;
	NSObject*<OS_os_activity> _transportActivity;
	SYService* _service;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<SYSyncEngineResponder> responder; 
@property (nonatomic,readonly) NSObject*<OS_os_activity> transportActivity;              //@synthesize transportActivity=_transportActivity - In the implementation block
@property (nonatomic,readonly) BOOL isInSession; 
@property (nonatomic,readonly) BOOL buffersSessions; 
@property (nonatomic,readonly) BOOL buffersHandshake; 
@property (nonatomic,__weak,readonly) SYService * service;                               //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) BOOL targetIsNearby; 
@property (nonatomic,readonly) BOOL targetConnected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PBCodable * stateForLogging; 
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)suspend;
-(void)endSession;
-(SYService *)service;
-(id<SYSyncEngineResponder>)responder;
-(void)setResponder:(id<SYSyncEngineResponder>)arg1 ;
-(BOOL)resume:(id*)arg1 ;
-(void)enqueueSyncRequest:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(/*^block*/id)arg6 ;
-(BOOL)buffersSessions;
-(PBCodable *)stateForLogging;
-(BOOL)targetIsNearby;
-(BOOL)targetConnected;
-(void)beginSession;
-(id)initWithService:(id)arg1 queue:(id)arg2 ;
-(BOOL)buffersHandshake;
-(id)outputStreamWithMetadata:(id)arg1 priority:(long long)arg2 options:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
-(BOOL)isInSession;
-(NSObject*<OS_os_activity>)transportActivity;
-(id)cancelMessagesReturningFailures:(id)arg1 ;
@end

