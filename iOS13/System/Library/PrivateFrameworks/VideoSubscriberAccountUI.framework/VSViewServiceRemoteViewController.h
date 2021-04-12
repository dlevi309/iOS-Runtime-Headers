/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/VSViewServiceHostProtocol.h>

@protocol VSViewServiceRemoteViewControllerDelegate;
@class NSString;

@interface VSViewServiceRemoteViewController : _UIRemoteViewController <VSViewServiceHostProtocol> {

	id<VSViewServiceRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VSViewServiceRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(BOOL)shouldPropagateAppearanceCustomizations;
-(void)dealloc;
-(id<VSViewServiceRemoteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VSViewServiceRemoteViewControllerDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_dismissViewController;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)_presentViewController;
-(void)_request:(id)arg1 didFinishWithResponse:(id)arg2 ;
-(void)_request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_didChooseAdditionalProvidersForRequest:(id)arg1 ;
-(void)_didCancelRequest:(id)arg1 ;
-(void)_didChooseProviderWithIdentifier:(id)arg1 vetoHandler:(/*^block*/id)arg2 ;
@end

