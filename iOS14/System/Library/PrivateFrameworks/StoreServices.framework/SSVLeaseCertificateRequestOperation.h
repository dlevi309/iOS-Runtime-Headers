/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithConfiguration:(id)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(void)main;
-(id)outputBlock;
-(id)_resolveCertificateURLReturningError:(id*)arg1 ;
-(NSString *)certificateURLBagKey;
-(void)setCertificateURLBagKey:(NSString *)arg1 ;
-(void)cancel;
-(id)initWithURLBag:(id)arg1 ;
@end

