/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UILabel, UIButton, NSArray, NSLayoutConstraint;

@interface PUSearchResultsSectionHeaderView : UITableViewHeaderFooterView {

	BOOL _largeTextSizeConstraintsAreActive;
	UILabel* _titleLabel;
	UIButton* _button;
	NSArray* _smallAndMediumTextSizeConstraints;
	NSArray* _largeTextSizeConstraints;
	NSLayoutConstraint* _titleCompactLeadingConstraint;
	NSLayoutConstraint* _titleRegularLeadingConstraint;
	NSLayoutConstraint* _buttonCompactTrailingConstraint;
	NSLayoutConstraint* _buttonRegularTrailingConstraint;

}

@property (nonatomic,retain) NSArray * smallAndMediumTextSizeConstraints;                       //@synthesize smallAndMediumTextSizeConstraints=_smallAndMediumTextSizeConstraints - In the implementation block
@property (nonatomic,retain) NSArray * largeTextSizeConstraints;                                //@synthesize largeTextSizeConstraints=_largeTextSizeConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleCompactLeadingConstraint;                //@synthesize titleCompactLeadingConstraint=_titleCompactLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleRegularLeadingConstraint;                //@synthesize titleRegularLeadingConstraint=_titleRegularLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * buttonCompactTrailingConstraint;              //@synthesize buttonCompactTrailingConstraint=_buttonCompactTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * buttonRegularTrailingConstraint;              //@synthesize buttonRegularTrailingConstraint=_buttonRegularTrailingConstraint - In the implementation block
@property (assign,nonatomic) BOOL largeTextSizeConstraintsAreActive;                            //@synthesize largeTextSizeConstraintsAreActive=_largeTextSizeConstraintsAreActive - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * button;                                               //@synthesize button=_button - In the implementation block
+(double)headerViewHeight;
+(id)reuseIdentifier;
-(UILabel *)titleLabel;
-(UIButton *)button;
-(void)prepareForReuse;
-(void)setupConstraintsForTextSize;
-(void)setupLargeTextConstaints;
-(NSArray *)largeTextSizeConstraints;
-(void)setupSmallAndMediumTextConstraints;
-(NSArray *)smallAndMediumTextSizeConstraints;
-(void)setSmallAndMediumTextSizeConstraints:(NSArray *)arg1 ;
-(void)setLargeTextSizeConstraints:(NSArray *)arg1 ;
-(NSLayoutConstraint *)titleCompactLeadingConstraint;
-(void)setTitleCompactLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleRegularLeadingConstraint;
-(void)setTitleRegularLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)buttonCompactTrailingConstraint;
-(void)setButtonCompactTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)buttonRegularTrailingConstraint;
-(void)setButtonRegularTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)largeTextSizeConstraintsAreActive;
-(void)setLargeTextSizeConstraintsAreActive:(BOOL)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

