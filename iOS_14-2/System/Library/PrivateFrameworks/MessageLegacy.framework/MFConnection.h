/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

#import <MessageLegacy/MessageLegacy-Structs.h>
#import <libobjc.A.dylib/ECAuthenticatableConnection.h>
#import <libobjc.A.dylib/MFDiagnosticsGenerator.h>

@protocol ECSASLSecurityLayer, ECNWConnectionWrapper;
@class NSArray, NSString, MFConnectionSettings;

@interface MFConnection : NSObject <ECAuthenticatableConnection, MFDiagnosticsGenerator> {

	id<ECSASLSecurityLayer> _securityLayer;
	MFConnectionSettings* _connectionSettings;
	id<ECNWConnectionWrapper> _socket;
	double _lastUsedTime;
	char* _buffer;
	long long _bufferRemainingBytes;
	unsigned long long _bufferStart;
	unsigned long long _bufferLength;
	unsigned long long _desiredBufferLength;
	z_stream_s* _deflater;
	z_stream_s* _inflater;
	char* _zbuffer;
	unsigned _readBytesNotLogged;
	AB _isFetching;
	BOOL _compressionEnabled;
	NSString* _accountLogString;

}

@property (assign) BOOL isFetching; 
@property (nonatomic,readonly) double lastUsedTime; 
@property (nonatomic,readonly) NSArray * capabilities; 
@property (nonatomic,readonly) NSArray * authenticationMechanisms; 
@property (nonatomic,readonly) NSString * securityProtocol; 
@property (nonatomic,readonly) NSString * accountLogString;                     //@synthesize accountLogString=_accountLogString - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL hasBytesAvailable; 
@property (nonatomic,readonly) BOOL isCellularConnection; 
@property (nonatomic,readonly) BOOL isConstrained; 
@property (nonatomic,readonly) BOOL loginDisabled; 
@property (nonatomic,readonly) BOOL usesOpportunisticSockets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)shouldTryFallbacksAfterError:(id)arg1 ;
+(void)readLoggingDefaults;
+(void)logConnection:(id)arg1 type:(long long)arg2 data:(id)arg3 ;
+(id)logClasses;
+(void)setLogClasses:(id)arg1 ;
+(BOOL)logAllSocketActivity;
+(void)setLogAllSocketActivity:(BOOL)arg1 ;
+(id)logActivityOnPorts;
+(void)setLogActivityOnPorts:(id)arg1 ;
+(id)logActivityOnHosts;
+(void)setLogActivityOnHosts:(id)arg1 ;
+(void)flushLog;
-(void)disconnect;
-(NSArray *)capabilities;
-(id)init;
-(BOOL)loginDisabled;
-(BOOL)hasBytesAvailable;
-(double)lastUsedTime;
-(NSString *)description;
-(BOOL)isValid;
-(id)copyDiagnosticInformation;
-(BOOL)connectUsingFallbacksForAccount:(id)arg1 ;
-(BOOL)authenticateUsingAccount:(id)arg1 ;
-(BOOL)connectUsingAccount:(id)arg1 ;
-(BOOL)writeData:(id)arg1 ;
-(NSString *)securityProtocol;
-(void)enableThroughputMonitoring:(BOOL)arg1 ;
-(BOOL)usesOpportunisticSockets;
-(BOOL)_evaluateTrust:(SecTrustRef)arg1 errorPtr:(id*)arg2 ;
-(void)_setupSocketWithSettings:(id)arg1 ;
-(BOOL)connectUsingSettings:(id)arg1 ;
-(NSArray *)authenticationMechanisms;
-(BOOL)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2 ;
-(void)_clearBuffer;
-(void)endCompression;
-(BOOL)writeBytes:(const char*)arg1 length:(unsigned long long)arg2 dontLogBytesInRange:(NSRange)arg3 ;
-(BOOL)writeData:(id)arg1 dontLogBytesInRange:(NSRange)arg2 ;
-(BOOL)_certificateIsTrustedForAccount:(id)arg1 ;
-(void)_setCertificateIsTrusted:(BOOL)arg1 forAccount:(id)arg2 ;
-(BOOL)isFetching;
-(void)setIsFetching:(BOOL)arg1 ;
-(void)setDesiredReadBufferLength:(unsigned long long)arg1 ;
-(void)logReadChars:(const char*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)readLineIntoData:(id)arg1 ;
-(BOOL)readBytesIntoData:(id)arg1 desiredLength:(unsigned long long)arg2 ;
-(BOOL)startTLSForAccount:(id)arg1 ;
-(BOOL)enableSSL;
-(BOOL)startCompression;
-(id)connectionSettings;
-(void)setConnectionSettings:(id)arg1 ;
-(NSString *)accountLogString;
-(void)startActivity;
-(void)stopActivity;
-(BOOL)isConstrained;
-(BOOL)isCellularConnection;
-(void)dealloc;
@end

