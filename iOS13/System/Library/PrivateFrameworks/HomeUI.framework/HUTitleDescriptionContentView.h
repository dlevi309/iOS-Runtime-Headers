/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HFStringGenerator;
@class UILabel, UIColor, UIStackView, NSArray, UIFont;

@interface HUTitleDescriptionContentView : UIView {

	BOOL _disabled;
	UILabel* _titleLabel;
	id<HFStringGenerator> _titleText;
	UIColor* _titleTextColor;
	id<HFStringGenerator> _descriptionText;
	UIColor* _descriptionTextColor;
	UILabel* _descriptionLabel;
	UIStackView* _stackView;
	NSArray* _verticalLabelConstraints;
	NSArray* _horizontalLabelConstraints;

}

@property (nonatomic,readonly) UILabel * descriptionLabel;                       //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;                          //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) NSArray * verticalLabelConstraints;                 //@synthesize verticalLabelConstraints=_verticalLabelConstraints - In the implementation block
@property (nonatomic,retain) NSArray * horizontalLabelConstraints;               //@synthesize horizontalLabelConstraints=_horizontalLabelConstraints - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) id<HFStringGenerator> titleText;                    //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) UIColor * titleTextColor;                           //@synthesize titleTextColor=_titleTextColor - In the implementation block
@property (nonatomic,retain) UIFont * titleFont; 
@property (nonatomic,retain) id<HFStringGenerator> descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) UIColor * descriptionTextColor;                     //@synthesize descriptionTextColor=_descriptionTextColor - In the implementation block
@property (nonatomic,retain) UIFont * descriptionFont; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                    //@synthesize disabled=_disabled - In the implementation block
-(BOOL)isDisabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(UIStackView *)stackView;
-(void)setDisabled:(BOOL)arg1 ;
-(UILabel *)descriptionLabel;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
-(void)setTitleText:(id<HFStringGenerator>)arg1 ;
-(id<HFStringGenerator>)titleText;
-(id<HFStringGenerator>)descriptionText;
-(void)setDescriptionText:(id<HFStringGenerator>)arg1 ;
-(UIColor *)titleTextColor;
-(void)_setupTitleLabel;
-(UIFont *)descriptionFont;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(void)setDescriptionFont:(UIFont *)arg1 ;
-(NSArray *)verticalLabelConstraints;
-(void)setVerticalLabelConstraints:(NSArray *)arg1 ;
-(NSArray *)horizontalLabelConstraints;
-(void)setHorizontalLabelConstraints:(NSArray *)arg1 ;
-(void)setDescriptionTextColor:(UIColor *)arg1 ;
-(UIColor *)descriptionTextColor;
-(void)_setupStackView;
-(void)_setupDescriptionLabel;
-(void)_updateLabel:(id)arg1 withContent:(id)arg2 ;
@end

