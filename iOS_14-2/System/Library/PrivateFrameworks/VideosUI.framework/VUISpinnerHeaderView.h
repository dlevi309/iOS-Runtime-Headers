/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UIActivityIndicatorView, UILabel, PSSpecifier;

@interface VUISpinnerHeaderView : UIView <PSHeaderFooterView> {

	UIActivityIndicatorView* _spinner;
	UILabel* _text;
	PSSpecifier* _specifier;

}
-(void)hideText;
-(void)hideSpinner;
-(id)initWithSpecifier:(id)arg1 ;
-(void)layoutSubviews;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)showText;
-(void)showSpinner;
@end

