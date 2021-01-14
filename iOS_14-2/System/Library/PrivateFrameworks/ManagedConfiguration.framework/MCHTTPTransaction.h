/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSURL, NSString, NSData, NSMutableData, NSError, NSURLSession, NSObject, NSArray;

@interface MCHTTPTransaction : NSObject <NSURLSessionDataDelegate> {

	NSURL* _requestURL;
	NSString* _method;
	double _timeout;
	NSString* _userAgent;
	NSString* _contentType;
	NSData* _data;
	SecIdentityRef _identity;
	NSString* _CMSSignatureHeaderName;
	NSURL* _currentURL;
	NSURL* _permanentlyRedirectedURL;
	BOOL _rememberData;
	NSMutableData* _responseData;
	long long _statusCode;
	NSError* _error;
	NSURLSession* _session;
	NSObject*<OS_dispatch_semaphore> _doneSema;
	BOOL _pinningRevocationCheckRequired;
	NSArray* _pinnedSecCertificateRefs;

}

@property (nonatomic,retain) NSURL * url;                                            //@synthesize requestURL=_requestURL - In the implementation block
@property (nonatomic,retain) NSString * method;                                      //@synthesize method=_method - In the implementation block
@property (assign,nonatomic) double timeout;                                         //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSString * userAgent;                                   //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,retain) NSString * contentType;                                 //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,retain) NSData * data;                                          //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSArray * pinnedSecCertificateRefs;                     //@synthesize pinnedSecCertificateRefs=_pinnedSecCertificateRefs - In the implementation block
@property (assign,nonatomic) BOOL pinningRevocationCheckRequired;                    //@synthesize pinningRevocationCheckRequired=_pinningRevocationCheckRequired - In the implementation block
@property (nonatomic,retain) NSString * CMSSignatureHeaderName;                      //@synthesize CMSSignatureHeaderName=_CMSSignatureHeaderName - In the implementation block
@property (nonatomic,retain,readonly) NSData * responseData;                         //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,retain,readonly) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,retain,readonly) NSURL * permanentlyRedirectedURL;              //@synthesize permanentlyRedirectedURL=_permanentlyRedirectedURL - In the implementation block
@property (nonatomic,readonly) long long statusCode;                                 //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transactionWithURL:(id)arg1 method:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setIdentity:(SecIdentityRef)arg1 ;
-(NSString *)method;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSString *)contentType;
-(void)setTimeout:(double)arg1 ;
-(BOOL)pinningRevocationCheckRequired;
-(id)initWithURL:(id)arg1 method:(id)arg2 ;
-(void)_beginTransaction;
-(BOOL)_shouldAllowTrustWithPinning:(SecTrustRef)arg1 forHost:(id)arg2 ;
-(BOOL)_shouldAllowTrust:(SecTrustRef)arg1 forHost:(id)arg2 ;
-(SecIdentityRef)copyIdentity;
-(void)performSynchronously;
-(void)performCompletionBlock:(/*^block*/id)arg1 ;
-(NSArray *)pinnedSecCertificateRefs;
-(double)timeout;
-(void)setPinnedSecCertificateRefs:(NSArray *)arg1 ;
-(void)setPinningRevocationCheckRequired:(BOOL)arg1 ;
-(NSString *)CMSSignatureHeaderName;
-(void)setCMSSignatureHeaderName:(NSString *)arg1 ;
-(NSURL *)permanentlyRedirectedURL;
-(NSURL *)url;
-(NSError *)error;
-(void)setData:(NSData *)arg1 ;
-(long long)statusCode;
-(NSData *)responseData;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(NSData *)data;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setMethod:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)setContentType:(NSString *)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)dealloc;
@end

