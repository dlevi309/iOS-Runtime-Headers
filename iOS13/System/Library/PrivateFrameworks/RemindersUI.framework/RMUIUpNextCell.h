/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemindersUI.framework/RemindersUI
*/

#import <RemindersUI/RemindersUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, RMUIUpNextLabel, UIImageView, RMUIUpNextRowSeparator, UIView;

@interface RMUIUpNextCell : UIView {

	UIVisualEffectView* _primaryVibrantView;
	UIVisualEffectView* _secondaryVibrantView;
	UIVisualEffectView* _tertiaryVibrantView;
	RMUIUpNextLabel* _timeLabel;
	RMUIUpNextLabel* _titleLabel;
	RMUIUpNextLabel* _locationLabel;
	UIImageView* _circleImageView;
	RMUIUpNextRowSeparator* _rowSeparator;
	UIView* _contentView;

}

@property (nonatomic,readonly) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(UIView *)contentView;
-(void)setFrame:(CGRect)arg1 ;
-(void)setupConstraints;
-(id)titleStringForReminder:(id)arg1 ;
-(void)updateMaxLayoutWidth;
-(double)timeViewWidth;
-(double)rightMarginForTimeViewWidth:(double)arg1 ;
-(double)leftMarginForTimeViewWidth:(double)arg1 ;
-(id)priorityImageForLevel:(long long)arg1 withColor:(id)arg2 ;
-(id)initWithReminder:(id)arg1 showRowSeparator:(BOOL)arg2 ;
@end

