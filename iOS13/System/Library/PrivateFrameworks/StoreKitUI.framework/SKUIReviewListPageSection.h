/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>

@class SKUIViewElementLayoutContext, NSMutableDictionary, SKUIReviewListPageComponent;

@interface SKUIReviewListPageSection : SKUIStorePageSection {

	SKUIViewElementLayoutContext* _cellLayoutContext;
	NSMutableDictionary* _contextActionsRegistration;

}

@property (nonatomic,copy) NSMutableDictionary * contextActionsRegistration;              //@synthesize contextActionsRegistration=_contextActionsRegistration - In the implementation block
@property (nonatomic,readonly) SKUIReviewListPageComponent * pageComponent; 
-(id)initWithPageComponent:(id)arg1 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2 ;
-(long long)numberOfCells;
-(void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)registerContextActionsForCell:(id)arg1 indexPath:(id)arg2 viewController:(id)arg3 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)unregisterContextActionsForCell:(id)arg1 indexPath:(id)arg2 viewController:(id)arg3 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_requestCellLayout;
-(UIEdgeInsets)_contentInsetForReviewIndex:(long long)arg1 ;
-(id)_contextActionRegistrationKeyWithCell:(id)arg1 indexPath:(id)arg2 ;
-(NSMutableDictionary *)contextActionsRegistration;
-(void)setContextActionsRegistration:(NSMutableDictionary *)arg1 ;
@end

