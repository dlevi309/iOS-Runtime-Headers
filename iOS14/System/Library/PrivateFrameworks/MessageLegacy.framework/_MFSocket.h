/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


#import <MessageLegacy/MessageLegacy-Structs.h>
@class NSCondition, NSString, NSInvocation, NSArray, MFStream, NSData;

@interface _MFSocket : NSObject {

	NSCondition* _condition;
	NSString* _protocol;
	NSString* _host;
	NSString* _service;
	CFStringRef _connectionServiceType;
	NSInvocation* _eventHandler;
	NSArray* _clientCertificates;
	int _lowThroughputCounter;
	int _numTimeoutSecs;
	BOOL _allowsTrustPrompt;
	BOOL _usesOpportunisticSockets;
	BOOL _socketCanRead;
	BOOL _socketCanWrite;
	BOOL _disableEphemeralDiffieHellmanCiphers;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _accountIdentifier;
	NSString* _networkAccountIdentifier;
	MFStream* _stream;

}

@property (retain) MFStream * stream;                                                 //@synthesize stream=_stream - In the implementation block
@property (assign,nonatomic) int timeout;                                             //@synthesize numTimeoutSecs=_numTimeoutSecs - In the implementation block
@property (assign,nonatomic) BOOL allowsTrustPrompt;                                  //@synthesize allowsTrustPrompt=_allowsTrustPrompt - In the implementation block
@property (assign,nonatomic) BOOL usesOpportunisticSockets;                           //@synthesize usesOpportunisticSockets=_usesOpportunisticSockets - In the implementation block
@property (assign,nonatomic) BOOL disableEphemeralDiffieHellmanCiphers;               //@synthesize disableEphemeralDiffieHellmanCiphers=_disableEphemeralDiffieHellmanCiphers - In the implementation block
@property (nonatomic,retain) NSArray * clientCertificates;                            //@synthesize clientCertificates=_clientCertificates - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier;              //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * networkAccountIdentifier;                       //@synthesize networkAccountIdentifier=_networkAccountIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * serverCertificates; 
@property (nonatomic,readonly) NSString * remoteHostname; 
@property (nonatomic,readonly) unsigned remotePortNumber; 
@property (nonatomic,readonly) NSData * sourceIPAddress; 
@property (nonatomic,readonly) BOOL isReadable; 
@property (nonatomic,readonly) BOOL isWritable; 
@property (nonatomic,readonly) BOOL isCellularConnection; 
@property (nonatomic,readonly) BOOL isValid; 
-(void)abort;
-(MFStream *)stream;
-(void)setEventHandler:(id)arg1 ;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setStream:(MFStream *)arg1 ;
-(BOOL)isReadable;
-(id)init;
-(NSString *)accountIdentifier;
-(void)setTimeout:(int)arg1 ;
-(int)timeout;
-(NSString *)remoteHostname;
-(BOOL)isValid;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(BOOL)isWritable;
-(NSArray *)clientCertificates;
-(void)setClientCertificates:(NSArray *)arg1 ;
-(void)setConnectionServiceType:(CFStringRef)arg1 ;
-(BOOL)allowsTrustPrompt;
-(void)setAllowsTrustPrompt:(BOOL)arg1 ;
-(NSString *)networkAccountIdentifier;
-(void)setNetworkAccountIdentifier:(NSString *)arg1 ;
-(id)securityProtocol;
-(void)enableThroughputMonitoring:(BOOL)arg1 ;
-(BOOL)usesOpportunisticSockets;
-(void)setUsesOpportunisticSockets:(BOOL)arg1 ;
-(BOOL)setSecurityProtocol:(id)arg1 ;
-(BOOL)_evaluateTrust:(SecTrustRef)arg1 errorPtr:(id*)arg2 ;
-(BOOL)connectToHost:(id)arg1 withPort:(unsigned)arg2 service:(id)arg3 ;
-(long long)writeBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)_certificateIsTrustedForAccount:(id)arg1 ;
-(void)_setCertificateIsTrusted:(BOOL)arg1 forAccount:(id)arg2 ;
-(unsigned)remotePortNumber;
-(NSArray *)serverCertificates;
-(BOOL)isCellularConnection;
-(void)dealloc;
-(BOOL)disableEphemeralDiffieHellmanCiphers;
-(void)setDisableEphemeralDiffieHellmanCiphers:(BOOL)arg1 ;
-(BOOL)_waitForSocketOpenAndFlag:(BOOL*)arg1 ;
-(id)_negotiatedProtocolVersion;
-(BOOL)_startSSLHandshakeWithProtocol:(id)arg1 errorPtr:(id*)arg2 ;
-(unsigned)_bufferedByteCount;
-(long long)readBytes:(char*)arg1 length:(unsigned long long)arg2 ;
-(NSData *)sourceIPAddress;
@end

