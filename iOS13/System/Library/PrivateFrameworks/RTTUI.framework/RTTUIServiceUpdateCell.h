/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol RTTUIServiceCellDelegate;
@class UITextView;

@interface RTTUIServiceUpdateCell : UITableViewCell {

	UITextView* _titleView;
	UITextView* _subtitleView;
	id<RTTUIServiceCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RTTUIServiceCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)heightForWidth:(double)arg1 withDelegate:(id)arg2 ;
-(id<RTTUIServiceCellDelegate>)delegate;
-(void)setDelegate:(id<RTTUIServiceCellDelegate>)arg1 ;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(void)layoutSubviews;
-(void)updateLayout;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)adjustTextViewSize;
-(id)serviceMessage;
@end

