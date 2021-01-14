/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel, UIActivityIndicatorView;

@interface AXUIVoiceOverTextSpinnerView : UIView <PSHeaderFooterView> {

	UILabel* _text;
	UIActivityIndicatorView* _spinner;

}
-(void)hideSpinner;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)showSpinner;
@end

