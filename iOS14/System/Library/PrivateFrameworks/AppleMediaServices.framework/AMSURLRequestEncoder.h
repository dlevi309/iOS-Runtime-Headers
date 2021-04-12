/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagConsumer_Project.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>
#import <libobjc.A.dylib/AMSRequestEncoding.h>

@protocol AMSBagProtocol, AMSResponseDecoding, AMSURLBagContract, OS_dispatch_queue;
@class ACAccount, NSDictionary, AMSProcessInfo, AMSKeychainOptions, NSString, NSObject, AMSSigningSecurityService, NSURLSessionTask;

@interface AMSURLRequestEncoder : NSObject <AMSBagConsumer_Project, AMSBagConsumer, AMSRequestEncoding> {

	BOOL _compressRequestBody;
	BOOL _disableResponseDecoding;
	BOOL _enableRemoteSecuritySigning;
	BOOL _includeClientVersions;
	BOOL _shouldSetCookiesFromResponse;
	BOOL _shouldSetStorefrontFromResponse;
	BOOL _urlKnownToBeTrusted;
	ACAccount* _account;
	NSDictionary* _additionalMetrics;
	long long _anisetteType;
	id<AMSBagProtocol> _bag;
	AMSProcessInfo* _clientInfo;
	long long _dialogOptions;
	AMSKeychainOptions* _keychainOptions;
	NSString* _logUUID;
	long long _mescalType;
	long long _requestEncoding;
	id<AMSResponseDecoding> _responseDecoder;
	id<AMSURLBagContract> _bagContract;
	NSObject*<OS_dispatch_queue> _internalQueue;
	long long _encodeCount;
	AMSSigningSecurityService* _signingService;
	NSURLSessionTask* _parentTask;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign,nonatomic) long long encodeCount;                                     //@synthesize encodeCount=_encodeCount - In the implementation block
