/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)titleFont;
+(id)subtitleFont;
+(id)subtitleColor;
+(double)topMarginConstant;
+(double)interLabelBaselineDeltaConstant;
+(double)bottomMarginConstant;
+(BOOL)requiresConstraintBasedLayout;
-(UILabel *)titleLabel;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setActionText:(id)arg1 color:(id)arg2 ;
-(UILabel *)actionLabel;
-(void)setTitleText:(id)arg1 ;
-(void)setSubtitleText:(id)arg1 ;
-(UILabel *)subtitleLabel;
-(UIImageView *)iconStack;
-(void)setIconImage:(id)arg1 ;
-(void)_updateTitleAndSubtitleConstraints;
-(void)_updateSubtitleAndActionText;
-(void)setSubtitleAttributedText:(id)arg1 ;
-(NSLayoutConstraint *)topMarginConstraint;
-(NSLayoutConstraint *)interLabelPaddingConstraint;
-(NSLayoutConstraint *)bottomMarginConstraint;
-(void)dealloc;
@end

