/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSMutableSet, NSObject, CUBonjourAdvertiser, NSString, CUNetLinkManager;

@interface CUTCPServer : NSObject {

	NSMutableSet* _connections;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSObject*<OS_dispatch_source> _listenerSourceV4;
	NSObject*<OS_dispatch_source> _listenerSourceV6;
	LogCategory* _ucat;
	unsigned _flags;
	unsigned _maxConnectionCount;
	int _tcpListenPort;
	int _tcpListeningPort;
	CUBonjourAdvertiser* _bonjourAdvertiser;
	/*^block*/id _connectionAcceptHandler;
	/*^block*/id _connectionStartedHandler;
	/*^block*/id _connectionEndedHandler;
	/*^block*/id _connectionPrepareHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	CUNetLinkManager* _netLinkManager;
	SCD_Union_CU22 _interfaceAddress;

}

@property (nonatomic,retain) CUBonjourAdvertiser * bonjourAdvertiser;                 //@synthesize bonjourAdvertiser=_bonjourAdvertiser - In the implementation block
@property (nonatomic,copy) id connectionAcceptHandler;                                //@synthesize connectionAcceptHandler=_connectionAcceptHandler - In the implementation block
@property (nonatomic,copy) id connectionStartedHandler;                               //@synthesize connectionStartedHandler=_connectionStartedHandler - In the implementation block
@property (nonatomic,copy) id connectionEndedHandler;                                 //@synthesize connectionEndedHandler=_connectionEndedHandler - In the implementation block
@property (nonatomic,copy) id connectionPrepareHandler;                               //@synthesize connectionPrepareHandler=_connectionPrepareHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned flags;                                          //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* interfaceAddress;              //@synthesize interfaceAddress=_interfaceAddress - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned maxConnectionCount;                             //@synthesize maxConnectionCount=_maxConnectionCount - In the implementation block
@property (nonatomic,retain) CUNetLinkManager * netLinkManager;                       //@synthesize netLinkManager=_netLinkManager - In the implementation block
@property (assign,nonatomic) int tcpListenPort;                                       //@synthesize tcpListenPort=_tcpListenPort - In the implementation block
@property (assign,nonatomic) int tcpListeningPort;                                    //@synthesize tcpListeningPort=_tcpListeningPort - In the implementation block
-(id)detailedDescription;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setConnectionStartedHandler:(id)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)flags;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(CUNetLinkManager *)netLinkManager;
-(void)setNetLinkManager:(CUNetLinkManager *)arg1 ;
-(void)_handleConnectionAccept:(int)arg1 ;
-(void)_handleConnectionInvalidated:(id)arg1 addr:(const /*function pointer*/void**)arg2 ;
-(CUBonjourAdvertiser *)bonjourAdvertiser;
-(void)setBonjourAdvertiser:(CUBonjourAdvertiser *)arg1 ;
-(id)connectionAcceptHandler;
-(void)setConnectionAcceptHandler:(id)arg1 ;
-(id)connectionPrepareHandler;
-(void)setConnectionPrepareHandler:(id)arg1 ;
-(/*function pointer*/void*)interfaceAddress;
-(void)setInterfaceAddress:(/*function pointer*/void*)arg1 ;
-(unsigned)maxConnectionCount;
-(void)setMaxConnectionCount:(unsigned)arg1 ;
-(int)tcpListenPort;
-(void)setTcpListenPort:(int)arg1 ;
-(int)tcpListeningPort;
-(void)setTcpListeningPort:(int)arg1 ;
-(id)description;
-(BOOL)activateDirectAndReturnError:(id*)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)_invalidated;
-(void)invalidate;
-(void)setConnectionEndedHandler:(id)arg1 ;
-(id)connectionEndedHandler;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSString *)label;
-(id)connectionStartedHandler;
-(void)dealloc;
@end

