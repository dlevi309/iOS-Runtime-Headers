/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTVisualStylingProviding.h>

@class UIImageView, UILabel, UIView, NCNotificationManagementBlueButton, NSMutableDictionary, NSString;

@interface NCNotificationManagementView : UIView <MTVisualStylingProviding> {

	UIImageView* _icon;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView* _topSeparator;
	NCNotificationManagementBlueButton* _onOffToggleButton;
	NCNotificationManagementBlueButton* _deliveryButton;
	UILabel* _explanation;
	UIView* _bottomSeparator;
	NSMutableDictionary* _categoriesToProviders;
	BOOL _isCriticalAlert;

}

@property (nonatomic,readonly) NCNotificationManagementBlueButton * deliveryButton;                 //@synthesize deliveryButton=_deliveryButton - In the implementation block
@property (nonatomic,readonly) NCNotificationManagementBlueButton * onOffToggleButton;              //@synthesize onOffToggleButton=_onOffToggleButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_dynamicUserInterfaceTraitDidChange;
-(double)_separatorHeight;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(id)initWithIcon:(id)arg1 title:(id)arg2 subtitle:(id)arg3 sectionSettings:(id)arg4 criticalAlert:(BOOL)arg5 ;
-(NCNotificationManagementBlueButton *)deliveryButton;
-(NCNotificationManagementBlueButton *)onOffToggleButton;
-(void)_configureIconIfNeccessary:(id)arg1 ;
-(void)_configureTitleIfNeccessary:(id)arg1 ;
-(void)_configureSubtitleIfNeccessary:(id)arg1 ;
-(void)_configureDeliveryButtonIfNeccessary:(id)arg1 ;
-(void)_configureExplanationIfNeccessary:(id)arg1 ;
-(void)_configureOnOffToggleButtonIfNeccessary:(id)arg1 ;
-(id)_newSeparatorView;
-(void)_updateTopSeparatorVisualStyling;
-(void)_updateExplanationVisualStyling;
-(void)_configureTopSeparatorIfNeccessary;
-(CGSize)_titleSizeForPlatterWidth:(double)arg1 ;
-(CGSize)_explanationSizeForPlatterWidth:(double)arg1 ;
@end

