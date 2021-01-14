/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, HUIconView, UILabel, NSArray, UIVisualEffectView, UIStackView;

@interface HUQuickControlSummaryView : UIView {

	NSString* _primaryText;
	NSString* _secondaryText;
	HUIconView* _iconView;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	NSArray* _contentConstraints;
	UIVisualEffectView* _secondaryLabelEffectView;
	UIStackView* _verticalStackView;

}

@property (nonatomic,retain) NSArray * contentConstraints;                               //@synthesize contentConstraints=_contentConstraints - In the implementation block
@property (nonatomic,retain) UILabel * primaryLabel;                                     //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                                   //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * secondaryLabelEffectView;              //@synthesize secondaryLabelEffectView=_secondaryLabelEffectView - In the implementation block
@property (nonatomic,retain) UIStackView * verticalStackView;                            //@synthesize verticalStackView=_verticalStackView - In the implementation block
@property (nonatomic,copy) NSString * primaryText;                                       //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,copy) NSString * secondaryText;                                     //@synthesize secondaryText=_secondaryText - In the implementation block
@property (nonatomic,readonly) HUIconView * iconView;                                    //@synthesize iconView=_iconView - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentConstraints:(NSArray *)arg1 ;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(UILabel *)primaryLabel;
-(void)updateConstraints;
-(HUIconView *)iconView;
-(NSArray *)contentConstraints;
-(UIStackView *)verticalStackView;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(void)setVerticalStackView:(UIStackView *)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(NSString *)secondaryText;
-(UILabel *)secondaryLabel;
-(UIVisualEffectView *)secondaryLabelEffectView;
-(void)setSecondaryLabelEffectView:(UIVisualEffectView *)arg1 ;
@end

