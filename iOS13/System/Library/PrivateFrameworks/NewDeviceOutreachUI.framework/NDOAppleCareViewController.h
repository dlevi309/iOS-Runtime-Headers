/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NDOAppleCareWebViewPresenterProtocol.h>
#import <libobjc.A.dylib/NDOAppleCareAMSUIViewPresenterProtocol.h>

@protocol NDOAppleCareFlowDelegate;
@class NDOWarranty, NSString, UINavigationBar, UINavigationItem, UILabel, UIStackView, UIButton;

@interface NDOAppleCareViewController : UIViewController <NDOAppleCareWebViewPresenterProtocol, NDOAppleCareAMSUIViewPresenterProtocol> {

	id<NDOAppleCareFlowDelegate> _presentor;
	NDOWarranty* _warranty;
	NSString* _serialNumber;
	unsigned long long _presentationType;
	UINavigationBar* _navBar;
	UINavigationItem* _navBarItem;
	UILabel* _detailsTextView;
	UIStackView* _buttonStackView;
	UIButton* _notNowButton;
	UIButton* _continueButton;

}

@property (retain) NDOWarranty * warranty;                                      //@synthesize warranty=_warranty - In the implementation block
@property (retain) NSString * serialNumber;                                     //@synthesize serialNumber=_serialNumber - In the implementation block
@property (assign) unsigned long long presentationType;                         //@synthesize presentationType=_presentationType - In the implementation block
@property (assign,nonatomic,__weak) UINavigationBar * navBar;                   //@synthesize navBar=_navBar - In the implementation block
@property (assign,nonatomic,__weak) UINavigationItem * navBarItem;              //@synthesize navBarItem=_navBarItem - In the implementation block
@property (assign,nonatomic,__weak) UILabel * detailsTextView;                  //@synthesize detailsTextView=_detailsTextView - In the implementation block
@property (assign,nonatomic,__weak) UIStackView * buttonStackView;              //@synthesize buttonStackView=_buttonStackView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * notNowButton;                    //@synthesize notNowButton=_notNowButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * continueButton;                  //@synthesize continueButton=_continueButton - In the implementation block
@property (__weak) id<NDOAppleCareFlowDelegate> presentor;                      //@synthesize presentor=_presentor - In the implementation block
-(NSString *)serialNumber;
-(void)loadView;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setContinueButton:(UIButton *)arg1 ;
-(UIButton *)continueButton;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)okButtonPressed;
-(unsigned long long)presentationType;
-(void)setPresentationType:(unsigned long long)arg1 ;
-(void)setButtonStackView:(UIStackView *)arg1 ;
-(UIStackView *)buttonStackView;
-(void)cancelPressed:(id)arg1 ;
-(void)setNavBar:(UINavigationBar *)arg1 ;
-(UINavigationBar *)navBar;
-(UIButton *)notNowButton;
-(void)setNotNowButton:(UIButton *)arg1 ;
-(void)setDetailsTextView:(UILabel *)arg1 ;
-(UILabel *)detailsTextView;
-(id)initWithWarranty:(id)arg1 presentationType:(unsigned long long)arg2 serialNumber:(id)arg3 ;
-(id)initWithWarranty:(id)arg1 ;
-(void)setPresentor:(id<NDOAppleCareFlowDelegate>)arg1 ;
-(id)initWithWarranty:(id)arg1 presentationType:(unsigned long long)arg2 ;
-(void)setWarranty:(NDOWarranty *)arg1 ;
-(NDOWarranty *)warranty;
-(id<NDOAppleCareFlowDelegate>)presentor;
-(void)completeWithStatus:(unsigned long long)arg1 ;
-(void)webviewFinishedWithCompletion:(unsigned long long)arg1 ;
-(void)amsUIViewFinishedWithCompletion:(unsigned long long)arg1 ;
-(void)getAppleCarePressed:(id)arg1 ;
-(void)notNowPressed:(id)arg1 ;
-(UINavigationItem *)navBarItem;
-(void)setNavBarItem:(UINavigationItem *)arg1 ;
@end

