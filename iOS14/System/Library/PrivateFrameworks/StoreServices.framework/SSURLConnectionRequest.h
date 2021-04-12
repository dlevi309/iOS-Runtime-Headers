/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSURLRequestProperties, SSAuthenticationContext, SSVURLDataConsumer, NSURL, SSVFairPlaySAPSession, SSVSAPSignaturePolicy, SSURLBag, SSVURLBagInterpreter, NSURLRequest, NSString;

@interface SSURLConnectionRequest : SSRequest <SSXPCCoding> {

	SSURLRequestProperties* _requestProperties;
	SSAuthenticationContext* _authenticationContext;
	SSVURLDataConsumer* _dataConsumer;
	NSURL* _destinationFileURL;
	BOOL _runsInProcess;
	SSVFairPlaySAPSession* _sapSession;
	SSVSAPSignaturePolicy* _sapSignaturePolicy;
	BOOL _sendsResponseForHTTPFailures;
	BOOL _shouldMescalSign;
	SSURLBag* _urlBag;
	SSVURLBagInterpreter* _urlBagInterpreter;

}

@property (copy) SSAuthenticationContext * authenticationContext; 
@property (retain) SSVURLDataConsumer * dataConsumer; 
@property (assign) BOOL runsInProcess; 
@property (assign) BOOL sendsResponseForHTTPFailures; 
@property (retain) SSVFairPlaySAPSession * SAPSession; 
@property (copy) SSVSAPSignaturePolicy * SAPSignaturePolicy; 
@property (assign,nonatomic) id<SSURLConnectionRequestDelegate> delegate; 
@property (readonly) NSURLRequest * URLRequest; 
@property (readonly) SSURLRequestProperties * requestProperties; 
@property (copy) NSURL * destinationFileURL; 
@property (assign) BOOL shouldMescalSign; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSAPSession:(SSVFairPlaySAPSession *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)init;
-(BOOL)start;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithURLRequest:(id)arg1 ;
-(void)configureWithURLBagDictionary:(id)arg1 ;
-(void)setSAPSignaturePolicy:(SSVSAPSignaturePolicy *)arg1 ;
-(void)setDataConsumer:(SSVURLDataConsumer *)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(SSURLRequestProperties *)requestProperties;
-(void)configureWithURLBag:(id)arg1 ;
-(SSVSAPSignaturePolicy *)SAPSignaturePolicy;
-(BOOL)_canRunInProcess;
-(id)initWithRequestProperties:(id)arg1 ;
-(void)startWithConnectionResponseBlock:(/*^block*/id)arg1 ;
-(BOOL)runsInProcess;
-(NSURL *)destinationFileURL;
-(BOOL)sendsResponseForHTTPFailures;
-(BOOL)shouldMescalSign;
-(void)setSendsResponseForHTTPFailures:(BOOL)arg1 ;
-(void)setShouldMescalSign:(BOOL)arg1 ;
-(void)setDestinationFileURL:(NSURL *)arg1 ;
-(void)setRunsInProcess:(BOOL)arg1 ;
-(SSVFairPlaySAPSession *)SAPSession;
-(NSURLRequest *)URLRequest;
-(void)dealloc;
-(SSVURLDataConsumer *)dataConsumer;
@end

