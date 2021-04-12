/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/PKRemoteAddPassViewControllerProtocol.h>

@protocol PKAddPaymentPassViewControllerDelegate;
@class NSString;

@interface PKRemoteAddPaymentPassViewController : _UIRemoteViewController <PKRemoteAddPassViewControllerProtocol> {

	BOOL _finished;
	id<PKAddPaymentPassViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKAddPaymentPassViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(BOOL)shouldPropagateAppearanceCustomizations;
-(void)dealloc;
-(id<PKAddPaymentPassViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAddPaymentPassViewControllerDelegate>)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)generateRequestWithCertificateChain:(id)arg1 nonce:(id)arg2 nonceSignature:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)didFinishWithPass:(id)arg1 error:(id)arg2 ;
-(id)_addPaymentPassVC;
@end

