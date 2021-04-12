/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class IKViewElement, VUILabel, VUITextLayout, _TVImageView, TVImageLayout, NSShadow;

@interface VUITabItemCollectionViewCell : UICollectionViewCell {

	IKViewElement* _viewElement;
	VUILabel* _titleLabel;
	VUITextLayout* _titleLayout;
	_TVImageView* _imageView;
	TVImageLayout* _imageLayout;
	NSShadow* _shadow;

}

@property (nonatomic,retain) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUITextLayout * titleLayout;              //@synthesize titleLayout=_titleLayout - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                 //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) TVImageLayout * imageLayout;              //@synthesize imageLayout=_imageLayout - In the implementation block
@property (nonatomic,retain) NSShadow * shadow;                        //@synthesize shadow=_shadow - In the implementation block
+(id)configureViewWithElement:(id)arg1 existingCell:(id)arg2 ;
+(BOOL)shouldDoubleGlyphSizeForSectionElement:(id)arg1 ;
+(id)_findChildElementWithLongestTextInSectionElement:(id)arg1 ;
+(BOOL)_shouldDoubleGlyphSizeForElement:(id)arg1 numberOfTabs:(unsigned long long)arg2 ;
+(id)tabItemTextLayout;
+(double)_windowWidthForElement:(id)arg1 ;
+(double)_imageElementWidthForElement:(id)arg1 ;
+(CGSize)_glyphSizeForContentSizeCategory:(id)arg1 preferredNormalImageWidth:(double)arg2 ;
+(UIEdgeInsets)_tabItemPaddingForContentSizeCategory:(id)arg1 hasTitle:(BOOL)arg2 ;
+(double)_tabItemImageToTextMarginForContentSizeCategory:(id)arg1 ;
+(BOOL)_shouldDisplayTitleInTwoLinesForElement:(id)arg1 tabItemSize:(CGSize)arg2 labelSize:(CGSize)arg3 contentSizeCategory:(id)arg4 numberOfTabs:(unsigned long long)arg5 ;
+(BOOL)_isContentSizeCategoryBetweenAX1toAX3:(id)arg1 ;
+(double)_columnWidthForElement:(id)arg1 numberOfTabs:(unsigned long long)arg2 ;
+(double)_preferredHeightForContentSizeCategory:(id)arg1 ;
-(void)prepareForReuse;
-(NSShadow *)shadow;
-(id)initWithFrame:(CGRect)arg1 ;
-(VUILabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)largeContentTitle;
-(id)largeContentImage;
-(BOOL)scalesLargeContentImage;
-(void)layoutSubviews;
-(_TVImageView *)imageView;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(void)setShadow:(NSShadow *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(VUITextLayout *)titleLayout;
-(void)setTitleLayout:(VUITextLayout *)arg1 ;
-(TVImageLayout *)imageLayout;
-(void)setImageLayout:(TVImageLayout *)arg1 ;
-(id)_imageLayout;
-(CGSize)_layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
-(id)_titleLayout;
-(double)_updatedLabelWidthWithTwoLinesTitleForText:(id)arg1 ;
-(CGSize)_adjustedTabItemSizeForViewElement:(id)arg1 tabItemSize:(CGSize)arg2 labelSize:(CGSize)arg3 numberOfTabs:(unsigned long long)arg4 ;
@end

