/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setTitleFont:(UIFont *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<HFStringGenerator>)descriptionText;
-(void)setDescriptionText:(id<HFStringGenerator>)arg1 ;
-(UIStackView *)stackView;
-(UIFont *)titleFont;
-(id<HFStringGenerator>)titleText;
-(BOOL)isDisabled;
-(void)setTitleText:(id<HFStringGenerator>)arg1 ;
-(void)_setupTitleLabel;
-(UIColor *)descriptionTextColor;
-(void)setDescriptionTextColor:(UIColor *)arg1 ;
-(UIColor *)titleTextColor;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(UILabel *)descriptionLabel;
-(UIFont *)descriptionFont;
-(NSArray *)verticalLabelConstraints;
-(void)setVerticalLabelConstraints:(NSArray *)arg1 ;
-(NSArray *)horizontalLabelConstraints;
-(void)setHorizontalLabelConstraints:(NSArray *)arg1 ;
-(void)setDescriptionFont:(UIFont *)arg1 ;
-(void)_setupStackView;
-(void)_setupDescriptionLabel;
-(void)_updateLabel:(id)arg1 withContent:(id)arg2 ;
@end

