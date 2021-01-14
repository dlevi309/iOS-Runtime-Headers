/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>
#import <libobjc.A.dylib/VSViewServiceHostViewControllerDelegate.h>

@protocol VSViewServiceRequestOperationDelegate;
@class VSViewServiceRequest, VSOptional, VSViewServiceHostViewController, NSUUID, NSString;

@interface VSViewServiceRequestOperation : VSAsyncOperation <VSViewServiceHostViewControllerDelegate> {

	BOOL _isPresentingViewController;
	VSViewServiceRequest* _viewServiceRequest;
	id<VSViewServiceRequestOperationDelegate> _delegate;
	VSOptional* _result;
	VSViewServiceHostViewController* _viewServiceHostViewController;
	NSUUID* _requestID;

}

@property (nonatomic,retain) VSOptional * result;                                                          //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) VSViewServiceHostViewController * viewServiceHostViewController;              //@synthesize viewServiceHostViewController=_viewServiceHostViewController - In the implementation block
@property (nonatomic,copy) NSUUID * requestID;                                                             //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy,readonly) VSViewServiceRequest * viewServiceRequest;                             //@synthesize viewServiceRequest=_viewServiceRequest - In the implementation block
@property (assign,nonatomic,__weak) id<VSViewServiceRequestOperationDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
-(id)init;
-(id<VSViewServiceRequestOperationDelegate>)delegate;
-(NSUUID *)requestID;
-(void)setDelegate:(id<VSViewServiceRequestOperationDelegate>)arg1 ;
-(void)_presentViewController;
-(void)_dismissViewController;
-(VSOptional *)result;
-(void)setRequestID:(NSUUID *)arg1 ;
-(void)cancel;
-(void)finishExecutionIfPossible;
-(VSViewServiceHostViewController *)viewServiceHostViewController;
-(void)_dismissViewControllerIfRequired;
-(VSViewServiceRequest *)viewServiceRequest;
-(void)setViewServiceHostViewController:(VSViewServiceHostViewController *)arg1 ;
-(void)presentViewServiceHostViewController:(id)arg1 ;
-(void)dismissViewServiceHostViewController:(id)arg1 ;
-(void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3 ;
-(void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3 ;
-(void)viewServiceHostViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2 ;
-(void)viewServiceHostViewController:(id)arg1 didCancelRequest:(id)arg2 ;
-(BOOL)viewServiceHostViewController:(id)arg1 shouldAuthenticateAccountProviderWithIdentifier:(id)arg2 ;
-(id)initWithViewServiceRequest:(id)arg1 ;
@end

