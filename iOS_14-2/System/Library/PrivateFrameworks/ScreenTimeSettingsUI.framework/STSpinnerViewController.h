/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <UIKitCore/UIViewController.h>

@class UIActivityIndicatorView;

@interface STSpinnerViewController : UIViewController {

	UIActivityIndicatorView* _spinnerView;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;              //@synthesize spinnerView=_spinnerView - In the implementation block
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)spinnerView;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

