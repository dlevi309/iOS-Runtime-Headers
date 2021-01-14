/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCachedResponse:(BOOL)arg1 ;
-(double)retryInterval;
-(RadioRequestContext *)requestContext;
-(long long)errorCode;
-(BOOL)isCachedResponse;
-(void)setErrorCode:(long long)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)setRequestContext:(RadioRequestContext *)arg1 ;
-(void)cancel;
-(long long)status;
-(void)dealloc;
-(void)setRetryInterval:(double)arg1 ;
-(BOOL)isAsynchronousBackgroundRequest;
-(void)_loadRadioStoreBagWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_loadRadioStoreBagAndAllowRetry:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setUnparsedResponseDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)unparsedResponseDictionary;
-(void)setAsynchronousBackgroundRequest:(BOOL)arg1 ;
@end

