/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSData;

@interface PKWebServiceRequestMetadata : NSObject {

	BOOL _authHandling;
	BOOL _cacheResponse;
	long long _retries;
	NSData* _originalBody;
	/*^block*/id _completion;
	NSData* _responseData;

}

@property (assign,nonatomic) long long retries;                  //@synthesize retries=_retries - In the implementation block
@property (assign,nonatomic) BOOL authHandling;                  //@synthesize authHandling=_authHandling - In the implementation block
@property (assign,nonatomic) BOOL cacheResponse;                 //@synthesize cacheResponse=_cacheResponse - In the implementation block
@property (nonatomic,retain) NSData * originalBody;              //@synthesize originalBody=_originalBody - In the implementation block
@property (nonatomic,copy) id completion;                        //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSData * responseData;              //@synthesize responseData=_responseData - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(BOOL)authHandling;
-(id)completion;
-(BOOL)cacheResponse;
-(void)setAuthHandling:(BOOL)arg1 ;
-(void)setCacheResponse:(BOOL)arg1 ;
-(NSData *)originalBody;
-(void)setOriginalBody:(NSData *)arg1 ;
-(void)setResponseData:(NSData *)arg1 ;
-(void)setRetries:(long long)arg1 ;
-(NSData *)responseData;
-(long long)retries;
@end

