/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSVComplexOperation.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSString, SSVPlaybackLeaseConfiguration, SSURLBag;

@interface SSVLeaseCertificateRequestOperation : SSVComplexOperation {

	NSObject*<OS_dispatch_semaphore> _bagLoadSemaphore;
	NSString* _certificateURLBagKey;
	SSVPlaybackLeaseConfiguration* _configuration;
	/*^block*/id _outputBlock;
	SSURLBag* _urlBag;

}

@property (copy) NSString * certificateURLBagKey; 
@property (copy) id outputBlock; 
-(void)cancel;
-(void)main;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(id)initWithURLBag:(id)arg1 ;
-(id)outputBlock;
-(id)_resolveCertificateURLReturningError:(id*)arg1 ;
-(NSString *)certificateURLBagKey;
-(void)setCertificateURLBagKey:(NSString *)arg1 ;
@end

