/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NDOAppleCareWebViewPresenterProtocol.h>
#import <libobjc.A.dylib/NDOAppleCareAMSUIViewPresenterProtocol.h>

@protocol NDOAppleCareFlowDelegate;
@class NDOWarranty, NSString, NSLayoutConstraint, UINavigationBar, UINavigationItem, UILabel, UIStackView, UIButton;

@interface NDOAppleCareViewController : UIViewController <NDOAppleCareWebViewPresenterProtocol, NDOAppleCareAMSUIViewPresenterProtocol> {

	id<NDOAppleCareFlowDelegate> _presentor;
	NDOWarranty* _warranty;
	NSString* _serialNumber;
	unsigned long long _presentationType;
	NSLayoutConstraint* _leadingConstraint;
	NSLayoutConstraint* _trailingConstraint;
	NSLayoutConstraint* _notNowButtonLeadingConstraint;
	NSLayoutConstraint* _notNowButtonTrailingConstraint;
	UINavigationBar* _navBar;
	UINavigationItem* _navBarItem;
	UILabel* _detailsTextView;
	UIStackView* _buttonStackView;
	UIButton* _notNowButton;
	UIButton* _continueButton;

}

@property (retain) NDOWarranty * warranty;                                                            //@synthesize warranty=_warranty - In the implementation block
@property (retain) NSString * serialNumber;                                                           //@synthesize serialNumber=_serialNumber - In the implementation block
@property (assign) unsigned long long presentationType;                                               //@synthesize presentationType=_presentationType - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * leadingConstraint;                           //@synthesize leadingConstraint=_leadingConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * trailingConstraint;                          //@synthesize trailingConstraint=_trailingConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * notNowButtonLeadingConstraint;               //@synthesize notNowButtonLeadingConstraint=_notNowButtonLeadingConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * notNowButtonTrailingConstraint;              //@synthesize notNowButtonTrailingConstraint=_notNowButtonTrailingConstraint - In the implementation block
@property (assign,nonatomic,__weak) UINavigationBar * navBar;                                         //@synthesize navBar=_navBar - In the implementation block
@property (assign,nonatomic,__weak) UINavigationItem * navBarItem;                                    //@synthesize navBarItem=_navBarItem - In the implementation block
@property (assign,nonatomic,__weak) UILabel * detailsTextView;                                        //@synthesize detailsTextView=_detailsTextView - In the implementation block
@property (assign,nonatomic,__weak) UIStackView * buttonStackView;                                    //@synthesize buttonStackView=_buttonStackView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * notNowButton;                                          //@synthesize notNowButton=_notNowButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * continueButton;                                        //@synthesize continueButton=_continueButton - In the implementation block
@property (__weak) id<NDOAppleCareFlowDelegate> presentor;                                            //@synthesize presentor=_presentor - In the implementation block
-(NSString *)serialNumber;
-(NSLayoutConstraint *)leadingConstraint;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setDetailsTextView:(UILabel *)arg1 ;
-(void)setTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(UILabel *)detailsTextView;
-(void)okButtonPressed;
-(UINavigationBar *)navBar;
-(void)setPresentationType:(unsigned long long)arg1 ;
-(UIButton *)notNowButton;
-(void)setNotNowButton:(UIButton *)arg1 ;
-(unsigned long long)presentationType;
-(void)setLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)viewDidLoad;
-(NSLayoutConstraint *)trailingConstraint;
-(void)cancelPressed:(id)arg1 ;
-(UIButton *)continueButton;
-(void)loadView;
-(void)setContinueButton:(UIButton *)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)setButtonStackView:(UIStackView *)arg1 ;
-(UIStackView *)buttonStackView;
-(void)setNavBar:(UINavigationBar *)arg1 ;
-(id)initWithWarranty:(id)arg1 presentationType:(unsigned long long)arg2 ;
-(id)initWithWarranty:(id)arg1 presentationType:(unsigned long long)arg2 serialNumber:(id)arg3 ;
-(void)setWarranty:(NDOWarranty *)arg1 ;
-(NDOWarranty *)warranty;
-(NSLayoutConstraint *)notNowButtonTrailingConstraint;
-(NSLayoutConstraint *)notNowButtonLeadingConstraint;
-(void)completeWithStatus:(unsigned long long)arg1 params:(id)arg2 ;
-(id<NDOAppleCareFlowDelegate>)presentor;
-(void)completeWithStatus:(unsigned long long)arg1 ;
-(void)webviewFinishedWithCompletion:(unsigned long long)arg1 ;
-(void)amsUIViewFinishedWithCompletion:(unsigned long long)arg1 ;
-(void)amsUIViewFinishedWithCompletion:(unsigned long long)arg1 params:(id)arg2 ;
-(id)initWithWarranty:(id)arg1 ;
-(void)getAppleCarePressed:(id)arg1 ;
-(void)notNowPressed:(id)arg1 ;
-(void)setPresentor:(id<NDOAppleCareFlowDelegate>)arg1 ;
-(void)setNotNowButtonLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setNotNowButtonTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(UINavigationItem *)navBarItem;
-(void)setNavBarItem:(UINavigationItem *)arg1 ;
@end

