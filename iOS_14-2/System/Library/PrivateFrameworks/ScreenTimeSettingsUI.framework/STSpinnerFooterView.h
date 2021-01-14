/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class PSSpecifier, UIActivityIndicatorView, NSLayoutConstraint;

@interface STSpinnerFooterView : UITableViewHeaderFooterView <PSHeaderFooterView> {

	PSSpecifier* _specifier;
	UIActivityIndicatorView* _spinnerView;
	NSLayoutConstraint* _spinnerViewVerticalPositionConstraint;

}

@property (__weak,readonly) PSSpecifier * specifier;                                        //@synthesize specifier=_specifier - In the implementation block
@property (readonly) UIActivityIndicatorView * spinnerView;                                 //@synthesize spinnerView=_spinnerView - In the implementation block
@property (retain) NSLayoutConstraint * spinnerViewVerticalPositionConstraint;              //@synthesize spinnerViewVerticalPositionConstraint=_spinnerViewVerticalPositionConstraint - In the implementation block
-(PSSpecifier *)specifier;
-(id)initWithSpecifier:(id)arg1 ;
-(UIActivityIndicatorView *)spinnerView;
-(void)layoutSubviews;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)startAnimatingSpinner;
-(void)stopAnimatingSpinner;
-(void)reloadFromSpecifier;
-(NSLayoutConstraint *)spinnerViewVerticalPositionConstraint;
-(void)setSpinnerViewVerticalPositionConstraint:(NSLayoutConstraint *)arg1 ;
@end

