/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/


@protocol ACCAuthContextProtocol, ACFHTTPTransportProtocol;
@class NSDictionary, NSString, NSArray;

@interface ACCHTTPHandler : NSObject {

	id<ACCAuthContextProtocol> _context;
	id<ACFHTTPTransportProtocol> _transport;
	/*^block*/id _finalizeBlock;
	BOOL _shouldIgnoreInvalidDSPublicKey;
	BOOL _shouldIgnoreInvalidToken;

}

@property (assign) BOOL shouldIgnoreInvalidDSPublicKey;                           //@synthesize shouldIgnoreInvalidDSPublicKey=_shouldIgnoreInvalidDSPublicKey - In the implementation block
@property (assign) BOOL shouldIgnoreInvalidToken;                                 //@synthesize shouldIgnoreInvalidToken=_shouldIgnoreInvalidToken - In the implementation block
@property (nonatomic,retain) id<ACCAuthContextProtocol> context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<ACFHTTPTransportProtocol> transport;              //@synthesize transport=_transport - In the implementation block
@property (nonatomic,readonly) BOOL isCanceled; 
@property (nonatomic,copy) id finalizeBlock;                                      //@synthesize finalizeBlock=_finalizeBlock - In the implementation block
@property (nonatomic,readonly) NSDictionary * httpRequestDictionary; 
@property (nonatomic,readonly) NSDictionary * requestHeader; 
@property (nonatomic,readonly) NSDictionary * requestBody; 
@property (nonatomic,readonly) NSString * iForgotURL; 
@property (nonatomic,readonly) NSArray * serverHosts; 
@property (nonatomic,readonly) NSArray * serverAttemptsDelays; 
+(id)handlerWithContext:(id)arg1 ;
-(id)realm;
-(NSString *)iForgotURL;
-(BOOL)isCanceled;
-(void)cancelRequest;
-(id<ACFHTTPTransportProtocol>)transport;
-(id)initWithContext:(id)arg1 ;
-(void)setTransport:(id<ACFHTTPTransportProtocol>)arg1 ;
-(id<ACCAuthContextProtocol>)context;
-(NSDictionary *)requestBody;
-(void)dealloc;
-(void)setContext:(id<ACCAuthContextProtocol>)arg1 ;
-(NSDictionary *)requestHeader;
-(void)setFinalizeBlock:(id)arg1 ;
-(BOOL)shouldReturnResponse:(id)arg1 orReportError:(id*)arg2 ;
-(BOOL)installCertificateWithString:(id)arg1 version:(id)arg2 forRealm:(id)arg3 ;
-(void)uninstallPublicKeyForRealm:(id)arg1 ;
-(id)finalizeBlock;
-(NSArray *)serverHosts;
-(NSArray *)serverAttemptsDelays;
-(void)performRequestWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSDictionary *)httpRequestDictionary;
-(void)updateTransport;
-(BOOL)shouldTryOtherServers:(id)arg1 error:(id)arg2 ;
-(id)responseWithData:(id)arg1 error:(id*)arg2 ;
-(id)convertErrorToACMError:(id)arg1 ;
-(id)iForgotString;
-(BOOL)shouldIgnoreInvalidDSPublicKey;
-(void)setShouldIgnoreInvalidDSPublicKey:(BOOL)arg1 ;
-(BOOL)updatePublicKeyWithResponse:(id)arg1 ;
-(BOOL)shouldIgnoreInvalidToken;
-(void)setShouldIgnoreInvalidToken:(BOOL)arg1 ;
-(BOOL)isConnectionError:(id)arg1 ;
-(BOOL)isUknownServerError:(id)arg1 ;
-(id)invalidPublicKeyErrorForReponse:(id)arg1 error:(id)arg2 ;
@end

