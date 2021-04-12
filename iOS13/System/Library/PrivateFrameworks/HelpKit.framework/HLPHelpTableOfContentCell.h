/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/

#import <HelpKit/HelpKit-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class NSLayoutConstraint, HLPHelpItem, UIImageView, UILabel, TPSURLSessionItem;

@interface HLPHelpTableOfContentCell : UITableViewCell {

	NSLayoutConstraint* _arrowImageViewLeadingConstraint;
	NSLayoutConstraint* _sectionImageWidthConstraint;
	NSLayoutConstraint* _sectionImageLeadingConstraint;
	NSLayoutConstraint* _labelToArrowViewLeadingConstraint;
	BOOL _showFirstLevelIcon;
	BOOL _ignoreLevels;
	BOOL _closed;
	BOOL _updateSeparatorInsetAutomatically;
	BOOL _RTL;
	HLPHelpItem* _helpItem;
	UIImageView* _arrowImageView;
	UILabel* _nameLabel;
	UIImageView* _sectionImageView;
	TPSURLSessionItem* _sectionImageURLSessionItem;

}

@property (assign,nonatomic) BOOL RTL;                                                    //@synthesize RTL=_RTL - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                         //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UIImageView * sectionImageView;                              //@synthesize sectionImageView=_sectionImageView - In the implementation block
@property (nonatomic,retain) TPSURLSessionItem * sectionImageURLSessionItem;              //@synthesize sectionImageURLSessionItem=_sectionImageURLSessionItem - In the implementation block
@property (assign,nonatomic) BOOL showFirstLevelIcon;                                     //@synthesize showFirstLevelIcon=_showFirstLevelIcon - In the implementation block
@property (assign,nonatomic) BOOL ignoreLevels;                                           //@synthesize ignoreLevels=_ignoreLevels - In the implementation block
@property (assign,nonatomic) BOOL closed;                                                 //@synthesize closed=_closed - In the implementation block
@property (assign,nonatomic) BOOL updateSeparatorInsetAutomatically;                      //@synthesize updateSeparatorInsetAutomatically=_updateSeparatorInsetAutomatically - In the implementation block
@property (nonatomic,retain) HLPHelpItem * helpItem;                                      //@synthesize helpItem=_helpItem - In the implementation block
@property (nonatomic,retain) UIImageView * arrowImageView;                                //@synthesize arrowImageView=_arrowImageView - In the implementation block
-(void)dealloc;
-(BOOL)closed;
-(void)prepareForReuse;
-(id)accessibilityLabel;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)setRTL:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)setClosed:(BOOL)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)toggle;
-(UIImageView *)arrowImageView;
-(void)setUpdateSeparatorInsetAutomatically:(BOOL)arg1 ;
-(void)setShowFirstLevelIcon:(BOOL)arg1 ;
-(void)setHelpItem:(HLPHelpItem *)arg1 ;
-(void)setIgnoreLevels:(BOOL)arg1 ;
-(void)cancelIconRequest;
-(CGAffineTransform)arrowTransform;
-(long long)itemLevel;
-(TPSURLSessionItem *)sectionImageURLSessionItem;
-(UIImageView *)sectionImageView;
-(void)setSectionImageURLSessionItem:(TPSURLSessionItem *)arg1 ;
-(void)updateToggleImageAnimated:(BOOL)arg1 ;
-(BOOL)showFirstLevelIcon;
-(BOOL)ignoreLevels;
-(BOOL)updateSeparatorInsetAutomatically;
-(HLPHelpItem *)helpItem;
-(void)setArrowImageView:(UIImageView *)arg1 ;
-(BOOL)RTL;
-(void)setSectionImageView:(UIImageView *)arg1 ;
@end

