/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/


@protocol OS_dispatch_queue;
@class NSObject, RadioRequestContext, NSDictionary;

@interface RadioRequest : NSObject {

	BOOL _cachedResponse;
	long long _errorCode;
	NSObject*<OS_dispatch_queue> _queue;
	RadioRequestContext* _requestContext;
	double _retryInterval;
	long long _status;
	NSDictionary* _unparsedResponseDictionary;
	BOOL _asynchronousBackgroundRequest;

}

@property (assign,getter=isAsynchronousBackgroundRequest,nonatomic) BOOL asynchronousBackgroundRequest;              //@synthesize asynchronousBackgroundRequest=_asynchronousBackgroundRequest - In the implementation block
@property (getter=isCachedResponse,readonly) BOOL cachedResponse; 
@property (copy) RadioRequestContext * requestContext; 
@property (readonly) long long status; 
@property (readonly) long long errorCode; 
@property (readonly) double retryInterval; 
@property (copy,readonly) NSDictionary * unparsedResponseDictionary; 
+(id)defaultURLCache;
+(void)loadServiceConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)cancel;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(void)setCachedResponse:(BOOL)arg1 ;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(RadioRequestContext *)requestContext;
-(void)setRequestContext:(RadioRequestContext *)arg1 ;
-(BOOL)isCachedResponse;
-(double)retryInterval;
-(void)setRetryInterval:(double)arg1 ;
-(BOOL)isAsynchronousBackgroundRequest;
-(void)_loadRadioStoreBagWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_loadRadioStoreBagAndAllowRetry:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setUnparsedResponseDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)unparsedResponseDictionary;
-(void)setAsynchronousBackgroundRequest:(BOOL)arg1 ;
@end

