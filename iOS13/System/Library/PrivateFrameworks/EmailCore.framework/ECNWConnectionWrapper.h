/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/EmailCore-Structs.h>
#import <libobjc.A.dylib/ECNWConnectionWrapper.h>
@class NSArray, NSString, NSError;


@protocol ECNWConnectionWrapper <EFCancelable>
@property (assign,nonatomic) unsigned timeout; 
@property (assign,nonatomic) BOOL allowsTrustPrompt; 
@property (assign,nonatomic) BOOL usesOpportunisticSockets; 
@property (assign,nonatomic) BOOL disableEphemeralDiffieHellmanCiphers; 
@property (nonatomic,retain) NSArray * clientCertificates; 
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier; 
@property (nonatomic,copy) NSString * accountIdentifier; 
@property (nonatomic,copy) NSString * networkAccountIdentifier; 
@property (nonatomic,copy) NSString * connectionServiceType; 
@property (nonatomic,copy,readonly) NSArray * serverCertificates; 
@property (nonatomic,copy,readonly) NSString * service; 
@property (nonatomic,readonly) NSString * remoteHostname; 
@property (nonatomic,readonly) unsigned remotePortNumber; 
@property (nonatomic,readonly) NSString * sourceIPAddressString; 
@property (nonatomic,readonly) BOOL isReadable; 
@property (nonatomic,readonly) BOOL isWritable; 
@property (nonatomic,readonly) BOOL isCellularConnection; 
@property (nonatomic,readonly) BOOL isConstrained; 
@property (nonatomic,readonly) BOOL isValid; 
@property (readonly) NSError * error; 
@property (nonatomic,copy) id networkActivityChangeBlock; 
@property (nonatomic,copy) id serverTrustHandler; 
@required
-(BOOL)isValid;
-(void)close;
-(NSError *)error;
-(unsigned)timeout;
-(void)setTimeout:(unsigned)arg1;
-(NSString *)accountIdentifier;
-(NSString *)service;
-(NSArray *)clientCertificates;
-(void)setClientCertificates:(id)arg1;
-(void)setAccountIdentifier:(id)arg1;
-(BOOL)isConstrained;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setSourceApplicationBundleIdentifier:(id)arg1;
-(BOOL)isWritable;
-(BOOL)isReadable;
-(long long)writeBytes:(const char*)arg1 length:(unsigned long long)arg2;
-(BOOL)isCellularConnection;
-(NSString *)connectionServiceType;
-(void)setConnectionServiceType:(id)arg1;
-(BOOL)allowsTrustPrompt;
-(void)setAllowsTrustPrompt:(BOOL)arg1;
-(NSString *)networkAccountIdentifier;
-(void)setNetworkAccountIdentifier:(id)arg1;
-(id)securityProtocol;
-(void)enableThroughputMonitoring:(BOOL)arg1;
-(BOOL)usesOpportunisticSockets;
-(void)setUsesOpportunisticSockets:(BOOL)arg1;
-(BOOL)setSecurityProtocol:(id)arg1;
-(void)setNetworkActivityChangeBlock:(/*^block*/id)arg1;
-(void)setServerTrustHandler:(/*^block*/id)arg1;
-(BOOL)connectToHost:(id)arg1 withPort:(unsigned)arg2 service:(id)arg3;
-(NSString *)remoteHostname;
-(unsigned)remotePortNumber;
-(NSArray *)serverCertificates;
-(long long)readBytesIntoBuffer:(char*)arg1 maxLength:(unsigned long long)arg2;
-(NSString *)sourceIPAddressString;
-(id)networkActivityChangeBlock;
-(void)registerForBytesAvailableWithHandler:(/*^block*/id)arg1;
-(void)unregisterForBytesAvailable;
-(BOOL)disableEphemeralDiffieHellmanCiphers;
-(void)setDisableEphemeralDiffieHellmanCiphers:(BOOL)arg1;
-(id)serverTrustHandler;

@end


@protocol OS_dispatch_queue, OS_nw_connection, OS_dispatch_semaphore, OS_nw_endpoint, OS_dispatch_group, OS_nw_error;
@class NSArray, NSString, NSError, NSObject, NSConditionLock, NSData;

@interface ECNWConnectionWrapper : NSObject <ECNWConnectionWrapper> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_nw_connection> _connection;
	int _connectionState;
	NSObject*<OS_dispatch_semaphore> _eventSemaphore;
	os_unfair_lock_s _lock;
	NSObject*<OS_nw_endpoint> _endpoint;
	NSConditionLock* _readBufferLock;
	NSObject*<OS_dispatch_group> _writeGroup;
	BOOL _readScheduled;
	NSObject*<OS_nw_error> _readError;
	NSData* _buffer;
	unsigned long long _bufferOffset;
	NSString* _securityProtocol;
	NSString* _service;
	BOOL _readable;
	BOOL _writable;
	double _connectTime;
	BOOL _allowsTrustPrompt;
	BOOL _disableEphemeralDiffieHellmanCiphers;
	BOOL _usesOpportunisticSockets;
	unsigned _timeout;
	NSString* _accountIdentifier;
	NSArray* _clientCertificates;
	NSString* _connectionServiceType;
	NSError* _error;
	NSString* _networkAccountIdentifier;
	/*^block*/id _networkActivityChangeBlock;
	NSArray* _serverCertificates;
	/*^block*/id _serverTrustHandler;
	NSString* _sourceApplicationBundleIdentifier;
	/*^block*/id _bytesAvailableHandler;

}

