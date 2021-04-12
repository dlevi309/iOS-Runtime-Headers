/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id<VSViewServiceRequestOperationDelegate>)delegate;
-(void)setDelegate:(id<VSViewServiceRequestOperationDelegate>)arg1 ;
-(void)cancel;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(void)_dismissViewController;
-(NSUUID *)requestID;
-(void)setRequestID:(NSUUID *)arg1 ;
-(void)_presentViewController;
-(void)finishExecutionIfPossible;
-(void)executionDidBegin;
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

