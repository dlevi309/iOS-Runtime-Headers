/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, PUPhotoDecoration, UIColor, UIImage, NSArray, NSPointerArray, UIView;

@interface PUStackView : UIView {

	CGAffineTransform _transforms[9];
	UIImageView* _combinedPhotoDecorationImageView;
	BOOL _imageHidden[9];
	BOOL _needsDynamicLayout;
	BOOL _combinesPhotoDecorations;
	BOOL _hasRoundedCorners;
	BOOL _empty;
	BOOL _highlighted;
	unsigned long long _style;
	PUPhotoDecoration* _photoDecoration;
	UIColor* _gridBackgroundColor;
	double _gridMargin;
	double _gridItemSpacing;
	double _posterSquareCornerRadius;
	double _posterSubitemCornerRadius;
	long long _numberOfVisibleItems;
	double _itemAlpha;
	UIImage* _emptyPlaceholderImage;
	long long __numberOfViews;
	NSArray* __photoViews;
	NSPointerArray* __imageSizes;
	NSArray* __photoDecorationVariants;
	UIView* __backgroundView;
	UIColor* _cornersBackgroundColor;
	CGSize _stackSize;
	UIOffset _stackOffset;
	UIOffset _stackPerspectiveOffset;
	CGPoint _stackPerspectiveFactor;
	UIEdgeInsets _stackPerspectiveInsets;

}