@property (copy) id bytesAvailableHandler;                                            //@synthesize bytesAvailableHandler=_bytesAvailableHandler - In the implementation block
@property (retain) NSError * error;                                                   //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned timeout;                                        //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) BOOL allowsTrustPrompt;                                  //@synthesize allowsTrustPrompt=_allowsTrustPrompt - In the implementation block
@property (assign,nonatomic) BOOL usesOpportunisticSockets;                           //@synthesize usesOpportunisticSockets=_usesOpportunisticSockets - In the implementation block
@property (assign,nonatomic) BOOL disableEphemeralDiffieHellmanCiphers;               //@synthesize disableEphemeralDiffieHellmanCiphers=_disableEphemeralDiffieHellmanCiphers - In the implementation block
@property (nonatomic,retain) NSArray * clientCertificates;                            //@synthesize clientCertificates=_clientCertificates - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier;              //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * networkAccountIdentifier;                       //@synthesize networkAccountIdentifier=_networkAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * connectionServiceType;                          //@synthesize connectionServiceType=_connectionServiceType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * serverCertificates;                     //@synthesize serverCertificates=_serverCertificates - In the implementation block
@property (nonatomic,copy,readonly) NSString * service;                               //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSString * remoteHostname; 
@property (nonatomic,readonly) unsigned remotePortNumber; 
@property (nonatomic,readonly) NSString * sourceIPAddressString; 
@property (nonatomic,readonly) BOOL isReadable; 
@property (nonatomic,readonly) BOOL isWritable; 
@property (nonatomic,readonly) BOOL isCellularConnection; 
@property (nonatomic,readonly) BOOL isConstrained; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,copy) id networkActivityChangeBlock;                             //@synthesize networkActivityChangeBlock=_networkActivityChangeBlock - In the implementation block
@property (nonatomic,copy) id serverTrustHandler;                                     //@synthesize serverTrustHandler=_serverTrustHandler - In the implementation block
+(id)log;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(BOOL)isValid;
-(void)close;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(unsigned)timeout;
-(void)setTimeout:(unsigned)arg1 ;
-(NSString *)accountIdentifier;
-(NSString *)service;
-(NSArray *)clientCertificates;
-(void)setClientCertificates:(NSArray *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(BOOL)isConstrained;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(BOOL)isWritable;
-(BOOL)isReadable;
-(long long)writeBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)isCellularConnection;
-(NSString *)connectionServiceType;
-(void)setConnectionServiceType:(NSString *)arg1 ;
-(BOOL)allowsTrustPrompt;
-(void)setAllowsTrustPrompt:(BOOL)arg1 ;
-(NSString *)networkAccountIdentifier;
-(void)setNetworkAccountIdentifier:(NSString *)arg1 ;
-(id)securityProtocol;
-(void)enableThroughputMonitoring:(BOOL)arg1 ;
-(BOOL)usesOpportunisticSockets;
-(void)setUsesOpportunisticSockets:(BOOL)arg1 ;
-(BOOL)setSecurityProtocol:(id)arg1 ;
-(void)setNetworkActivityChangeBlock:(id)arg1 ;
-(void)setServerTrustHandler:(id)arg1 ;
-(BOOL)connectToHost:(id)arg1 withPort:(unsigned)arg2 service:(id)arg3 ;
-(NSString *)remoteHostname;
-(unsigned)remotePortNumber;
-(NSArray *)serverCertificates;
-(long long)readBytesIntoBuffer:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(NSString *)sourceIPAddressString;
-(void)_closeWithError:(id)arg1 ;
-(void)_closeWithErrorDomain:(id)arg1 code:(long long)arg2 ;
-(id)_createConnectionWithEndpoint:(id)arg1 error:(int*)arg2 ;
-(void)_handleConnectionReady;
-(void)_handleConnectionFailure:(int)arg1 ;
-(void)_networkActivityStarted;
-(void)_networkActivityEnded;
-(id)_negotiatedSecurityProtocol;
-(void)_scheduleNextRead;
-(void)_configureTLS:(id)arg1 ;
-(id)networkActivityChangeBlock;
-(id)bytesAvailableHandler;
-(void)setBytesAvailableHandler:(id)arg1 ;
-(void)registerForBytesAvailableWithHandler:(/*^block*/id)arg1 ;
-(void)unregisterForBytesAvailable;
-(BOOL)disableEphemeralDiffieHellmanCiphers;
-(void)setDisableEphemeralDiffieHellmanCiphers:(BOOL)arg1 ;
-(id)serverTrustHandler;
@end

