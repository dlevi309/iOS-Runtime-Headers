/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel, PSGUnderlineButton, UIColor;

@interface PSGMultitaskingGestureExplanationView : UIView <PSHeaderFooterView> {

	UILabel* _labels[4];
	PSGUnderlineButton* _videoLinkButton;
	double _sized;
	double _width;
	UIColor* _footerTextColor;

}
-(BOOL)isRTL;
-(void)layoutSubviews;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(id)newRegionSampleLabelUnderlined;
-(id)_accessibilityLabels;
@end

