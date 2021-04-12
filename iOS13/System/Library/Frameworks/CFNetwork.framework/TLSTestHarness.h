/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSURLSessionConfiguration, NSMutableDictionary, NSURLSession, NSURLCredential, NSString;

@interface TLSTestHarness : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {

	NSURLSessionConfiguration* _sessionConfig;
	NSMutableDictionary* _socketStreamProperties;
	NSURLSession* _session;
	NSMutableDictionary* _tasks;
	shared_ptr<TLSServer>* _server;
	BOOL _enableTLSTrustChecks;
	BOOL _enableTLSClientCert;
	BOOL _enableTLSPSK;
	shared_ptr<__SecTrust>* _receivedServerTrust;
	BOOL _clientCertificateRequested;
	NSURLCredential* _clientCertificateSent;

}

@property (retain) NSURLSessionConfiguration * sessionConfig;                 //@synthesize sessionConfig=_sessionConfig - In the implementation block
@property (retain) NSMutableDictionary * socketStreamProperties;              //@synthesize socketStreamProperties=_socketStreamProperties - In the implementation block
@property (retain) NSURLSession * session;                                    //@synthesize session=_session - In the implementation block
@property (retain) NSMutableDictionary * tasks;                               //@synthesize tasks=_tasks - In the implementation block
@property (assign) shared_ptr<TLSServer>* server;                             //@synthesize server=_server - In the implementation block
@property (assign) BOOL enableTLSTrustChecks;                                 //@synthesize enableTLSTrustChecks=_enableTLSTrustChecks - In the implementation block
@property (assign) BOOL enableTLSClientCert;                                  //@synthesize enableTLSClientCert=_enableTLSClientCert - In the implementation block
@property (assign) BOOL enableTLSPSK;                                         //@synthesize enableTLSPSK=_enableTLSPSK - In the implementation block
@property (assign) shared_ptr<__SecTrust>* receivedServerTrust;               //@synthesize receivedServerTrust=_receivedServerTrust - In the implementation block
@property (assign) BOOL clientCertificateRequested;                           //@synthesize clientCertificateRequested=_clientCertificateRequested - In the implementation block
@property (retain) NSURLCredential * clientCertificateSent;                   //@synthesize clientCertificateSent=_clientCertificateSent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setServer:(shared_ptr<TLSServer>*)arg1 ;
-(shared_ptr<TLSServer>*)server;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithServer:(shared_ptr<TLSServer>*)arg1 ;
-(BOOL)enableTLSPSK;
-(void)setEnableTLSPSK:(BOOL)arg1 ;
-(id)fetchRequest:(id)arg1 ;
-(void)_createSession;
-(NSURLSessionConfiguration *)sessionConfig;
-(void)setSessionConfig:(NSURLSessionConfiguration *)arg1 ;
-(NSMutableDictionary *)socketStreamProperties;
-(void)setSocketStreamProperties:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)tasks;
-(void)setTasks:(NSMutableDictionary *)arg1 ;
-(BOOL)enableTLSTrustChecks;
-(void)setEnableTLSTrustChecks:(BOOL)arg1 ;
-(BOOL)enableTLSClientCert;
-(void)setEnableTLSClientCert:(BOOL)arg1 ;
-(shared_ptr<__SecTrust>*)receivedServerTrust;
-(void)setReceivedServerTrust:(shared_ptr<__SecTrust>*)arg1 ;
-(BOOL)clientCertificateRequested;
-(void)setClientCertificateRequested:(BOOL)arg1 ;
-(NSURLCredential *)clientCertificateSent;
-(void)setClientCertificateSent:(NSURLCredential *)arg1 ;
@end

