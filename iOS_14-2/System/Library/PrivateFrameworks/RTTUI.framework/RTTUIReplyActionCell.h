/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol RTTUIReplyActionCellDelegate;
@interface RTTUIReplyActionCell : UITableViewCell {

	id<RTTUIReplyActionCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RTTUIReplyActionCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id<RTTUIReplyActionCellDelegate>)delegate;
-(void)setDelegate:(id<RTTUIReplyActionCellDelegate>)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 andDelegate:(id)arg3 ;
-(double)adjustedHeight;
@end

