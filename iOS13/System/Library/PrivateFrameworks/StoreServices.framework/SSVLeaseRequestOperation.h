/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)cancel;
-(void)main;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(NSString *)certificateURLBagKey;
-(void)setCertificateURLBagKey:(NSString *)arg1 ;
-(id)initWithLeaseRequest:(id)arg1 configuration:(id)arg2 ;
-(id)initWithLeaseRequest:(id)arg1 URLBag:(id)arg2 ;
-(BOOL)_resolveConfigurationAndURLReturningError:(id*)arg1 ;
-(BOOL)_loadCertificateDataIfNecessary:(id*)arg1 ;
-(BOOL)_shouldRetryForError:(id)arg1 ;
-(SSVPlaybackLeaseRequest *)leaseRequest;
@end

