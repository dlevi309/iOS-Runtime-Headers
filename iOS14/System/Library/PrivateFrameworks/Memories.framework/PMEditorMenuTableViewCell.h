/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UITableViewCell.h>

@class NSString, NSLayoutConstraint, UILabel, UIActivityIndicatorView;

@interface PMEditorMenuTableViewCell : UITableViewCell {

	BOOL _showingActivityIndicator;
	NSString* _detailText;
	NSString* _secondaryDetailText;
	NSLayoutConstraint* _labelLeadingConstraint;
	UILabel* _titleLabel;
	UILabel* _upperDetailsLabel;
	UILabel* _centerDetailsLabel;
	UILabel* _lowerDetailsLabel;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * upperDetailsLabel;                                                  //@synthesize upperDetailsLabel=_upperDetailsLabel - In the implementation block
@property (nonatomic,retain) UILabel * centerDetailsLabel;                                                 //@synthesize centerDetailsLabel=_centerDetailsLabel - In the implementation block
@property (nonatomic,retain) UILabel * lowerDetailsLabel;                                                  //@synthesize lowerDetailsLabel=_lowerDetailsLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                                  //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) NSString * detailText;                                                        //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,retain) NSString * secondaryDetailText;                                               //@synthesize secondaryDetailText=_secondaryDetailText - In the implementation block
@property (assign,getter=isShowingActivityIndicator,nonatomic) BOOL showingActivityIndicator;              //@synthesize showingActivityIndicator=_showingActivityIndicator - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelLeadingConstraint;                                  //@synthesize labelLeadingConstraint=_labelLeadingConstraint - In the implementation block
+(double)dynamicTypeHeight;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)titleLabel;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setLabelLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelLeadingConstraint;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(id)_disclosureChevronImage:(BOOL)arg1 ;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)prepareForReuse;
-(void)setDetailText:(NSString *)arg1 ;
-(NSString *)text;
-(void)_updateFonts;
-(void)awakeFromNib;
-(NSString *)detailText;
-(void)setSecondaryDetailText:(NSString *)arg1 ;
-(UILabel *)upperDetailsLabel;
-(UILabel *)lowerDetailsLabel;
-(NSString *)secondaryDetailText;
-(void)setUpperDetailsLabel:(UILabel *)arg1 ;
-(void)setLowerDetailsLabel:(UILabel *)arg1 ;
-(UILabel *)centerDetailsLabel;
-(void)setShowingActivityIndicator:(BOOL)arg1 ;
-(BOOL)isShowingActivityIndicator;
-(void)setCenterDetailsLabel:(UILabel *)arg1 ;
@end

