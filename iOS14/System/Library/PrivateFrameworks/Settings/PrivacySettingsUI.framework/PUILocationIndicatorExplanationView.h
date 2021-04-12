/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UIImageView, UILabel;

@interface PUILocationIndicatorExplanationView : UIView <PSHeaderFooterView> {

	UIImageView* _activeIcon;
	UILabel* _activeLabel;
	UIImageView* _recentIcon;
	UILabel* _recentLabel;
	UIImageView* _geofenceIcon;
	UILabel* _geofenceLabel;
	UILabel* _explanationLabel;

}
-(void)layoutForWidth:(double)arg1 inTableView:(id)arg2 ;
-(id)initWithSpecifier:(id)arg1 ;
-(void)layoutSubviews;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(id)generalExplanationItemString;
@end

