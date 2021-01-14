/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <UIKitCore/UIViewController.h>

@class UIActivityIndicatorView, UILabel;

@interface AAUISpinnerViewController : UIViewController {

	UIActivityIndicatorView* _spinnerView;
	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;                              //@synthesize label=_label - In the implementation block
@property (assign,getter=isSpinning,nonatomic) BOOL spinning; 
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setSpinning:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)setLabel:(UILabel *)arg1 ;
-(BOOL)isSpinning;
-(UILabel *)label;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

