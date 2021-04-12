/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, UIButton, NSString, NSArray;

@interface PXSearchResultsHeaderView : UICollectionReusableView {

	BOOL _largeTextSizeConstraintsAreActive;
	UILabel* _titleLabel;
	UIButton* _seeAllButton;
	NSString* _sectionIdentifier;
	/*^block*/id _seeAllButtonHandler;
	NSArray* _smallAndMediumTextSizeConstraints;
	NSArray* _largeTextSizeConstraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * seeAllButton;                                  //@synthesize seeAllButton=_seeAllButton - In the implementation block
@property (nonatomic,retain) NSString * sectionIdentifier;                             //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,copy) id seeAllButtonHandler;                                     //@synthesize seeAllButtonHandler=_seeAllButtonHandler - In the implementation block
@property (nonatomic,retain) NSArray * smallAndMediumTextSizeConstraints;              //@synthesize smallAndMediumTextSizeConstraints=_smallAndMediumTextSizeConstraints - In the implementation block
@property (nonatomic,retain) NSArray * largeTextSizeConstraints;                       //@synthesize largeTextSizeConstraints=_largeTextSizeConstraints - In the implementation block
@property (assign,nonatomic) BOOL largeTextSizeConstraintsAreActive;                   //@synthesize largeTextSizeConstraintsAreActive=_largeTextSizeConstraintsAreActive - In the implementation block
+(double)headerViewHeight;
+(id)reuseIdentifier;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)sectionIdentifier;
-(void)setSectionIdentifier:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(UIButton *)seeAllButton;
-(void)setTitleLabelString:(id)arg1 ;
-(void)setSeeAllButtonTitle:(id)arg1 ;
-(void)setSeeAllButtonHidden:(BOOL)arg1 ;
-(void)setSectionIdentifier:(id)arg1 seeAllButtonHandler:(/*^block*/id)arg2 ;
-(void)_didSelectSeeAllButton:(id)arg1 ;
-(void)setSeeAllButton:(UIButton *)arg1 ;
-(id)seeAllButtonHandler;
-(void)setSeeAllButtonHandler:(id)arg1 ;
-(void)setupConstraintsForTextSize;
-(void)setupLargeTextConstaints;
-(NSArray *)largeTextSizeConstraints;
-(void)setupSmallAndMediumTextConstraints;
-(NSArray *)smallAndMediumTextSizeConstraints;
-(void)setSmallAndMediumTextSizeConstraints:(NSArray *)arg1 ;
-(void)setLargeTextSizeConstraints:(NSArray *)arg1 ;
-(BOOL)largeTextSizeConstraintsAreActive;
-(void)setLargeTextSizeConstraintsAreActive:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

