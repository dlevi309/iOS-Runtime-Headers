/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isOn;
-(id<WDCheckmarkTableViewCellDelegate>)delegate;
-(void)clickToggle:(id)arg1 ;
-(void)setOn:(BOOL)arg1 ;
-(void)setDelegate:(id<WDCheckmarkTableViewCellDelegate>)arg1 ;
-(void)setDisplayText:(id)arg1 ;
-(void)_setupUI;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