@property (nonatomic,readonly) AMSSigningSecurityService * signingService;              //@synthesize signingService=_signingService - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * parentTask;                             //@synthesize parentTask=_parentTask - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                       //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalMetrics;                          //@synthesize additionalMetrics=_additionalMetrics - In the implementation block
@property (assign,nonatomic) long long anisetteType;                                    //@synthesize anisetteType=_anisetteType - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;                                    //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;                               //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic) BOOL compressRequestBody;                                  //@synthesize compressRequestBody=_compressRequestBody - In the implementation block
@property (assign,nonatomic) BOOL disableResponseDecoding;                              //@synthesize disableResponseDecoding=_disableResponseDecoding - In the implementation block
@property (assign,nonatomic) long long dialogOptions;                                   //@synthesize dialogOptions=_dialogOptions - In the implementation block
@property (assign,nonatomic) BOOL enableRemoteSecuritySigning;                          //@synthesize enableRemoteSecuritySigning=_enableRemoteSecuritySigning - In the implementation block
@property (assign,nonatomic) BOOL includeClientVersions;                                //@synthesize includeClientVersions=_includeClientVersions - In the implementation block
@property (nonatomic,retain) AMSKeychainOptions * keychainOptions;                      //@synthesize keychainOptions=_keychainOptions - In the implementation block
@property (nonatomic,retain) NSString * logUUID;                                        //@synthesize logUUID=_logUUID - In the implementation block
@property (assign,nonatomic) long long mescalType;                                      //@synthesize mescalType=_mescalType - In the implementation block
@property (assign,nonatomic) long long requestEncoding;                                 //@synthesize requestEncoding=_requestEncoding - In the implementation block
@property (nonatomic,retain) id<AMSResponseDecoding> responseDecoder;                   //@synthesize responseDecoder=_responseDecoder - In the implementation block
@property (assign,nonatomic) BOOL shouldSetCookiesFromResponse;                         //@synthesize shouldSetCookiesFromResponse=_shouldSetCookiesFromResponse - In the implementation block
@property (assign,nonatomic) BOOL shouldSetStorefrontFromResponse;                      //@synthesize shouldSetStorefrontFromResponse=_shouldSetStorefrontFromResponse - In the implementation block
@property (assign,nonatomic) BOOL urlKnownToBeTrusted;                                  //@synthesize urlKnownToBeTrusted=_urlKnownToBeTrusted - In the implementation block
@property (nonatomic,retain) id<AMSURLBagContract> bagContract;                         //@synthesize bagContract=_bagContract - In the implementation block
@property (assign,nonatomic) long long dataEncoding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(long long)mescalType;
-(long long)dialogOptions;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLogUUID:(NSString *)arg1 ;
-(NSString *)logUUID;
-(void)setKeychainOptions:(AMSKeychainOptions *)arg1 ;
-(void)setEncodeCount:(long long)arg1 ;
-(long long)encodeCount;
-(ACAccount *)account;
-(BOOL)enableRemoteSecuritySigning;
-(void)setResponseDecoder:(id<AMSResponseDecoding>)arg1 ;
-(void)setAdditionalMetrics:(NSDictionary *)arg1 ;
-(long long)dataEncoding;
-(void)setIncludeClientVersions:(BOOL)arg1 ;
-(NSURLSessionTask *)parentTask;
-(void)setAccount:(ACAccount *)arg1 ;
-(BOOL)includeClientVersions;
-(id)initWithBagContract:(id)arg1 ;
-(AMSKeychainOptions *)keychainOptions;
-(id)init;
-(long long)requestEncoding;
-(AMSProcessInfo *)clientInfo;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(id)requestWithMethod:(long long)arg1 bagURL:(id)arg2 parameters:(id)arg3 error:(id*)arg4 ;
-(BOOL)urlKnownToBeTrusted;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id)requestWithMethod:(long long)arg1 URLString:(id)arg2 error:(id*)arg3 ;
-(void)setDataEncoding:(long long)arg1 ;
-(id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2 ;
-(BOOL)shouldSetStorefrontFromResponse;
-(NSDictionary *)additionalMetrics;
-(id)requestWithMethod:(long long)arg1 bagURL:(id)arg2 error:(id*)arg3 ;
-(void)setRequestEncoding:(long long)arg1 ;
-(id)_methodStringFromMethod:(long long)arg1 ;
-(id<AMSURLBagContract>)bagContract;
-(id<AMSBagProtocol>)bag;
-(id)initWithBag:(id)arg1 ;
-(void)setDialogOptions:(long long)arg1 ;
-(BOOL)disableResponseDecoding;
-(void)setDisableResponseDecoding:(BOOL)arg1 ;
-(void)setAnisetteType:(long long)arg1 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(BOOL)shouldSetCookiesFromResponse;
-(id)requestWithMethod:(long long)arg1 URL:(id)arg2 parameters:(id)arg3 ;
-(id<AMSResponseDecoding>)responseDecoder;
-(void)_addSecuritySigningHeadersToRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3 ;
-(BOOL)compressRequestBody;
-(id)requestWithMethod:(long long)arg1 URL:(id)arg2 parameters:(id)arg3 error:(id*)arg4 ;
-(AMSSigningSecurityService *)signingService;
-(id)requestWithMethod:(long long)arg1 bagURL:(id)arg2 parameters:(id)arg3 ;
-(void)setUrlKnownToBeTrusted:(BOOL)arg1 ;
-(id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2 error:(id*)arg3 ;
-(void)setShouldSetCookiesFromResponse:(BOOL)arg1 ;
-(void)setCompressRequestBody:(BOOL)arg1 ;
-(long long)anisetteType;
-(void)setMescalType:(long long)arg1 ;
-(id)requestWithMethod:(long long)arg1 URL:(id)arg2 error:(id*)arg3 ;
-(id)requestWithMethod:(long long)arg1 URLString:(id)arg2 parameters:(id)arg3 error:(id*)arg4 ;
-(void)setShouldSetStorefrontFromResponse:(BOOL)arg1 ;
-(void)setParentTask:(NSURLSessionTask *)arg1 ;
-(void)setBagContract:(id<AMSURLBagContract>)arg1 ;
-(void)setEnableRemoteSecuritySigning:(BOOL)arg1 ;
@end

