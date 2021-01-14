/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol AMSUINotificationInAppSettingsTableViewCellDelegate;
@class AMSNotificationSettingsItem, UISwitch;

@interface AMSUINotificationSettingsTableViewCell : UITableViewCell {

	id<AMSUINotificationInAppSettingsTableViewCellDelegate> _delegate;
	AMSNotificationSettingsItem* _item;
	UISwitch* _itemSwitch;

}

@property (nonatomic,retain) UISwitch * itemSwitch;                                                                //@synthesize itemSwitch=_itemSwitch - In the implementation block
@property (assign,nonatomic,__weak) id<AMSUINotificationInAppSettingsTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AMSNotificationSettingsItem * item;                                                   //@synthesize item=_item - In the implementation block
-(id<AMSUINotificationInAppSettingsTableViewCellDelegate>)delegate;
-(AMSNotificationSettingsItem *)item;
-(void)setItem:(AMSNotificationSettingsItem *)arg1 ;
-(void)setDelegate:(id<AMSUINotificationInAppSettingsTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)switchToggled:(id)arg1 ;
-(UISwitch *)itemSwitch;
-(void)setItemSwitch:(UISwitch *)arg1 ;
@end

