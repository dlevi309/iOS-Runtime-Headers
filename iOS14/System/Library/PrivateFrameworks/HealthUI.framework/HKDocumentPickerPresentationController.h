/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKHealthPrivacyHostDocumentPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/_HKDocumentPickerPresentationController.h>

@class _UIAsyncInvocation, HKHealthPrivacyHostDocumentPickerViewController, UIWindow, NSString;

@interface HKDocumentPickerPresentationController : NSObject <HKHealthPrivacyHostDocumentPickerViewControllerDelegate, _HKDocumentPickerPresentationController> {

	BOOL _didPresent;
	_UIAsyncInvocation* _requestCancellationInvocation;
	HKHealthPrivacyHostDocumentPickerViewController* _hostViewController;
	UIWindow* _savedKeyWindow;
	UIWindow* _window;

}

@property (nonatomic,retain) _UIAsyncInvocation * requestCancellationInvocation;                                //@synthesize requestCancellationInvocation=_requestCancellationInvocation - In the implementation block
@property (nonatomic,retain) HKHealthPrivacyHostDocumentPickerViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (nonatomic,retain) UIWindow * savedKeyWindow;                                                         //@synthesize savedKeyWindow=_savedKeyWindow - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                                                 //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) BOOL didPresent;                                                                   //@synthesize didPresent=_didPresent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)didPresent;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)setHostViewController:(HKHealthPrivacyHostDocumentPickerViewController *)arg1 ;
-(HKHealthPrivacyHostDocumentPickerViewController *)hostViewController;
-(void)setDidPresent:(BOOL)arg1 ;
-(UIWindow *)window;
-(void)cancelPresentation;
-(void)presentWithSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)_presentWithPromptSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dismissViewControllerAnimated:(BOOL)arg1 ;
-(void)_presentRemoteViewController:(id)arg1 ;
-(void)_requestAndConfigureHostViewController:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didFinishDismissing;
-(void)healthPrivacyHostDocumentPickerViewController:(id)arg1 didFinishWithError:(id)arg2 ;
-(_UIAsyncInvocation *)requestCancellationInvocation;
-(void)setRequestCancellationInvocation:(_UIAsyncInvocation *)arg1 ;
-(UIWindow *)savedKeyWindow;
-(void)setSavedKeyWindow:(UIWindow *)arg1 ;
@end

