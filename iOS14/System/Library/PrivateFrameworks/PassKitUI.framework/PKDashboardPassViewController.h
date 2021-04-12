/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardViewController.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiterObserver.h>
#import <libobjc.A.dylib/_PKUIKVisibilityBackdropViewDelegate.h>
#import <libobjc.A.dylib/BKOperationDelegate.h>

@protocol OS_dispatch_source;
@class BKPresenceDetectOperation, NSObject, PKPaymentPass, _PKUIKVisibilityBackdropView, UIButton, PKPass, PKDashboardPassFlowLayout, PKDashboardPaymentTransactionItemPresenter, NSString;

@interface PKDashboardPassViewController : PKDashboardViewController <PKForegroundActiveArbiterObserver, _PKUIKVisibilityBackdropViewDelegate, BKOperationDelegate> {

	BOOL _fingerPresent;
	BKPresenceDetectOperation* _fingerDetectionOperation;
	NSObject*<OS_dispatch_source> _fingerTimer;
	BOOL _invalidated;
	SCD_Struct_PK5 _foregroundActiveState;
	unsigned char _visibility;
	BOOL _footerVisible;
	PKPaymentPass* _frontmostPaymentPass;
	_PKUIKVisibilityBackdropView* _footerBackground;
	CGSize _defaultPasscodeButtonSize;
	UIButton* _passcodeButton;
	PKPass* _frontmostPass;
	PKDashboardPassFlowLayout* _passFlowLayout;
	PKDashboardPaymentTransactionItemPresenter* _transactionPresenter;

}

@property (assign,nonatomic,__weak) id<PKDashboardPassViewControllerDelegate><PKDashboardDelegate> delegate; 
@property (nonatomic,retain) PKPass * frontmostPass;                                                                      //@synthesize frontmostPass=_frontmostPass - In the implementation block
@property (nonatomic,readonly) PKDashboardPassFlowLayout * passFlowLayout;                                                //@synthesize passFlowLayout=_passFlowLayout - In the implementation block
@property (nonatomic,readonly) PKDashboardPaymentTransactionItemPresenter * transactionPresenter;                         //@synthesize transactionPresenter=_transactionPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)dataSource:(id*)arg1 presenters:(id*)arg2 forGroupView:(id)arg3 context:(id)arg4 presentingViewController:(id)arg5 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK5)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewSafeAreaInsetsDidChange;
-(id)initWithDataSource:(id)arg1 presenters:(id)arg2 layout:(id)arg3 ;
-(void)setFrontmostPass:(PKPass *)arg1 ;
-(void)_createFooter;
-(void)_visibilityDidChange;
-(void)_updateFingerDetection;
-(void)_updateFooterAnimated:(BOOL)arg1 ;
-(void)_passcodeTapped:(id)arg1 ;
-(void)_updatePasscodeButtonTitle;
-(long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2 ;
-(PKPass *)frontmostPass;
-(PKDashboardPassFlowLayout *)passFlowLayout;
-(PKDashboardPaymentTransactionItemPresenter *)transactionPresenter;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)invalidate;
-(void)loadView;
-(id)initWithPass:(id)arg1 ;
-(void)operation:(id)arg1 presenceStateChanged:(BOOL)arg2 ;
-(void)dealloc;
@end

