/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
*/


@protocol C2NetworkingDelegate, NSURLSessionDelegateC2RequestDelegate;
@class NSObject, NSString, NSOperationQueue, NSURLSessionConfiguration;

@interface C2NetworkingDelegateURLSession : NSObject {

	NSObject*<C2NetworkingDelegate> _networkingDelegate;
	NSString* _sessionDescription;
	NSOperationQueue* _delegateQueue;
	NSURLSessionConfiguration* _configuration;
	id<NSURLSessionDelegate><C2RequestDelegate> _sessionDelegate;

}

@property (assign,nonatomic,__weak) id<NSURLSessionDelegate><C2RequestDelegate> sessionDelegate;              //@synthesize sessionDelegate=_sessionDelegate - In the implementation block
@property (retain) NSOperationQueue * delegateQueue;                                                          //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (copy) NSURLSessionConfiguration * configuration;                                                   //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<C2NetworkingDelegate> networkingDelegate;                       //@synthesize networkingDelegate=_networkingDelegate - In the implementation block
@property (copy) NSString * sessionDescription;                                                               //@synthesize sessionDescription=_sessionDescription - In the implementation block
+(id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(id)dataTaskWithRequest:(id)arg1 ;
-(id<NSURLSessionDelegate><C2RequestDelegate>)sessionDelegate;
-(void)setSessionDelegate:(id<NSURLSessionDelegate><C2RequestDelegate>)arg1 ;
-(void)setSessionDescription:(NSString *)arg1 ;
-(NSString *)sessionDescription;
-(void)_useTLSSessionCacheFromSession:(id)arg1 ;
-(void)setDelegateQueue:(NSOperationQueue *)arg1 ;
-(NSURLSessionConfiguration *)configuration;
-(NSOperationQueue *)delegateQueue;
-(void)invalidateAndCancel;
-(void)setConfiguration:(NSURLSessionConfiguration *)arg1 ;
-(NSObject*<C2NetworkingDelegate>)networkingDelegate;
-(void)setNetworkingDelegate:(NSObject*<C2NetworkingDelegate>)arg1 ;
@end