@property (nonatomic,readonly) long long _numberOfViews;                                                        //@synthesize _numberOfViews=__numberOfViews - In the implementation block
@property (nonatomic,readonly) NSArray * _photoViews;                                                           //@synthesize _photoViews=__photoViews - In the implementation block
@property (nonatomic,readonly) NSPointerArray * _imageSizes;                                                    //@synthesize _imageSizes=__imageSizes - In the implementation block
@property (setter=_setPhotoDecorationVariants:,nonatomic,copy) NSArray * _photoDecorationVariants;              //@synthesize _photoDecorationVariants=__photoDecorationVariants - In the implementation block
@property (setter=_setBackgroundView:,nonatomic,retain) UIView * _backgroundView;                               //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,retain) UIColor * cornersBackgroundColor;                                                  //@synthesize cornersBackgroundColor=_cornersBackgroundColor - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                                          //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) PUPhotoDecoration * photoDecoration;                                               //@synthesize photoDecoration=_photoDecoration - In the implementation block
@property (assign,nonatomic) BOOL combinesPhotoDecorations;                                                     //@synthesize combinesPhotoDecorations=_combinesPhotoDecorations - In the implementation block
@property (assign,nonatomic) CGSize stackSize;                                                                  //@synthesize stackSize=_stackSize - In the implementation block
@property (assign,nonatomic) UIOffset stackOffset;                                                              //@synthesize stackOffset=_stackOffset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets stackPerspectiveInsets;                                               //@synthesize stackPerspectiveInsets=_stackPerspectiveInsets - In the implementation block
@property (assign,nonatomic) UIOffset stackPerspectiveOffset;                                                   //@synthesize stackPerspectiveOffset=_stackPerspectiveOffset - In the implementation block
@property (assign,nonatomic) CGPoint stackPerspectiveFactor;                                                    //@synthesize stackPerspectiveFactor=_stackPerspectiveFactor - In the implementation block
@property (nonatomic,retain) UIColor * gridBackgroundColor;                                                     //@synthesize gridBackgroundColor=_gridBackgroundColor - In the implementation block
@property (assign,nonatomic) double gridMargin;                                                                 //@synthesize gridMargin=_gridMargin - In the implementation block
@property (assign,nonatomic) double gridItemSpacing;                                                            //@synthesize gridItemSpacing=_gridItemSpacing - In the implementation block
@property (assign,nonatomic) double posterSquareCornerRadius;                                                   //@synthesize posterSquareCornerRadius=_posterSquareCornerRadius - In the implementation block
@property (assign,nonatomic) double posterSubitemCornerRadius;                                                  //@synthesize posterSubitemCornerRadius=_posterSubitemCornerRadius - In the implementation block
@property (assign,nonatomic) BOOL hasRoundedCorners;                                                            //@synthesize hasRoundedCorners=_hasRoundedCorners - In the implementation block
@property (nonatomic,readonly) NSArray * stackItemViews; 
@property (assign,nonatomic) long long numberOfVisibleItems;                                                    //@synthesize numberOfVisibleItems=_numberOfVisibleItems - In the implementation block
@property (assign,nonatomic) double itemAlpha;                                                                  //@synthesize itemAlpha=_itemAlpha - In the implementation block
@property (nonatomic,readonly) CGPoint topLeftCornerOfFrontStackItem; 
@property (nonatomic,retain) UIImage * emptyPlaceholderImage;                                                   //@synthesize emptyPlaceholderImage=_emptyPlaceholderImage - In the implementation block
@property (assign,getter=isEmpty,nonatomic) BOOL empty;                                                         //@synthesize empty=_empty - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                                             //@synthesize highlighted=_highlighted - In the implementation block
+(long long)maximumNumberOfVisibleImagesForStyle:(unsigned long long)arg1 ;
+(long long)maximumNumberOfVisibleItemsForStyle:(unsigned long long)arg1 ;
-(void)setGridMargin:(double)arg1 ;
-(CGSize)stackSize;
-(BOOL)hasRoundedCorners;
-(UIEdgeInsets)stackPerspectiveInsets;
-(double)posterSquareCornerRadius;
-(double)gridMargin;
-(void)_updateBackgroundView;
-(void)setStackPerspectiveInsets:(UIEdgeInsets)arg1 ;
-(UIOffset)stackPerspectiveOffset;
-(UIOffset)stackOffset;
-(void)_setBackgroundView:(id)arg1 ;
-(void)setStackPerspectiveOffset:(UIOffset)arg1 ;
-(NSArray *)_photoViews;
-(PUPhotoDecoration *)photoDecoration;
-(void)setPhotoDecoration:(PUPhotoDecoration *)arg1 ;
-(void)setGridItemSpacing:(double)arg1 ;
-(void)_updateHighlight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setStackPerspectiveFactor:(CGPoint)arg1 ;
-(void)setTitle:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(CGRect)_getStackFrame;
-(id)newLayoutAttributesForItemAtIndex:(long long)arg1 relativeToView:(id)arg2 ;
-(CGRect)rectOfStackItemAtIndex:(long long)arg1 inCoordinateSpace:(id)arg2 ;
-(NSPointerArray *)_imageSizes;
-(UIView *)_backgroundView;
-(void)_rebuildDecorationVariants;
-(void)setItemAlpha:(double)arg1 ;
-(CGPoint)topLeftCornerOfFrontStackItem;
-(void)_updateDynamicLayout;
-(long long)_numberOfViews;
-(void)_updateSubviewsOrdering;
-(void)setPosterSquareCornerRadius:(double)arg1 ;
-(void)prepareForReuse;
-(long long)numberOfVisibleItems;
-(UIImage *)emptyPlaceholderImage;
-(CGPoint)stackPerspectiveFactor;
-(void)_updateNumberOfViews;
-(void)_getCenter:(CGPoint*)arg1 bounds:(CGRect*)arg2 forPhotoViewAtIndex:(long long)arg3 ;
-(double)posterSubitemCornerRadius;
-(UIColor *)cornersBackgroundColor;
-(id)_combinedPhotoDecorationsImage;
-(void)setImage:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(void)layoutSubviews;
-(double)gridItemSpacing;
-(void)setSubtitle:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(void)setFeatureSpec:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(void)_setPhotoDecorationVariants:(id)arg1 ;
-(void)setGridBackgroundColor:(UIColor *)arg1 ;
-(void)_updatePhotoViews;
-(BOOL)isHighlighted;
-(BOOL)wouldCoverAllItemsInStackView:(id)arg1 ;
-(UIColor *)gridBackgroundColor;
-(void)setBadgeInfo:(PXAssetBadgeInfo)arg1 style:(long long)arg2 forItemAtIndex:(long long)arg3 ;
-(void)setCombinesPhotoDecorations:(BOOL)arg1 ;
-(void)setCollectionTileLayoutTemplate:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(NSArray *)_photoDecorationVariants;
-(BOOL)isImageHiddenForItemAtIndex:(long long)arg1 ;
-(BOOL)combinesPhotoDecorations;
-(void)setImageHidden:(BOOL)arg1 forItemAtIndex:(long long)arg2 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)_setNeedsDynamicLayout;
-(BOOL)isEmpty;
-(void)setStackSize:(CGSize)arg1 ;
-(void)setHasRoundedCorners:(BOOL)arg1 withCornersBackgroundColor:(id)arg2 ;
-(void)setHasRoundedCorners:(BOOL)arg1 ;
-(void)setNumberOfVisibleItems:(long long)arg1 ;
-(void)setCornersBackgroundColor:(UIColor *)arg1 ;
-(void)setEmptyPlaceholderImage:(UIImage *)arg1 ;
-(NSArray *)stackItemViews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setStackOffset:(UIOffset)arg1 ;
-(void)setPosterSubitemCornerRadius:(double)arg1 ;
-(double)itemAlpha;
-(void)setImageSize:(CGSize)arg1 forItemAtIndex:(long long)arg2 ;
-(id)newLayoutAttributesForVisbleItemsRelativeToView:(id)arg1 maxCount:(long long)arg2 ;
-(void)setBadgeInfo:(PXAssetBadgeInfo)arg1 forItemAtIndex:(long long)arg2 ;
-(unsigned long long)style;
-(void)setEmpty:(BOOL)arg1 ;
-(void)setTitleFontName:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

