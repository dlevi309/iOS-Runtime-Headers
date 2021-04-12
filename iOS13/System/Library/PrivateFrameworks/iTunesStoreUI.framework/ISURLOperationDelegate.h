/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

@class NSNumber;


@protocol ISURLOperationDelegate <ISOperationDelegate>
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
@optional
-(id)URLCache;
-(NSNumber *)metricsLoadURLSessionDuration;
-(NSNumber *)metricsLoadURLSamplingPercentage;
-(NSNumber *)metricsLoadURLSamplingPercentageCachedResponses;
-(id)URLCacheID;
-(void)operation:(id)arg1 didDiscoverContentLength:(id)arg2;
-(void)operation:(id)arg1 didReceiveResponse:(id)arg2;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2;
-(id)operation:(id)arg1 needNewBodyStream:(id)arg2;
-(BOOL)operation:(id)arg1 processData:(id)arg2 error:(id*)arg3;
-(void)operation:(id)arg1 willSendRequest:(id)arg2;
-(id)operation:(id)arg1 sanitizedStringForString:(id)arg2;
-(long long)operation:(id)arg1 dispositionForAuthenticationChallenge:(id)arg2;
-(id)operation:(id)arg1 credentialForAuthenticationChallenge:(id)arg2;

@end

