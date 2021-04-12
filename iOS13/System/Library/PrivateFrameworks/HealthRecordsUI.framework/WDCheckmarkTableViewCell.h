/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol WDCheckmarkTableViewCellDelegate;
@class UILabel, UIButton;

@interface WDCheckmarkTableViewCell : UITableViewCell {

	UILabel* _displayLabel;
	UIButton* _button;
	id<WDCheckmarkTableViewCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WDCheckmarkTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on; 
+(id)reuseIdentifier;
-(id<WDCheckmarkTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<WDCheckmarkTableViewCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
-(void)setDisplayText:(id)arg1 ;
-(void)_setupUI;
-(void)clickToggle:(id)arg1 ;
@end

