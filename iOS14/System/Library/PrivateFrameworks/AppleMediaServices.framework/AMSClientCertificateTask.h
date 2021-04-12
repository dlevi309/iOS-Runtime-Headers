/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>

@protocol OS_dispatch_queue;
@class NSObject, AMSKeychainOptions;

@interface AMSClientCertificateTask : AMSTask {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	AMSKeychainOptions* _options;

}

@property (retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (retain) AMSKeychainOptions * options;                            //@synthesize options=_options - In the implementation block
-(id)initWithOptions:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AMSKeychainOptions *)options;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setOptions:(AMSKeychainOptions *)arg1 ;
-(id)performClientCertChainRequest;
-(id)_baaOptionsWithOptions:(id)arg1 error:(id*)arg2 ;
@end

