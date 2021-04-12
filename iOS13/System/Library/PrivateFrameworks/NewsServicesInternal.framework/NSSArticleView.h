/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
*/

#import <NewsServicesInternal/NewsServicesInternal-Structs.h>
#import <UIKitCore/UIView.h>

@class NSSArticleInternal, UILabel, UIImageView, UIView;

@interface NSSArticleView : UIView {

	NSSArticleInternal* _article;
	UILabel* _titleLabel;
	UILabel* _excerptLabel;
	UIImageView* _thumbnailImageView;
	UIView* _thumbnailContainerView;
	UILabel* _publisherLabel;
	UILabel* _dateLabel;
	UIImageView* _publisherLogoImageView;
	CGSize _preferredSize;

}

@property (assign,nonatomic,__weak) UILabel * titleLabel;                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * excerptLabel;                            //@synthesize excerptLabel=_excerptLabel - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * thumbnailImageView;                  //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
@property (assign,nonatomic,__weak) UIView * thumbnailContainerView;                   //@synthesize thumbnailContainerView=_thumbnailContainerView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * publisherLabel;                          //@synthesize publisherLabel=_publisherLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * dateLabel;                               //@synthesize dateLabel=_dateLabel - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * publisherLogoImageView;              //@synthesize publisherLogoImageView=_publisherLogoImageView - In the implementation block
@property (assign,nonatomic) CGSize preferredSize;                                     //@synthesize preferredSize=_preferredSize - In the implementation block
@property (nonatomic,retain) NSSArticleInternal * article;                             //@synthesize article=_article - In the implementation block
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)preferredSize;
-(void)setPreferredSize:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)dateLabel;
-(void)_updateFonts;
-(void)setDateLabel:(UILabel *)arg1 ;
-(UIImageView *)thumbnailImageView;
-(void)setThumbnailImageView:(UIImageView *)arg1 ;
-(NSSArticleInternal *)article;
-(void)setArticle:(NSSArticleInternal *)arg1 ;
-(double)calculateHeightForWidth:(double)arg1 ;
-(UILabel *)excerptLabel;
-(UILabel *)publisherLabel;
-(UIImageView *)publisherLogoImageView;
-(UIView *)thumbnailContainerView;
-(void)setExcerptLabel:(UILabel *)arg1 ;
-(void)setPublisherLabel:(UILabel *)arg1 ;
-(void)setThumbnailContainerView:(UIView *)arg1 ;
-(void)setPublisherLogoImageView:(UIImageView *)arg1 ;
@end

