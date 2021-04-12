/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UITableViewCell.h>

@protocol SFSwitchTableViewCellDelegate;
@class UISwitch;

@interface SFSwitchTableViewCell : UITableViewCell {

	UISwitch* _switchView;
	id<SFSwitchTableViewCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SFSwitchTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isSwitchOn,nonatomic) BOOL switchOn; 
-(void)_switchViewStateDidChange:(id)arg1 ;
-(void)setSwitchOn:(BOOL)arg1 ;
-(BOOL)isSwitchOn;
-(id<SFSwitchTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<SFSwitchTableViewCellDelegate>)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

