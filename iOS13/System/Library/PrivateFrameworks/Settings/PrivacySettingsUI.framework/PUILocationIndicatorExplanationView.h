/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}
-(void)layoutSubviews;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)layoutForWidth:(double)arg1 inTableView:(id)arg2 ;
@end

