/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol RTTUIServiceCellDelegate;
@class UITextView, RTTServiceUpdate;

@interface RTTUIServiceUpdateCell : UITableViewCell {

	UITextView* _titleView;
	UITextView* _subtitleView;
	RTTServiceUpdate* _serviceUpdate;
	id<RTTUIServiceCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RTTUIServiceCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)heightForWidth:(double)arg1 delegate:(id)arg2 serviceUpdate:(id)arg3 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateLayout;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(id<RTTUIServiceCellDelegate>)delegate;
-(void)setDelegate:(id<RTTUIServiceCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 serviceUpdate:(id)arg3 ;
-(void)adjustTextViewSize;
-(id)serviceTitle;
-(id)serviceMessage;
@end

