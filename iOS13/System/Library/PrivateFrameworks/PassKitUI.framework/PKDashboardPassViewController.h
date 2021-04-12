/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardViewController.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiterObserver.h>
#import <libobjc.A.dylib/_PKUIKVisibilityBackdropViewDelegate.h>
#import <libobjc.A.dylib/BKOperationDelegate.h>

@protocol OS_dispatch_source;
@class BKPresenceDetectOperation, NSObject, PKPaymentPass, _PKUIKVisibilityBackdropView, UIButton, PKPass, NSString;

@interface PKDashboardPassViewController : PKDashboardViewController <PKForegroundActiveArbiterObserver, _PKUIKVisibilityBackdropViewDelegate, BKOperationDelegate> {

	BOOL _fingerPresent;
	BKPresenceDetectOperation* _fingerDetectionOperation;
	NSObject*<OS_dispatch_source> _fingerTimer;
	BOOL _invalidated;
	SCD_Struct_PK4 _foregroundActiveState;
	unsigned char _visibility;
	BOOL _footerVisible;
	PKPaymentPass* _frontmostPaymentPass;
	_PKUIKVisibilityBackdropView* _footerBackground;
	CGSize _defaultPasscodeButtonSize;
	UIButton* _passcodeButton;
	PKPass* _frontmostPass;

}

@property (assign,nonatomic,__weak) id<PKDashboardPassViewControllerDelegate><PKDashboardDelegate> delegate; 
@property (nonatomic,retain) PKPass * frontmostPass;                                                                      //@synthesize frontmostPass=_frontmostPass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK4)arg2 ;
-(void)operation:(id)arg1 presenceStateChanged:(BOOL)arg2 ;
-(void)_createFooter;
-(void)_visibilityDidChange;
-(void)_updateFingerDetection;
-(void)_updateFooterAnimated:(BOOL)arg1 ;
-(void)_updatePasscodeButtonTitle;
-(void)_passcodeTapped:(id)arg1 ;
-(long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2 ;
-(void)setFrontmostPass:(PKPass *)arg1 ;
-(void)showStatement:(id)arg1 account:(id)arg2 ;
-(PKPass *)frontmostPass;
@end

