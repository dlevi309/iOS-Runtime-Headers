/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OBBaseWelcomeController.h>
#import <libobjc.A.dylib/OBSetupAssistantSupport.h>

@class OBPrivacyLinkController, UILabel, UIActivityIndicatorView, UIScrollView, UIView, NSString;

@interface OBSetupAssistantSpinnerController : OBBaseWelcomeController <OBSetupAssistantSupport> {

	BOOL _activityIndicatorHidden;
	OBPrivacyLinkController* _privacyLinkController;
	UILabel* _label;
	UIActivityIndicatorView* _activityIndicator;
	UIScrollView* _scrollView;
	UIView* _scrollContentView;

}

@property (nonatomic,retain) UILabel * label;                                                            //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                                //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                  //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIView * scrollContentView;                                                 //@synthesize scrollContentView=_scrollContentView - In the implementation block
@property (assign,getter=isActivityIndicatorHidden,nonatomic) BOOL activityIndicatorHidden;              //@synthesize activityIndicatorHidden=_activityIndicatorHidden - In the implementation block
@property (nonatomic,retain) OBPrivacyLinkController * privacyLinkController;                            //@synthesize privacyLinkController=_privacyLinkController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIActivityIndicatorView *)activityIndicator;
-(void)_updateLayout;
-(void)_updateTextColor;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)updateDirectionalLayoutMargins;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(BOOL)_shouldUseScrollView;
-(void)setScrollContentView:(UIView *)arg1 ;
-(UIView *)scrollContentView;
-(BOOL)isActivityIndicatorHidden;
-(id)initWithSpinnerText:(id)arg1 ;
-(void)setActivityIndicatorHidden:(BOOL)arg1 ;
-(long long)_activityIndicatorViewStyle;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(id)_textStyle;
-(void)setLabel:(UILabel *)arg1 ;
-(void)loadView;
-(void)setPrivacyLinkController:(OBPrivacyLinkController *)arg1 ;
-(OBPrivacyLinkController *)privacyLinkController;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(UILabel *)label;
@end

