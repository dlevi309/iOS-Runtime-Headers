/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setStateChangedHandler:(id)arg1 ;
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)readWithRequest:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2 ;
-(id)stateChangedHandler;
-(void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3 ;
-(void)_abortReadsWithError:(id)arg1 ;
-(void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2 ;
-(id)init;
-(NSUUID *)peerIdentifier;
-(void)_ensureStarted;
-(id)peerHostStateChangedHandler;
-(void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_processWrites;
-(unsigned long long)_writeBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)writeWithRequest:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_abortWritesWithError:(id)arg1 ;
-(int)_readBytes:(char*)arg1 minLen:(unsigned long long)arg2 maxLen:(unsigned long long)arg3 offset:(unsigned long long*)arg4 ;
-(void)scalablePipeManagerDidUpdateState:(id)arg1 ;
-(void)_setupPipe;
-(NSString *)description;
-(void)_completeWriteRequest:(id)arg1 error:(id)arg2 ;
-(BOOL)_prepareWriteRequest:(id)arg1 error:(id*)arg2 ;
-(int)_writeIOArray:(iovec*)arg1 ioCount:(int*)arg2 ;
-(int)state;
-(void)invalidate;
-(void)_ensureStopped:(id)arg1 ;
-(void)_handleBTPeerHostStateChanged;
-(void)_completeReadRequest:(id)arg1 error:(id)arg2 ;
-(void)setPeerHostStateChangedHandler:(id)arg1 ;
-(void)setPeerIdentifier:(NSUUID *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSString *)identifier;
-(void)_tearDownPipe;
-(void)_prepareReadRequest:(id)arg1 ;
-(id)invalidationHandler;
-(int)priority;
-(NSString *)label;
-(void)setPriority:(int)arg1 ;
-(void)_processReads;
-(void)dealloc;
-(int)peerHostState;
@end

