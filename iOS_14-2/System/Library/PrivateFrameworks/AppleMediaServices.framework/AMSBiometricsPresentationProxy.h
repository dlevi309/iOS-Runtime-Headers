/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSRequestPresentationDelegate.h>

@class AMSURLSession, NSURLSessionTask, NSString;

@interface AMSBiometricsPresentationProxy : NSObject <AMSRequestPresentationDelegate> {

	AMSURLSession* _session;
	NSURLSessionTask* _task;

}

@property (nonatomic,readonly) AMSURLSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSURLSessionTask * task;              //@synthesize task=_task - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURLSessionTask *)task;
-(AMSURLSession *)session;
-(id)initWithSession:(id)arg1 task:(id)arg2 ;
-(void)handleAuthenticateRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleDialogRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

