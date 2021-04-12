/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKDashboardItemPresenter.h>
#import <libobjc.A.dylib/PKPerformActionViewControllerDelegate.h>

@class PKPassGroupView, PKPassTransitProductsViewController, PKAdjustableSingleCellView, PKFusedDoubleCellView, NSString;

@interface PKDashboardPaymentProductsTransitPresenter : NSObject <PKDashboardItemPresenter, PKPerformActionViewControllerDelegate> {

	PKPassGroupView* _passGroupView;
	PKPassTransitProductsViewController* _productDetailsController;
	PKAdjustableSingleCellView* _sampleSingleCellView;
	PKFusedDoubleCellView* _sampleFusedCellView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)collectionViewCellClasses;
-(id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(Class)itemClass;
-(void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(/*^block*/id)arg5 ;
-(CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3 ;
-(void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4 ;
-(BOOL)cellIsIndependentForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)performActionViewControllerDidCancel:(id)arg1 ;
-(void)performActionViewControllerDidPerformAction:(id)arg1 ;
-(id)initWithPassGroupView:(id)arg1 ;
-(long long)_viewTypeForTransitItem:(id)arg1 ;
-(id)_identifierForItem:(id)arg1 ;
-(id)_allocViewForTransitItem:(id)arg1 ;
-(void)_configureView:(id*)arg1 transitItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(id)_sampleViewForTransitItem:(id)arg1 ;
-(id)_passForTransitItem:(id)arg1 indexPath:(id)arg2 ;
-(id)_topUpActionForItem:(id)arg1 indexPath:(id)arg2 balanceIdentifier:(id)arg3 ;
-(/*^block*/id)_actionHandlerForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)_renewActionForItem:(id)arg1 commutePlanIdentifier:(id)arg2 ;
@end

