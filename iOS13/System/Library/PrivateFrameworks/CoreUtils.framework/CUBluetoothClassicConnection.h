/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CUReadWriteRequestable.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, CUReadRequest, NSMutableArray, CUWriteRequest, NSString, CBL2CAPChannel;

@interface CUBluetoothClassicConnection : NSObject <CUReadWriteRequestable> {

	/*^block*/id _activateCompletion;
	BOOL _connected;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSObject*<OS_dispatch_source> _readSource;
	unsigned char _readSuspended;
	CUReadRequest* _readRequestCurrent;
	NSMutableArray* _readRequests;
	int _socketFD;
	int _state;
	NSObject*<OS_dispatch_source> _writeSource;
	unsigned char _writeSuspended;
	CUWriteRequest* _writeRequestCurrent;
	NSMutableArray* _writeRequests;
	LogCategory* _ucat;
	NSString* _destinationPeer;
	NSString* _destinationService;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _errorHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	CBL2CAPChannel* _l2capChannel;
	/*^block*/id _serverInvalidationHandler;

}

@property (nonatomic,retain) CBL2CAPChannel * l2capChannel;                           //@synthesize l2capChannel=_l2capChannel - In the implementation block
@property (nonatomic,copy) id serverInvalidationHandler;                              //@synthesize serverInvalidationHandler=_serverInvalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * destinationPeer;                                //@synthesize destinationPeer=_destinationPeer - In the implementation block
@property (nonatomic,copy) NSString * destinationService;                             //@synthesize destinationService=_destinationService - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidated;
-(void)_run;
-(void)_reportError:(id)arg1 ;
-(void)readWithRequest:(id)arg1 ;
-(void)writeWithRequest:(id)arg1 ;
-(BOOL)activateDirectAndReturnError:(id*)arg1 ;
-(BOOL)_startConnectingAndReturnError:(id*)arg1 ;
-(BOOL)_setupIOAndReturnError:(id*)arg1 ;
-(BOOL)_runConnectStart;
-(BOOL)_runSetupChannel;
-(void)_processReads:(BOOL)arg1 ;
-(void)_prepareReadRequest:(id)arg1 ;
-(void)_abortReadsWithError:(id)arg1 ;
-(BOOL)_processReadStatus;
-(void)_completeReadRequest:(id)arg1 error:(id)arg2 ;
-(void)writeEndOfDataWithCompletion:(/*^block*/id)arg1 ;
-(void)_processWrites;
-(BOOL)_prepareWriteRequest:(id)arg1 error:(id*)arg2 ;
-(void)_abortWritesWithError:(id)arg1 ;
-(void)_completeWriteRequest:(id)arg1 error:(id)arg2 ;
-(CBL2CAPChannel *)l2capChannel;
-(void)setL2capChannel:(CBL2CAPChannel *)arg1 ;
-(id)serverInvalidationHandler;
-(void)setServerInvalidationHandler:(id)arg1 ;
-(BOOL)_runOpenChannelStart;
-(NSString *)destinationPeer;
-(void)setDestinationPeer:(NSString *)arg1 ;
-(NSString *)destinationService;
-(void)setDestinationService:(NSString *)arg1 ;
@end

