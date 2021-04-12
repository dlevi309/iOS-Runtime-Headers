/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CBScalablePipeManagerDelegate.h>
#import <libobjc.A.dylib/CUReadWriteRequestable.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class CBScalablePipe, CBScalablePipeManager, CUReadRequest, NSMutableArray, NSObject, CUWriteRequest, NSString, NSUUID;

@interface CUBluetoothScalablePipe : NSObject <CBScalablePipeManagerDelegate, CUReadWriteRequestable> {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	channelRef _btChannel;
	BOOL _btEndpointRegistering;
	BOOL _btEndpointRegistered;
	int _btPeerHostState;
	BOOL _btPeerKVORegistered;
	CBScalablePipe* _btPipe;
	CBScalablePipeManager* _btPipeManager;
	channel_ring_descRef _btReadRing;
	char* _btReadLeftoverBuf;
	unsigned long long _btReadLeftoverMaxLen;
	char* _btReadLeftoverPtr;
	char* _btReadLeftoverEnd;
	channel_ring_descRef _btWriteRing;
	int _channelFD;
	CUReadRequest* _readRequestCurrent;
	NSMutableArray* _readRequests;
	NSObject*<OS_dispatch_source> _readSource;
	BOOL _readSuspended;
	CUWriteRequest* _writeRequestCurrent;
	NSMutableArray* _writeRequests;
	NSObject*<OS_dispatch_source> _writeSource;
	BOOL _writeSuspended;
	int _peerHostState;
	int _priority;
	int _state;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _identifier;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSUUID* _peerIdentifier;
	/*^block*/id _peerHostStateChangedHandler;
	/*^block*/id _stateChangedHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSUUID * peerIdentifier;                                   //@synthesize peerIdentifier=_peerIdentifier - In the implementation block
@property (nonatomic,readonly) int peerHostState;                                     //@synthesize peerHostState=_peerHostState - In the implementation block
@property (nonatomic,copy) id peerHostStateChangedHandler;                            //@synthesize peerHostStateChangedHandler=_peerHostStateChangedHandler - In the implementation block
@property (assign,nonatomic) int priority;                                            //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) int state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id stateChangedHandler;                                    //@synthesize stateChangedHandler=_stateChangedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(void)_invalidate;
-(NSString *)identifier;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(int)state;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_ensureStarted;
-(void)readWithRequest:(id)arg1 ;
-(void)writeWithRequest:(id)arg1 ;
-(void)_prepareReadRequest:(id)arg1 ;
-(void)_abortReadsWithError:(id)arg1 ;
-(void)_completeReadRequest:(id)arg1 error:(id)arg2 ;
-(void)_processWrites;
-(BOOL)_prepareWriteRequest:(id)arg1 error:(id*)arg2 ;
-(void)_abortWritesWithError:(id)arg1 ;
-(void)_completeWriteRequest:(id)arg1 error:(id)arg2 ;
-(void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3 ;
-(void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2 ;
-(void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2 ;
-(void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3 ;
-(void)scalablePipeManagerDidUpdateState:(id)arg1 ;
-(void)_ensureStopped:(id)arg1 ;
-(void)_setupPipe;
-(void)_tearDownPipe;
-(void)_handleBTPeerHostStateChanged;
-(void)_processReads;
-(int)_readBytes:(char*)arg1 minLen:(unsigned long long)arg2 maxLen:(unsigned long long)arg3 offset:(unsigned long long*)arg4 ;
-(int)_writeIOArray:(iovec*)arg1 ioCount:(int*)arg2 ;
-(unsigned long long)_writeBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(NSUUID *)peerIdentifier;
-(void)setPeerIdentifier:(NSUUID *)arg1 ;
-(int)peerHostState;
-(id)peerHostStateChangedHandler;
-(void)setPeerHostStateChangedHandler:(id)arg1 ;
-(id)stateChangedHandler;
-(void)setStateChangedHandler:(id)arg1 ;
@end

