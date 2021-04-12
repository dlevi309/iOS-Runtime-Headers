/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SUCodeRedeemerControllerDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class SUCodeRedeemerController, UIActivityIndicatorView, UIView, UIBarButtonItem, SURedeemCodeTextField, NSString;

@interface SURedeemCameraViewController : UIViewController <SUCodeRedeemerControllerDelegate, UITextFieldDelegate> {

	BOOL _ignoreDefaultKeyboardNotifications;
	/*^block*/id _codeHandler;
	SUCodeRedeemerController* _cameraController;
	double _keyboardHeight;
	long long _state;
	UIActivityIndicatorView* _activityIndicator;
	UIView* _overlayView;
	UIBarButtonItem* _redeemBarButton;
	SURedeemCodeTextField* _codeTextField;
	UIBarButtonItem* _toggleCameraBarButton;

}

@property (nonatomic,retain) SUCodeRedeemerController * cameraController;              //@synthesize cameraController=_cameraController - In the implementation block
@property (assign,nonatomic) double keyboardHeight;                                    //@synthesize keyboardHeight=_keyboardHeight - In the implementation block
@property (assign,nonatomic) long long state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                     //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * redeemBarButton;                        //@synthesize redeemBarButton=_redeemBarButton - In the implementation block
@property (nonatomic,retain) SURedeemCodeTextField * codeTextField;                    //@synthesize codeTextField=_codeTextField - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * toggleCameraBarButton;                  //@synthesize toggleCameraBarButton=_toggleCameraBarButton - In the implementation block
@property (assign,nonatomic) BOOL ignoreDefaultKeyboardNotifications;                  //@synthesize ignoreDefaultKeyboardNotifications=_ignoreDefaultKeyboardNotifications - In the implementation block
@property (nonatomic,copy) id codeHandler;                                             //@synthesize codeHandler=_codeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)cameraSupported;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)_setup;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)_updateState;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIView *)overlayView;
-(double)keyboardHeight;
-(void)setKeyboardHeight:(double)arg1 ;
-(void)_setupNotifications;
-(SUCodeRedeemerController *)cameraController;
-(void)setCameraController:(SUCodeRedeemerController *)arg1 ;
-(void)_setupNavigationItem;
-(void)setCodeHandler:(id)arg1 ;
-(void)performAction:(long long)arg1 withObject:(id)arg2 ;
-(void)_cancelButtonAction;
-(void)_startActivityIndicator;
-(id)codeHandler;
-(BOOL)ignoreDefaultKeyboardNotifications;
-(void)setIgnoreDefaultKeyboardNotifications:(BOOL)arg1 ;
-(void)_pauseCamera;
-(void)_recognitionError;
-(void)_recognitionSuccess;
-(void)_resumeCamera;
-(void)_setBackButtonTitle:(id)arg1 ;
-(void)_startCameraController;
-(void)_stopCameraController;
-(void)_layoutCodeTextField;
-(void)_dismissKeyboard;
-(void)_setupCameraController;
-(void)_setupCodeTextField;
-(void)_setupOverlayView;
-(void)_setupActivityIndicator;
-(void)_toggleCameraButtonAction;
-(void)setToggleCameraBarButton:(UIBarButtonItem *)arg1 ;
-(void)_redeemButtonAction;
-(void)setRedeemBarButton:(UIBarButtonItem *)arg1 ;
-(void)_layoutCodeTextFieldWithNotification:(id)arg1 ;
-(void)_overlayTapAction;
-(SURedeemCodeTextField *)codeTextField;
-(void)_detectedCode:(id)arg1 ;
-(UIBarButtonItem *)toggleCameraBarButton;
-(void)_presentCameraErrorAlert;
-(void)_stopAcitivityIndicator;
-(void)_hideOverlay;
-(void)_showOverlay;
-(void)_updateNavigationItemAnimated;
-(UIBarButtonItem *)redeemBarButton;
-(void)codeRedeemerControllerDidCancel;
-(void)codeRedeemerControllerDidEndWithCode:(id)arg1 error:(id)arg2 ;
-(void)setCodeTextField:(SURedeemCodeTextField *)arg1 ;
@end

