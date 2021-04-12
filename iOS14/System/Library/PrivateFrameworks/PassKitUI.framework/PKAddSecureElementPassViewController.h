/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKRemoteAddSecureElementPassViewControllerProtocol.h>

@protocol PKAddSecureElementPassViewControllerDelegate;
@class PKAddSecureElementPassConfiguration, _UIAsyncInvocation, PKRemoteAddSecureElementPassViewController, NSString;

@interface PKAddSecureElementPassViewController : UIViewController <PKRemoteAddSecureElementPassViewControllerProtocol> {

	PKAddSecureElementPassConfiguration* _configuration;
	AB _finished;
	_UIAsyncInvocation* _remoteVCRequest;
	PKRemoteAddSecureElementPassViewController* _remoteVC;
	id<PKAddSecureElementPassViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKAddSecureElementPassViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)canAddSecureElementPassWithConfiguration:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(long long)modalTransitionStyle;
-(id<PKAddSecureElementPassViewControllerDelegate>)delegate;
-(long long)modalPresentationStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)setDelegate:(id<PKAddSecureElementPassViewControllerDelegate>)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(BOOL)shouldAutorotate;
-(void)didFinishWithPasses:(id)arg1 error:(id)arg2 ;
-(void)loadRemoteViewController;
-(void)setRemoteVC:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 delegate:(id)arg2 ;
-(void)didFinishWithPass:(id)arg1 error:(id)arg2 ;
-(id)childViewControllerForStatusBarHidden;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

