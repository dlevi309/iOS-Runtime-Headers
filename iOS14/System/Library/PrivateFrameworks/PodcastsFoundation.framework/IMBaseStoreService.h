/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/


@class IMURLRequestEncoder, NSURLSessionConfiguration, IMURLSession;

@interface IMBaseStoreService : NSObject {

	BOOL _wantsJSSignature;
	BOOL _personalizeRequests;
	/*^block*/id _callback;
	IMURLRequestEncoder* _requestEncoder;
	NSURLSessionConfiguration* _configuration;
	IMURLSession* _amsUrlSession;

}

@property (nonatomic,copy) id callback;                                              //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) IMURLRequestEncoder * requestEncoder;                   //@synthesize requestEncoder=_requestEncoder - In the implementation block
@property (nonatomic,retain) NSURLSessionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) IMURLSession * amsUrlSession;                           //@synthesize amsUrlSession=_amsUrlSession - In the implementation block
@property (assign,nonatomic) BOOL wantsJSSignature;                                  //@synthesize wantsJSSignature=_wantsJSSignature - In the implementation block
@property (assign,nonatomic) BOOL personalizeRequests;                               //@synthesize personalizeRequests=_personalizeRequests - In the implementation block
+(BOOL)shouldFollowRedirects;
+(id)signatureQueryParams;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(id)init;
-(void)setPersonalizeRequests:(BOOL)arg1 ;
-(void)signRequest:(id)arg1 ;
-(IMURLRequestEncoder *)requestEncoder;
-(void)cancelAllRequests;
-(void)performRequest:(/*^block*/id)arg1 ;
-(id)bag;
-(NSURLSessionConfiguration *)configuration;
-(BOOL)personalizeRequests;
-(void)setConfiguration:(NSURLSessionConfiguration *)arg1 ;
-(void)setRequestEncoder:(IMURLRequestEncoder *)arg1 ;
-(void)performDataRequest:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)setWantsJSSignature:(BOOL)arg1 ;
-(void)performUrlRequest:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)initWithConcurrentOperationCount:(long long)arg1 ;
-(IMURLSession *)amsUrlSession;
-(BOOL)wantsJSSignature;
-(void)setAmsUrlSession:(IMURLSession *)arg1 ;
@end

