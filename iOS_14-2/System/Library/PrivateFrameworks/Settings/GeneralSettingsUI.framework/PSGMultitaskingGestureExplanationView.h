/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithSpecifier:(id)arg1 ;
-(void)layoutSubviews;
-(double)preferredHeightForWidth:(double)arg1 ;
-(id)newRegionSampleLabelUnderlined;
-(id)_accessibilityLabels;
@end

