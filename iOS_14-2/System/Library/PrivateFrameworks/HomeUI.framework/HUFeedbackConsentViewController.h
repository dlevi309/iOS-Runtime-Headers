/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateViewConstraints;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)htmlString;
-(void)viewDidLoad;
-(void)loadView;
-(void)dealloc;
-(id)initWithConsentDelegate:(id)arg1 ;
-(WKWebView *)consentView;
-(void)didDeclineConsent;
-(void)didAcceptConsent;
-(id<HUFeedbackConsentViewControllerDelegate>)consentDelegate;
-(id)consentFormFilePath;
-(void)setConsentView:(WKWebView *)arg1 ;
-(BOOL)isFamilyAndFriendsConsent;
-(void)setIsFamilyAndFriendsConsent:(BOOL)arg1 ;
-(void)setConsentDelegate:(id<HUFeedbackConsentViewControllerDelegate>)arg1 ;
@end

