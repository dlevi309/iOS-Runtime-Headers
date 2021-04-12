/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<PKAddSecureElementPassViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAddSecureElementPassViewControllerDelegate>)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(BOOL)shouldAutorotate;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(void)didFinishWithPass:(id)arg1 error:(id)arg2 ;
-(void)loadRemoteViewController;
-(void)setRemoteVC:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithConfiguration:(id)arg1 delegate:(id)arg2 ;
@end

