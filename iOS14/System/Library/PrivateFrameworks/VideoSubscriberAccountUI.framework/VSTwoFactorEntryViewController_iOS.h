/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/VSTwoFactorDigitViewDelegate.h>
#import <libobjc.A.dylib/VSTwoFactorEntryViewController.h>

@protocol VSAuthenticationViewControllerDelegate;
@class VSTwoFactorEntryViewModel, UIBarButtonItem, UIScrollView, VSTwoFactorDigitView, NSArray, VSIdentityProviderLogoView, VSFontCenter, NSString;

@interface VSTwoFactorEntryViewController_iOS : UIViewController <UIScrollViewDelegate, VSTwoFactorDigitViewDelegate, VSTwoFactorEntryViewController> {

	BOOL _cancellationAllowed;
	id<VSAuthenticationViewControllerDelegate> _delegate;
	VSTwoFactorEntryViewModel* _viewModel;
	UIBarButtonItem* _verifyButton;
	UIScrollView* _scrollView;
	VSTwoFactorDigitView* _digitView;
	NSArray* _buttons;
	VSIdentityProviderLogoView* _logoView;
	VSFontCenter* _fontCenter;

}

@property (nonatomic,retain) UIBarButtonItem * verifyButton;                                          //@synthesize verifyButton=_verifyButton - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                               //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) VSTwoFactorDigitView * digitView;                                        //@synthesize digitView=_digitView - In the implementation block
@property (nonatomic,retain) NSArray * buttons;                                                       //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) VSIdentityProviderLogoView * logoView;                                   //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,retain) VSFontCenter * fontCenter;                                               //@synthesize fontCenter=_fontCenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) VSTwoFactorEntryViewModel * viewModel;                                   //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<VSAuthenticationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isCancellationAllowed,nonatomic) BOOL cancellationAllowed;                   //@synthesize cancellationAllowed=_cancellationAllowed - In the implementation block
@property (nonatomic,readonly) CGSize preferredLogoSize; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<VSAuthenticationViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSArray *)buttons;
-(VSTwoFactorEntryViewModel *)viewModel;
-(void)buttonPressed:(id)arg1 ;
-(void)setDelegate:(id<VSAuthenticationViewControllerDelegate>)arg1 ;
-(void)setViewModel:(VSTwoFactorEntryViewModel *)arg1 ;
-(void)viewDidLoad;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(VSIdentityProviderLogoView *)logoView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)setButtons:(NSArray *)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setLogoView:(VSIdentityProviderLogoView *)arg1 ;
-(VSFontCenter *)fontCenter;
-(void)setFontCenter:(VSFontCenter *)arg1 ;
-(BOOL)isCancellationAllowed;
-(CGSize)preferredLogoSize;
-(void)setCancellationAllowed:(BOOL)arg1 ;
-(void)twoFactorDigitView:(id)arg1 textDidChange:(id)arg2 ;
-(void)stopObservingViewModel:(id)arg1 ;
-(void)setDigitView:(VSTwoFactorDigitView *)arg1 ;
-(VSTwoFactorDigitView *)digitView;
-(void)verifyButtonPressed:(id)arg1 ;
-(void)setVerifyButton:(UIBarButtonItem *)arg1 ;
-(void)startObservingViewModel:(id)arg1 ;
-(UIBarButtonItem *)verifyButton;
@end

