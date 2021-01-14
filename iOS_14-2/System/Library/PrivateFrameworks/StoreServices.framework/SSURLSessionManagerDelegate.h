/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

@class NSNumber, SSBag, NSData, SSURLRequestProperties, NSString, NSURLCache;


@protocol SSURLSessionManagerDelegate <NSObject>
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
@property (nonatomic,readonly) SSBag * bag; 
@property (nonatomic,readonly) BOOL isURLBagRequest; 
@property (nonatomic,readonly) NSData * rawResponseData; 
@property (nonatomic,readonly) SSURLRequestProperties * requestProperties; 
@property (nonatomic,readonly) BOOL shouldDisableCellular; 
@property (nonatomic,readonly) BOOL shouldRequireCellular; 
@property (nonatomic,readonly) BOOL shouldSetCookies; 
@property (nonatomic,readonly) NSData * sourceAppAuditTokenData; 
@property (nonatomic,readonly) NSString * sourceAppBundleID; 
@property (nonatomic,readonly) NSURLCache * URLCache; 
@property (nonatomic,readonly) NSString * URLCacheID; 
@optional
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
-(NSURLCache *)URLCache;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(NSString *)sourceAppBundleID;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(SSBag *)bag;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
-(NSNumber *)metricsLoadURLSessionDuration;
-(NSNumber *)metricsLoadURLSamplingPercentage;
-(NSNumber *)metricsLoadURLSamplingPercentageCachedResponses;
-(id)URLSession:(id)arg1 task:(id)arg2 decodedDataForResponseData:(id)arg3;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithEvent:(id)arg3 error:(id)arg4;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCreatingHTTPArchive:(id)arg3;
-(NSData *)rawResponseData;
-(NSString *)URLCacheID;
-(SSURLRequestProperties *)requestProperties;
-(BOOL)shouldDisableCellular;
-(BOOL)shouldRequireCellular;
-(BOOL)shouldSetCookies;
-(NSData *)sourceAppAuditTokenData;
-(BOOL)isURLBagRequest;

@end

