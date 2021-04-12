/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class PUParallaxComputer, NSMutableArray;

@interface PUFeedCollectionViewLayout : UICollectionViewLayout {

	PUParallaxComputer* _parallaxComputer;
	NSMutableArray* _sectionLayoutInfos;
	CGSize _contentSize;
	BOOL _shouldDisplayCaptionsBelowBatches;
	BOOL _shouldApplyParallaxEffect;
	BOOL _shouldFloatThumbnails;
	BOOL _shouldFloatSectionHeaders;
	BOOL _shouldFloatWithEase;
	BOOL _shouldFloatOverShortDistances;
	long long _flowDirection;
	long long _parallaxModel;
	double _parallaxFactor;
	double _thumbnailSpacing;
	double _sectionHeaderBackgroundHeight;
	double _floatingBottomDecorationHeight;
	CGSize _sectionReferenceSize;
	CGSize _interTileSpacing;
	CGSize _noCaptionSpacing;
	UIEdgeInsets _captionPadding;
	UIEdgeInsets _floatPadding;

}

@property (assign,nonatomic) long long flowDirection;                             //@synthesize flowDirection=_flowDirection - In the implementation block
@property (nonatomic,readonly) unsigned flowDirectionEdge; 
@property (assign,nonatomic) CGSize sectionReferenceSize;                         //@synthesize sectionReferenceSize=_sectionReferenceSize - In the implementation block
@property (assign,nonatomic) CGSize interTileSpacing;                             //@synthesize interTileSpacing=_interTileSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets captionPadding;                         //@synthesize captionPadding=_captionPadding - In the implementation block
@property (assign,nonatomic) CGSize noCaptionSpacing;                             //@synthesize noCaptionSpacing=_noCaptionSpacing - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayCaptionsBelowBatches;              //@synthesize shouldDisplayCaptionsBelowBatches=_shouldDisplayCaptionsBelowBatches - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyParallaxEffect;                      //@synthesize shouldApplyParallaxEffect=_shouldApplyParallaxEffect - In the implementation block
@property (assign,nonatomic) long long parallaxModel;                             //@synthesize parallaxModel=_parallaxModel - In the implementation block
@property (assign,nonatomic) double parallaxFactor;                               //@synthesize parallaxFactor=_parallaxFactor - In the implementation block
@property (assign,nonatomic) BOOL shouldFloatThumbnails;                          //@synthesize shouldFloatThumbnails=_shouldFloatThumbnails - In the implementation block
@property (assign,nonatomic) double thumbnailSpacing;                             //@synthesize thumbnailSpacing=_thumbnailSpacing - In the implementation block
@property (assign,nonatomic) BOOL shouldFloatSectionHeaders;                      //@synthesize shouldFloatSectionHeaders=_shouldFloatSectionHeaders - In the implementation block
@property (assign,nonatomic) double sectionHeaderBackgroundHeight;                //@synthesize sectionHeaderBackgroundHeight=_sectionHeaderBackgroundHeight - In the implementation block
@property (assign,nonatomic) BOOL shouldFloatWithEase;                            //@synthesize shouldFloatWithEase=_shouldFloatWithEase - In the implementation block
@property (assign,nonatomic) BOOL shouldFloatOverShortDistances;                  //@synthesize shouldFloatOverShortDistances=_shouldFloatOverShortDistances - In the implementation block
@property (assign,nonatomic) double floatingBottomDecorationHeight;               //@synthesize floatingBottomDecorationHeight=_floatingBottomDecorationHeight - In the implementation block
@property (assign,nonatomic) UIEdgeInsets floatPadding;                           //@synthesize floatPadding=_floatPadding - In the implementation block
+(Class)layoutAttributesClass;
-(id)_delegate;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGSize)collectionViewContentSize;
-(void)_getSizeForVerticalFlowDirection:(out CGSize*)arg1 headerSize:(out CGSize*)arg2 footerSize:(out CGSize*)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out long long*)arg7 forSection:(long long)arg8 isJoined:(BOOL)arg9 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)init;
-(void)_getSizeForHorizontalFlowDirection:(out CGSize*)arg1 headerSize:(out CGSize*)arg2 footerSize:(out CGSize*)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out long long*)arg7 forSection:(long long)arg8 isJoined:(BOOL)arg9 ;
-(double)parallaxFactor;
-(void)_getSize:(out CGSize*)arg1 headerSize:(out CGSize*)arg2 footerSize:(out CGSize*)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out long long*)arg7 forSection:(long long)arg8 isJoined:(BOOL)arg9 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(void)setParallaxFactor:(double)arg1 ;
-(void)setParallaxModel:(long long)arg1 ;
-(void)setFlowDirection:(long long)arg1 ;
-(void)setThumbnailSpacing:(double)arg1 ;
-(void)setInterTileSpacing:(CGSize)arg1 ;
-(void)setCaptionPadding:(UIEdgeInsets)arg1 ;
-(void)setNoCaptionSpacing:(CGSize)arg1 ;
-(void)setShouldDisplayCaptionsBelowBatches:(BOOL)arg1 ;
-(void)setShouldFloatThumbnails:(BOOL)arg1 ;
-(CGSize)sectionReferenceSize;
-(void)setSectionReferenceSize:(CGSize)arg1 ;
-(void)invalidateLayoutAndCache;
-(id)_parallaxComputer;
-(void)_updateParallaxForLayoutAttributes:(id)arg1 ;
-(void)_setOrigin:(CGPoint)arg1 forSectionLayoutInfo:(id)arg2 ;
-(void)_updateParallaxComputer;
-(BOOL)shouldApplyParallaxEffect;
-(void)setShouldApplyParallaxEffect:(BOOL)arg1 ;
-(CGRect)_layoutVerticalSectionHeaderIfNecessary:(id)arg1 fixedLayoutAttributes:(id)arg2 floatingLayoutAttributes:(id)arg3 section:(long long)arg4 ;
-(long long)_layoutTilesAndGetNumberOfTilesOmittedWithCollectionView:(id)arg1 tileLayoutAttributes:(id)arg2 fixedLayoutAttributes:(id)arg3 origin:(inout CGPoint*)arg4 size:(inout CGSize*)arg5 sectionContentSize:(CGSize)arg6 itemCount:(long long)arg7 section:(long long)arg8 ;
-(long long)parallaxModel;
-(long long)flowDirection;
-(BOOL)shouldFloatSectionHeaders;
-(BOOL)shouldFloatThumbnails;
-(double)floatingBottomDecorationHeight;
-(UIEdgeInsets)floatPadding;
-(double)sectionHeaderBackgroundHeight;
-(void)_updateSectionLayoutInfosIfNecessary;
-(void)_updateGlobalLayoutInfoWithOptions:(long long)arg1 sectionsWithUpdatedGroupIDs:(out id*)arg2 ;
-(void)_adjustFloatingLayoutAttributes:(id)arg1 inSection:(long long)arg2 ;
-(void)_updateLayoutInfoForSection:(long long)arg1 ignoreSizeChange:(BOOL)arg2 ;
-(void)_enumerateSectionsInRect:(CGRect)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateImageElementsInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_sectionAtIndex:(long long)arg1 sizeDidChangeFrom:(CGSize)arg2 to:(CGSize)arg3 ;
-(BOOL)shouldFloatOverShortDistances;
-(BOOL)shouldFloatWithEase;
-(id)sectionsJoinedWithSection:(long long)arg1 ;
-(CGSize)interTileSpacing;
-(UIEdgeInsets)captionPadding;
-(CGSize)noCaptionSpacing;
-(BOOL)shouldDisplayCaptionsBelowBatches;
-(double)thumbnailSpacing;
-(CGRect)frameForSection:(long long)arg1 ;
-(unsigned)flowDirectionEdge;
-(long long)numberOfTilesOmittedInSection:(long long)arg1 ;
-(id)indexPathForImageElementAtPoint:(CGPoint)arg1 ;
-(CGRect)frameForTileAtIndexPath:(id)arg1 ;
-(void)setFloatPadding:(UIEdgeInsets)arg1 ;
-(void)updateCollectionViewWithDeletedSections:(id)arg1 insertedSections:(id)arg2 updatedSections:(id)arg3 ;
-(void)setShouldFloatSectionHeaders:(BOOL)arg1 ;
-(void)setSectionHeaderBackgroundHeight:(double)arg1 ;
-(void)setShouldFloatWithEase:(BOOL)arg1 ;
-(void)setShouldFloatOverShortDistances:(BOOL)arg1 ;
-(void)setFloatingBottomDecorationHeight:(double)arg1 ;
@end
