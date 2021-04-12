/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id<VSViewServiceRemoteViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<VSViewServiceRemoteViewControllerDelegate>)arg1 ;
-(void)_presentViewController;
-(void)_dismissViewController;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_request:(id)arg1 didFinishWithResponse:(id)arg2 ;
-(void)_request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_didChooseAdditionalProvidersForRequest:(id)arg1 ;
-(void)_didCancelRequest:(id)arg1 ;
-(void)_didChooseProviderWithIdentifier:(id)arg1 vetoHandler:(/*^block*/id)arg2 ;
@end

