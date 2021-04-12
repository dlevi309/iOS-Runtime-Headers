/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>

@protocol HUFeedbackConsentViewControllerDelegate;
@class WKWebView;

@interface HUFeedbackConsentViewController : UIViewController {

	BOOL _isFamilyAndFriendsConsent;
	WKWebView* _consentView;
	id<HUFeedbackConsentViewControllerDelegate> _consentDelegate;

}

@property (nonatomic,retain) WKWebView * consentView;                                                  //@synthesize consentView=_consentView - In the implementation block
@property (assign,nonatomic) BOOL isFamilyAndFriendsConsent;                                           //@synthesize isFamilyAndFriendsConsent=_isFamilyAndFriendsConsent - In the implementation block
@property (nonatomic,retain) id<HUFeedbackConsentViewControllerDelegate> consentDelegate;              //@synthesize consentDelegate=_consentDelegate - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)updateViewConstraints;
-(id)htmlString;
-(void)setConsentDelegate:(id<HUFeedbackConsentViewControllerDelegate>)arg1 ;
-(id<HUFeedbackConsentViewControllerDelegate>)consentDelegate;
-(id)initWithConsentDelegate:(id)arg1 ;
-(WKWebView *)consentView;
-(void)didDeclineConsent;
-(void)didAcceptConsent;
-(id)consentFormFilePath;
-(void)setConsentView:(WKWebView *)arg1 ;
-(BOOL)isFamilyAndFriendsConsent;
-(void)setIsFamilyAndFriendsConsent:(BOOL)arg1 ;
@end

