/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<CKAppManagerAppTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<CKAppManagerAppTableViewCellDelegate>)arg1 ;
-(void)prepareForReuse;
-(void)layoutMarginsDidChange;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setToggleVisible:(BOOL)arg1 editable:(BOOL)arg2 isOn:(BOOL)arg3 ;
-(UISwitch *)appToggle;
-(void)appToggleTapped:(id)arg1 ;
-(void)setAppToggle:(UISwitch *)arg1 ;
-(void)updateCellWithPluginInfo:(id)arg1 ;
@end

