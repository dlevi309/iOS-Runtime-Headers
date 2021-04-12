/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
*/

#import <libobjc.A.dylib/IDSSessionDelegatePrivate.h>
#import <libobjc.A.dylib/IDSServiceDelegatePrivate.h>

@protocol OS_dispatch_queue;
@class IDSService, NSObject, NSMutableDictionary, NSMutableArray, NSString;

@interface IDSConnectionsQueue : NSObject <IDSSessionDelegatePrivate, IDSServiceDelegatePrivate> {

	IDSService* _service;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _allConnections;
	NSMutableArray* _pendingConnections;
	NSMutableArray* _endedConnections;

}

@property (nonatomic,retain) IDSService * service;                              //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allConnections;              //@synthesize allConnections=_allConnections - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingConnections;               //@synthesize pendingConnections=_pendingConnections - In the implementation block
@property (nonatomic,retain) NSMutableArray * endedConnections;                 //@synthesize endedConnections=_endedConnections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(IDSService *)service;
-(void)setService:(IDSService *)arg1 ;
-(void)sessionStarted:(id)arg1 ;
-(void)sessionEnded:(id)arg1 ;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3 ;
-(void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withOptions:(id)arg5 ;
-(void)setPendingConnections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)pendingConnections;
-(NSMutableDictionary *)allConnections;
-(NSMutableArray *)endedConnections;
-(id)initWithIDSService:(id)arg1 queue:(id)arg2 ;
-(void)queueNewSessionForDestination:(id)arg1 ;
-(void)dequeSession:(id)arg1 ;
-(void)setAllConnections:(NSMutableDictionary *)arg1 ;
-(void)setEndedConnections:(NSMutableArray *)arg1 ;
@end

