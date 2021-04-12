/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMessageWhileSpinning:(id)arg1 ;
-(void)setMessageFont:(id)arg1 ;
-(void)_setupSubviews;
-(void)startSpinner;
-(void)updateConstraints;
-(void)stopSpinner;
-(BOOL)isAnimating;
@end

