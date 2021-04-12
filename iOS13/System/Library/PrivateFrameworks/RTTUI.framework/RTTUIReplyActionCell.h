/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol RTTUIReplyActionCellDelegate;
@interface RTTUIReplyActionCell : UITableViewCell {

	id<RTTUIReplyActionCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RTTUIReplyActionCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<RTTUIReplyActionCellDelegate>)delegate;
-(void)setDelegate:(id<RTTUIReplyActionCellDelegate>)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 andDelegate:(id)arg3 ;
@end

