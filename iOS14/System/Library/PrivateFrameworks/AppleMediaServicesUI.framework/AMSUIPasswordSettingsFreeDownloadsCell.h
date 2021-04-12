/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol AMSUIPasswordSettingsFreeDownloadsCellDelegate;
@class UISwitch;

@interface AMSUIPasswordSettingsFreeDownloadsCell : UITableViewCell {

	id<AMSUIPasswordSettingsFreeDownloadsCellDelegate> _delegate;
	UISwitch* _toggle;

}

@property (assign,nonatomic) id<AMSUIPasswordSettingsFreeDownloadsCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UISwitch * toggle;                                                        //@synthesize toggle=_toggle - In the implementation block
-(UISwitch *)toggle;
-(id<AMSUIPasswordSettingsFreeDownloadsCellDelegate>)delegate;
-(void)setDelegate:(id<AMSUIPasswordSettingsFreeDownloadsCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setToggle:(UISwitch *)arg1 ;
-(long long)selectionStyle;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)toggleChanged:(id)arg1 ;
@end

