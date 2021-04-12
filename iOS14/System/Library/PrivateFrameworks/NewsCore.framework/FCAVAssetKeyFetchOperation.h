/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCAVAssetKeyServiceType, FCAVAssetKeyCacheType;
@class NSData, AVPersistableContentKeyRequest, NSURL;

@interface FCAVAssetKeyFetchOperation : FCOperation {

	NSData* _resultCKCData;
	/*^block*/id _fetchCompletionHandler;
	AVPersistableContentKeyRequest* _keyRequest;
	NSURL* _keyURI;
	id<FCAVAssetKeyServiceType> _service;
	id<FCAVAssetKeyCacheType> _cache;

}

@property (nonatomic,copy) id fetchCompletionHandler;                                    //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
@property (nonatomic,readonly) AVPersistableContentKeyRequest * keyRequest;              //@synthesize keyRequest=_keyRequest - In the implementation block
@property (nonatomic,readonly) NSURL * keyURI;                                           //@synthesize keyURI=_keyURI - In the implementation block
@property (nonatomic,readonly) id<FCAVAssetKeyServiceType> service;                      //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) id<FCAVAssetKeyCacheType> cache;                          //@synthesize cache=_cache - In the implementation block
-(BOOL)canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
-(unsigned long long)maxRetries;
-(void)resetForRetry;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(id<FCAVAssetKeyCacheType>)cache;
-(NSURL *)keyURI;
-(id)initWithKeyRequest:(id)arg1 keyURI:(id)arg2 service:(id)arg3 cache:(id)arg4 ;
-(id)_promiseAppCertificate;
-(AVPersistableContentKeyRequest *)keyRequest;
-(id)_promiseContentKeyForKeyRequest:(id)arg1 keyURI:(id)arg2 spcData:(id)arg3 ;
-(id)_promiseSPCDataForKeyRequest:(id)arg1 keyURI:(id)arg2 appCertificate:(id)arg3 ;
-(id)fetchCompletionHandler;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(id<FCAVAssetKeyServiceType>)service;
@end

