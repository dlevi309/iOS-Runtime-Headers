/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/_UICollectionViewListCell.h>
#import <libobjc.A.dylib/PXSearchResultThumbnailCell.h>

@class UIImageView, UILabel, NSString;

@interface PXSearchResultTitledCell : _UICollectionViewListCell <PXSearchResultThumbnailCell> {

	UIImageView* _thumbnailImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _countLabel;
	unsigned long long _searchResultType;

}

@property (nonatomic,retain) UIImageView * thumbnailImageView;                 //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                          //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * countLabel;                             //@synthesize countLabel=_countLabel - In the implementation block
@property (assign,nonatomic) unsigned long long searchResultType;              //@synthesize searchResultType=_searchResultType - In the implementation block
@property (nonatomic,readonly) NSString * accessibilityLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldUseAccessibilityLayout;
+(id)reuseIdentifier;
-(UILabel *)titleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(NSString *)accessibilityLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)searchResultType;
-(void)prepareForReuse;
-(UIImageView *)thumbnailImageView;
-(void)setThumbnailImageView:(UIImageView *)arg1 ;
-(void)_setupSubviews;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(void)setCountLabel:(UILabel *)arg1 ;
-(void)_preferredContentSizeChanged:(id)arg1 ;
-(UILabel *)countLabel;
-(CGSize)thumbnailImageViewPixelSize;
-(id)_setupTitleLabel;
-(id)_setupSubtitleLabel;
-(id)_setupCountLabel;
-(id)italicTitleLabelFont;
-(id)subtitleLabelFont;
-(id)countLabelFont;
-(void)configureWithResult:(id)arg1 ;
-(id)titleLabelFont;
-(void)setThumbnailImage:(id)arg1 ;
-(void)setSearchResultType:(unsigned long long)arg1 ;
-(id)_setupImageView;
@end

