/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUIProductPageOverlayDelegate.h>

@class SKUIPageComponent, SKUIStorePageSectionContext, SKUIProductPageOverlayController, NSSet, IKColor, NSArray, NSIndexPath, NSString;

@interface SKUIStorePageSection : NSObject <SKUIProductPageOverlayDelegate> {

	BOOL _bottomSection;
	SKUIPageComponent* _component;
	SKUIStorePageSectionContext* _context;
	BOOL _hasValidRelevantEntityProviders;
	SKUIProductPageOverlayController* _overlayController;
	NSSet* _relevantEntityProviders;
	long long _sectionIndex;
	BOOL _topSection;
	IKColor* _backgroundColorForSection;
	NSArray* _indexPathsForBackgroundItems;

}

@property (nonatomic,readonly) long long defaultItemPinningStyle; 
@property (nonatomic,readonly) IKColor * backgroundColorForSection;                  //@synthesize backgroundColorForSection=_backgroundColorForSection - In the implementation block
@property (nonatomic,readonly) BOOL fitsToHeight; 
@property (nonatomic,readonly) NSArray * indexPathsForBackgroundItems;               //@synthesize indexPathsForBackgroundItems=_indexPathsForBackgroundItems - In the implementation block
@property (nonatomic,readonly) NSArray * indexPathsForPinningItems; 
@property (nonatomic,readonly) long long numberOfCells; 
@property (nonatomic,readonly) CGSize preferredContentSize; 
@property (nonatomic,readonly) UIEdgeInsets sectionContentInset; 
@property (nonatomic,copy,readonly) NSSet * relevantEntityProviders; 
@property (nonatomic,readonly) NSIndexPath * firstAppearanceIndexPath; 
@property (nonatomic,readonly) SKUIPageComponent * pageComponent;                    //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) SKUIStorePageSectionContext * context;                //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long sectionIndex;                                 //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (assign,getter=isBottomSection,nonatomic) BOOL bottomSection;              //@synthesize bottomSection=_bottomSection - In the implementation block
@property (assign,getter=isTopSection,nonatomic) BOOL topSection;                    //@synthesize topSection=_topSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(long long)numberOfCells;
-(SKUIStorePageSectionContext *)context;
-(long long)sectionIndex;
-(void)setSectionIndex:(long long)arg1 ;
-(CGSize)preferredContentSize;
-(UIEdgeInsets)sectionContentInset;
-(void)_setContext:(id)arg1 ;
-(void)dealloc;
-(id)initWithPageComponent:(id)arg1 ;
-(long long)applyUpdateType:(long long)arg1 ;
-(id)backgroundColorForIndexPath:(id)arg1 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg1 ;
-(void)deselectItemsAnimated:(BOOL)arg1 ;
-(void)invalidateCachedLayoutInformation;
-(NSSet *)relevantEntityProviders;
-(void)setTopSection:(BOOL)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(void)willHideInContext:(id)arg1 ;
-(void)collectionViewDidConfirmButtonElement:(id)arg1 withClickInfo:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(SKUIPageComponent *)pageComponent;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2 ;
-(void)setBottomSection:(BOOL)arg1 ;
-(long long)updateWithContext:(id)arg1 pageComponent:(id)arg2 ;
-(void)prefetchResourcesWithReason:(long long)arg1 ;
-(void)collectionViewDidLongPressItemAtIndexPath:(id)arg1 ;
-(BOOL)requestLayoutWithReloadReason:(long long)arg1 ;
-(NSArray *)indexPathsForPinningItems;
-(void)showPageWithLink:(id)arg1 ;
-(BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3 ;
-(void)reloadVisibleCellsWithReason:(long long)arg1 ;
-(void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2 ;
-(IKColor *)backgroundColorForSection;
-(UIEdgeInsets)pinningContentInsetForItemAtIndexPath:(id)arg1 ;
-(long long)pinningStyleForItemAtIndexPath:(id)arg1 ;
-(long long)pinningGroupForItemAtIndexPath:(id)arg1 ;
-(long long)pinningTransitionStyleForItemAtIndexPath:(id)arg1 ;
-(NSArray *)indexPathsForBackgroundItems;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)registerContextActionsForCell:(id)arg1 indexPath:(id)arg2 viewController:(id)arg3 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)unregisterContextActionsForCell:(id)arg1 indexPath:(id)arg2 viewController:(id)arg3 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg1 ;
-(void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)performDefaultActionForViewElement:(id)arg1 ;
-(BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionViewShouldSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg1 ;
-(void)collectionViewDidTapVideoAtIndexPath:(id)arg1 ;
-(void)collectionViewWillScrollToOffset:(CGPoint)arg1 visibleRange:(SKUIIndexPathRange)arg2 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)fitsToHeight;
-(double)contentInsetAdjustmentForCollectionView:(id)arg1 ;
-(void)didAppearInContext:(id)arg1 ;
-(NSIndexPath *)firstAppearanceIndexPath;
-(void)productPageOverlayDidDismiss:(id)arg1 ;
-(void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)containsElementWithIndexBarEntryID:(id)arg1 ;
-(id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(long long)arg2 ;
-(id)_clickEventWithElementName:(id)arg1 index:(long long)arg2 fieldData:(id)arg3 ;
-(id)clickEventWithLink:(id)arg1 elementName:(id)arg2 index:(long long)arg3 ;
-(long long)_itemPinningStyle;
-(void)playVideoForElement:(id)arg1 ;
-(void)showProductViewControllerWithItem:(id)arg1 ;
-(long long)_itemPinningGroup;
-(void)_recursivelyAddRelevantEntityProvidersForViewElement:(id)arg1 toSet:(id)arg2 ;
-(void)_sendXEventWithDictionary:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)sendXEventWithItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)sendXEventWithLink:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(long long)defaultItemPinningStyle;
-(id)clickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3 ;
-(id)clickEventWithMedia:(id)arg1 elementName:(id)arg2 index:(long long)arg3 ;
-(id)itemOfferClickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3 ;
-(NSRange)itemRangeForIndexPathRange:(SKUIIndexPathRange)arg1 ;
-(id)performItemOfferActionForItem:(id)arg1 ;
-(void)playVideoWithURL:(id)arg1 ;
-(BOOL)isBottomSection;
-(BOOL)isTopSection;
@end
