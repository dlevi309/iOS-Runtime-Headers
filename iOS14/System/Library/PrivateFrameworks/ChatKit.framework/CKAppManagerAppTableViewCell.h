/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UITableViewCell.h>

@protocol CKAppManagerAppTableViewCellDelegate;
@class UISwitch;

@interface CKAppManagerAppTableViewCell : UITableViewCell {

	id<CKAppManagerAppTableViewCellDelegate> _delegate;
	UISwitch* _appToggle;

}

@property (assign,nonatomic,__weak) id<CKAppManagerAppTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UISwitch * appToggle;                                                  //@synthesize appToggle=_appToggle - In the implementation block
+(id)reuseIdentifier;
-(void)layoutMarginsDidChange;
-(id<CKAppManagerAppTableViewCellDelegate>)delegate;
-(void)prepareForReuse;
-(UISwitch *)appToggle;
-(void)setDelegate:(id<CKAppManagerAppTableViewCellDelegate>)arg1 ;
-(void)setToggleVisible:(BOOL)arg1 editable:(BOOL)arg2 isOn:(BOOL)arg3 ;
-(void)appToggleTapped:(id)arg1 ;
-(void)setAppToggle:(UISwitch *)arg1 ;
-(void)updateCellWithPluginInfo:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

