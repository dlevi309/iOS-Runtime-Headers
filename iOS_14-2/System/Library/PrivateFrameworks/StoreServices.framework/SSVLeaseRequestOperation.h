/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSVOperation.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSString, NSData, SSVPlaybackLeaseConfiguration, SSVPlaybackLeaseRequest, SSURLBag;

@interface SSVLeaseRequestOperation : SSVOperation {

	NSObject*<OS_dispatch_semaphore> _bagLoadSemaphore;
	NSString* _bagKey;
	NSData* _certificateData;
	NSString* _certificateURLBagKey;
	SSVPlaybackLeaseConfiguration* _configuration;
	/*^block*/id _outputBlock;
	SSVPlaybackLeaseRequest* _request;
	unsigned long long _retryCount;
	SSURLBag* _urlBag;

}

@property (copy) NSString * certificateURLBagKey; 
@property (copy,readonly) SSVPlaybackLeaseRequest * leaseRequest; 
@property (copy) id outputBlock; 
-(void)setOutputBlock:(id)arg1 ;
-(void)main;
-(id)outputBlock;
-(id)initWithLeaseRequest:(id)arg1 configuration:(id)arg2 ;
-(id)initWithLeaseRequest:(id)arg1 URLBag:(id)arg2 ;
-(BOOL)_resolveConfigurationAndURLReturningError:(id*)arg1 ;
-(BOOL)_loadCertificateDataIfNecessary:(id*)arg1 ;
-(BOOL)_shouldRetryForError:(id)arg1 ;
-(SSVPlaybackLeaseRequest *)leaseRequest;
-(NSString *)certificateURLBagKey;
-(void)setCertificateURLBagKey:(NSString *)arg1 ;
-(void)cancel;
@end

