/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol WFInfoButtonTableViewCellDelegate;
@class UIButton, UIImageView, NSArray;

@interface WFInfoButtonTableViewCell : UITableViewCell {

	unsigned long long _accessoryMode;
	id<WFInfoButtonTableViewCellDelegate> _delegate;
	UIButton* _infoButton;
	UIImageView* _checkmarkView;

}

@property (assign,nonatomic) unsigned long long accessoryMode;                                   //@synthesize accessoryMode=_accessoryMode - In the implementation block
@property (assign,getter=isChecked,nonatomic) BOOL checked; 
@property (assign,nonatomic,__weak) id<WFInfoButtonTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * infoButton;                                            //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,readonly) UIImageView * checkmarkView;                                      //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (nonatomic,readonly) NSArray * accessoryViews; 
-(UIImageView *)checkmarkView;
-(void)infoButtonPressed:(id)arg1 ;
-(id<WFInfoButtonTableViewCellDelegate>)delegate;
-(unsigned long long)accessibilityTraits;
-(void)setDelegate:(id<WFInfoButtonTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)isChecked;
-(UIButton *)infoButton;
-(NSArray *)accessoryViews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setAccessoryMode:(unsigned long long)arg1 ;
-(unsigned long long)accessoryMode;
@end

