/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView, UILabel, NSLayoutConstraint;

@interface HRWDSpinnerView : UIView {

	UIActivityIndicatorView* _spinner;
	UILabel* _label;
	NSLayoutConstraint* _spinnerTopConstraint;

}

@property (getter=isAnimating,nonatomic,readonly) BOOL animating; 
-(id)init;
-(void)updateConstraints;
-(BOOL)isAnimating;
-(void)stopSpinner;
-(void)_setupSubviews;
-(void)setMessageWhileSpinning:(id)arg1 ;
-(void)setMessageFont:(id)arg1 ;
-(void)startSpinner;
@end

