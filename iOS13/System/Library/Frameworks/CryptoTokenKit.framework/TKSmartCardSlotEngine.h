/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <libobjc.A.dylib/TKProtocolSmartCardSlot.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_source, OS_os_log, TKSmartCardSlotDelegate, OS_dispatch_queue;
@class TKSmartCardATR, NSObject, NSXPCConnection, NSXPCListener, NSHashTable, NSMutableArray, NSMapTable, TKPowerMonitor, NSXPCListenerEndpoint, NSString, TKSmartCardSessionEngine;

@interface TKSmartCardSlotEngine : NSObject <TKProtocolSmartCardSlot, NSXPCListenerDelegate> {

	unsigned long long _lastId;
	long long _state;
	long long _powerState;
	long long _previousState;
	TKSmartCardATR* _atr;
	unsigned long long _protocol;
	NSObject*<OS_dispatch_source> _idlePowerDownSource;
	NSXPCConnection* _registrationConnection;
	NSXPCListener* _listener;
	NSHashTable* _clients;
	NSMutableArray* _sessionRequests;
	NSMutableArray* _powerRequests;
	NSMapTable* _reservations;
	TKPowerMonitor* _powerMonitor;
	NSObject*<OS_os_log> _log;
	BOOL _securePINVerificationSupported;
	BOOL _securePINChangeSupported;
	BOOL _synchronousSetup;
	BOOL _apduSentSinceLastReset;
	long long _maxInputLength;
	long long _maxOutputLength;
	NSXPCListenerEndpoint* _serverEndpoint;
	id<TKSmartCardSlotDelegate> _delegate;
	NSString* _name;
	NSObject*<OS_dispatch_queue> _queue;
	TKSmartCardSessionEngine* _session;

}

@property (__weak) id<TKSmartCardSlotDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (assign) BOOL apduSentSinceLastReset;                         //@synthesize apduSentSinceLastReset=_apduSentSinceLastReset - In the implementation block
@property (__weak) TKSmartCardSessionEngine * session;                  //@synthesize session=_session - In the implementation block
@property (assign) long long maxInputLength;                            //@synthesize maxInputLength=_maxInputLength - In the implementation block
@property (assign) long long maxOutputLength;                           //@synthesize maxOutputLength=_maxOutputLength - In the implementation block
@property (assign) BOOL securePINVerificationSupported;                 //@synthesize securePINVerificationSupported=_securePINVerificationSupported - In the implementation block
@property (assign) BOOL securePINChangeSupported;                       //@synthesize securePINChangeSupported=_securePINChangeSupported - In the implementation block
@property (retain) NSXPCListenerEndpoint * serverEndpoint;              //@synthesize serverEndpoint=_serverEndpoint - In the implementation block
@property (assign) BOOL synchronousSetup;                               //@synthesize synchronousSetup=_synchronousSetup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<TKSmartCardSlotDelegate>)delegate;
-(void)setDelegate:(id<TKSmartCardSlotDelegate>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)terminate;
-(TKSmartCardSessionEngine *)session;
-(void)setSession:(TKSmartCardSessionEngine *)arg1 ;
-(NSXPCListenerEndpoint *)serverEndpoint;
-(void)setServerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)resetWithReply:(/*^block*/id)arg1 ;
-(long long)maxOutputLength;
-(void)setupSlotWithReply:(/*^block*/id)arg1 ;
-(void)reserveProtocols:(id)arg1 reservationId:(id)arg2 exclusive:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(void)sessionWithParameters:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)sendControl:(id)arg1 data:(id)arg2 expectedLength:(unsigned)arg3 reply:(/*^block*/id)arg4 ;
-(void)getAttrib:(unsigned)arg1 reply:(/*^block*/id)arg2 ;
-(void)setAttrib:(unsigned)arg1 data:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)runUserInteraction:(id)arg1 reply:(/*^block*/id)arg2 ;
-(long long)maxInputLength;
-(BOOL)securePINVerificationSupported;
-(void)setSecurePINVerificationSupported:(BOOL)arg1 ;
-(BOOL)securePINChangeSupported;
-(void)setSecurePINChangeSupported:(BOOL)arg1 ;
-(void)_setupWithName:(id)arg1 delegate:(id)arg2 firstPass:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)synchronousSetup;
-(id)slotRegistryWithErrorHandler:(/*^block*/id)arg1 ;
-(void)logWithBytes:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)dictionaryForState:(long long)arg1 ;
-(void)changeStateTo:(long long)arg1 powerState:(long long)arg2 ;
-(void)powerRequestFinished;
-(void)powerDownWithEject:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)schedulePowerRequest:(/*^block*/id)arg1 ;
-(void)scheduleIdlePowerDown;
-(void)setProtocol:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)leaveSession:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)connectCardSessionWithParameters:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_findReservation:(id)arg1 connection:(id)arg2 ;
-(id)_getReservationId;
-(void)setupWithName:(id)arg1 delegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)cardPresent:(BOOL)arg1 ;
-(void)setMaxInputLength:(long long)arg1 ;
-(void)setMaxOutputLength:(long long)arg1 ;
-(void)setSynchronousSetup:(BOOL)arg1 ;
-(BOOL)apduSentSinceLastReset;
-(void)setApduSentSinceLastReset:(BOOL)arg1 ;
@end

