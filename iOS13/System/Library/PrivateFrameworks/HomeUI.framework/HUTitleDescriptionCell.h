/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUIconCell.h>

@class UILabel, NSString, UIFont, UIImage, NSArray, UIImageView;

@interface HUTitleDescriptionCell : HUIconCell {

	BOOL _hideTitle;
	BOOL _hideDescription;
	BOOL _hideDescriptionIcon;
	BOOL _adjustsTextColorWhenDisabled;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	NSString* _titleText;
	UIFont* _titleFont;
	unsigned long long _maxNumberOfTitleLines;
	NSString* _descriptionText;
	UIFont* _descriptionFont;
	unsigned long long _maxNumberOfDescriptionLines;
	UIImage* _descriptionIcon;
	double _textAlpha;
	NSArray* _verticalLabelConstraints;
	NSArray* _horizontalLabelConstraints;
	UIImageView* _descriptionIconView;

}

@property (nonatomic,retain) NSArray * verticalLabelConstraints;                          //@synthesize verticalLabelConstraints=_verticalLabelConstraints - In the implementation block
@property (nonatomic,retain) NSArray * horizontalLabelConstraints;                        //@synthesize horizontalLabelConstraints=_horizontalLabelConstraints - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * descriptionLabel;                                //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * descriptionIconView;                         //@synthesize descriptionIconView=_descriptionIconView - In the implementation block
@property (nonatomic,retain) NSString * titleText;                                        //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                          //@synthesize titleFont=_titleFont - In the implementation block
@property (assign,nonatomic) BOOL hideTitle;                                              //@synthesize hideTitle=_hideTitle - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumberOfTitleLines;                    //@synthesize maxNumberOfTitleLines=_maxNumberOfTitleLines - In the implementation block
@property (nonatomic,retain) NSString * descriptionText;                                  //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) UIFont * descriptionFont;                                    //@synthesize descriptionFont=_descriptionFont - In the implementation block
@property (assign,nonatomic) BOOL hideDescription;                                        //@synthesize hideDescription=_hideDescription - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumberOfDescriptionLines;              //@synthesize maxNumberOfDescriptionLines=_maxNumberOfDescriptionLines - In the implementation block
@property (nonatomic,retain) UIImage * descriptionIcon;                                   //@synthesize descriptionIcon=_descriptionIcon - In the implementation block
@property (assign,nonatomic) BOOL hideDescriptionIcon;                                    //@synthesize hideDescriptionIcon=_hideDescriptionIcon - In the implementation block
@property (assign,nonatomic) double textAlpha;                                            //@synthesize textAlpha=_textAlpha - In the implementation block
@property (assign,nonatomic) BOOL adjustsTextColorWhenDisabled;                           //@synthesize adjustsTextColorWhenDisabled=_adjustsTextColorWhenDisabled - In the implementation block
-(void)prepareForReuse;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(void)setDisabled:(BOOL)arg1 ;
-(UILabel *)descriptionLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setHideTitle:(BOOL)arg1 ;
-(BOOL)hideTitle;
-(UIFont *)descriptionFont;
-(void)setTextAlpha:(double)arg1 ;
-(double)textAlpha;
-(void)updateTitle;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)setDescriptionFont:(UIFont *)arg1 ;
-(void)setHideDescriptionIcon:(BOOL)arg1 ;
-(void)setHideDescription:(BOOL)arg1 ;
-(void)setAdjustsTextColorWhenDisabled:(BOOL)arg1 ;
-(void)setDescriptionIcon:(UIImage *)arg1 ;
-(void)_addTitleLabel;
-(void)_addDescriptionLabel;
-(UIImageView *)descriptionIconView;
-(void)_addDescriptionIconView;
-(void)updateVerticalLabelConstraints;
-(void)updateHorizontalLabelConstraints;
-(NSArray *)verticalLabelConstraints;
-(void)setVerticalLabelConstraints:(NSArray *)arg1 ;
-(NSArray *)horizontalLabelConstraints;
-(void)setHorizontalLabelConstraints:(NSArray *)arg1 ;
-(UIImage *)descriptionIcon;
-(BOOL)hideDescription;
-(BOOL)hideDescriptionIcon;
-(void)setMaxNumberOfTitleLines:(unsigned long long)arg1 ;
-(void)setMaxNumberOfDescriptionLines:(unsigned long long)arg1 ;
-(unsigned long long)maxNumberOfDescriptionLines;
-(unsigned long long)maxNumberOfTitleLines;
-(BOOL)adjustsTextColorWhenDisabled;
@end

