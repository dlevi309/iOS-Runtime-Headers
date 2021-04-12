/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <libobjc.A.dylib/CUXPCCodable.h>
#import <libobjc.A.dylib/CBActivatable.h>
#import <libobjc.A.dylib/CBLabelable.h>
#import <libobjc.A.dylib/CBStateReporting.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSString, NSObject;

@interface CBController : NSObject <CUXPCCodable, CBActivatable, CBLabelable, CBStateReporting> {

	BOOL _activateAssertionCalled;
	BOOL _activateCalled;
	/*^block*/id _activateCompletion;
	BOOL _changesPending;
	BOOL _direct;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	NSObject*<OS_xpc_object> _xpcCnx;
	int _discoverableState;
	int _inquiryState;
	unsigned _assertionFlags;
	unsigned _clientID;
	unsigned _internalFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	long long _bluetoothState;
	/*^block*/id _bluetoothStateChangedHandler;
	/*^block*/id _discoverableStateChangedHandler;
	/*^block*/id _errorHandler;
	/*^block*/id _inquiryStateChangedHandler;
	/*^block*/id _interruptionHandler;
	NSObject*<OS_xpc_object> _testListenerEndpoint;

}

@property (assign,nonatomic) unsigned assertionFlags;                                    //@synthesize assertionFlags=_assertionFlags - In the implementation block
@property (assign,nonatomic) unsigned clientID;                                          //@synthesize clientID=_clientID - In the implementation block
@property (assign,nonatomic) unsigned internalFlags;                                     //@synthesize internalFlags=_internalFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> testListenerEndpoint;              //@synthesize testListenerEndpoint=_testListenerEndpoint - In the implementation block
@property (nonatomic,readonly) int discoverableState;                                    //@synthesize discoverableState=_discoverableState - In the implementation block
@property (nonatomic,copy) id discoverableStateChangedHandler;                           //@synthesize discoverableStateChangedHandler=_discoverableStateChangedHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                                              //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,readonly) int inquiryState;                                         //@synthesize inquiryState=_inquiryState - In the implementation block
@property (nonatomic,copy) id inquiryStateChangedHandler;                                //@synthesize inquiryStateChangedHandler=_inquiryStateChangedHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                       //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                 //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                       //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                             //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) long long bluetoothState;                                 //@synthesize bluetoothState=_bluetoothState - In the implementation block
@property (nonatomic,copy) id bluetoothStateChangedHandler;                              //@synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler - In the implementation block
+(unsigned)featureFlags;
-(long long)bluetoothState;
-(id)bluetoothStateChangedHandler;
-(unsigned)clientID;
-(void)_updateIfNeededWithBlock:(/*^block*/id)arg1 ;
-(void)_activateXPCCompleted:(id)arg1 ;
-(void)_xpcReceivedMessage:(id)arg1 ;
-(void)setTestListenerEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(id)errorHandler;
-(void)setClientID:(unsigned)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setBluetoothStateChangedHandler:(id)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(void)setInternalFlags:(unsigned)arg1 ;
-(void)encodeWithXPCObject:(id)arg1 ;
-(id)init;
-(unsigned)internalFlags;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_activateXPCStart:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidateDirect;
-(id)_ensureXPCStarted;
-(void)_activate;
-(id)descriptionWithLevel:(int)arg1 ;
-(NSObject*<OS_xpc_object>)testListenerEndpoint;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)description;
-(void)_interrupted;
-(int)inquiryState;
-(void)_xpcReceivedEvent:(id)arg1 ;
-(void)_activateAssertionWithFlagsXPC:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)_xpcReceivedDiscoverableStateChanged:(id)arg1 ;
-(void)_xpcReceivedInquiryStateChanged:(id)arg1 ;
-(void)_activateAssertionWithFlagsDirect:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)activateAssertionWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)diagnosticLog:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPowerStateWithCompletion:(/*^block*/id)arg1 ;
-(unsigned)assertionFlags;
-(void)_invalidated;
-(void)setPowerState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateIdentities:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)discoverableState;
-(id)discoverableStateChangedHandler;
-(void)setDiscoverableStateChangedHandler:(id)arg1 ;
-(id)inquiryStateChangedHandler;
-(void)setInquiryStateChangedHandler:(id)arg1 ;
-(void)setAssertionFlags:(unsigned)arg1 ;
-(void)_update;
-(void)diagnosticControl:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)invalidate;
-(void)diagnosticShow:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_activateDirectStart;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSString *)label;
-(void)_xpcReceivedPowerStateChanged:(id)arg1 ;
-(id)interruptionHandler;
-(void)dealloc;
@end

