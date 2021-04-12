/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSArray, NSString, UIColor, UIImageView, UILabel, NSLayoutConstraint;

@interface EKEventDetailsHighlightControl : UIControl {

	NSArray* _titleAndSubtitleVisibleContraints;
	NSArray* _justTitleVisibleContraints;
	NSArray* _justSubtitleVisibleContraints;
	NSArray* _justTitleAndActionVisibleContraints;
	NSString* _actionText;
	NSString* _subtitleText;
	UIColor* _actionColor;
	UIImageView* _iconStack;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _actionLabel;
	NSLayoutConstraint* _topMarginConstraint;
	NSLayoutConstraint* _interLabelPaddingConstraint;
	NSLayoutConstraint* _bottomMarginConstraint;

}

@property (nonatomic,retain,readonly) NSLayoutConstraint * topMarginConstraint;                      //@synthesize topMarginConstraint=_topMarginConstraint - In the implementation block
@property (nonatomic,retain,readonly) NSLayoutConstraint * interLabelPaddingConstraint;              //@synthesize interLabelPaddingConstraint=_interLabelPaddingConstraint - In the implementation block
@property (nonatomic,retain,readonly) NSLayoutConstraint * bottomMarginConstraint;                   //@synthesize bottomMarginConstraint=_bottomMarginConstraint - In the implementation block
@property (nonatomic,readonly) UIImageView * iconStack;                                              //@synthesize iconStack=_iconStack - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * actionLabel;                                                //@synthesize actionLabel=_actionLabel - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
+(id)titleFont;
+(id)subtitleFont;
+(id)subtitleColor;
+(double)topMarginConstant;
+(double)interLabelBaselineDeltaConstant;
+(double)bottomMarginConstant;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleText:(id)arg1 ;
-(UILabel *)subtitleLabel;
-(UILabel *)actionLabel;
-(void)setSubtitleText:(id)arg1 ;
-(void)setIconImage:(id)arg1 ;
-(void)setActionText:(id)arg1 color:(id)arg2 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_updateTitleAndSubtitleConstraints;
-(void)_updateSubtitleAndActionText;
-(void)setSubtitleAttributedText:(id)arg1 ;
-(UIImageView *)iconStack;
-(NSLayoutConstraint *)topMarginConstraint;
-(NSLayoutConstraint *)interLabelPaddingConstraint;
-(NSLayoutConstraint *)bottomMarginConstraint;
@end

