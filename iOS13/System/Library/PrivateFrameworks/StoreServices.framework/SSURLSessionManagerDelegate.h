/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(NSURLCache *)URLCache;
-(SSBag *)bag;
-(NSNumber *)metricsLoadURLSessionDuration;
-(NSNumber *)metricsLoadURLSamplingPercentage;
-(NSNumber *)metricsLoadURLSamplingPercentageCachedResponses;
-(id)URLSession:(id)arg1 task:(id)arg2 decodedDataForResponseData:(id)arg3;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithEvent:(id)arg3 error:(id)arg4;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCreatingHTTPArchive:(id)arg3;
-(BOOL)isURLBagRequest;
-(NSData *)rawResponseData;
-(SSURLRequestProperties *)requestProperties;
-(BOOL)shouldDisableCellular;
-(BOOL)shouldRequireCellular;
-(BOOL)shouldSetCookies;
-(NSData *)sourceAppAuditTokenData;
-(NSString *)sourceAppBundleID;
-(NSString *)URLCacheID;

@end

