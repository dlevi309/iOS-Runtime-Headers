/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKCreditPaymentDueCellDelegate.h>
#import <libobjc.A.dylib/PKAccountServiceAccountResolutionControllerDelegate.h>
#import <libobjc.A.dylib/PKDashboardItemPresenter.h>

@protocol PKSpendingSummaryViewControllerDelegate;
@class PKCreditBalanceCell, PKCreditActivityCell, PKCreditPaymentDueCell, UIViewController, PKAccountServiceAccountResolutionController, NSDateFormatter, NSString;

@interface PKCreditBalanceAndPaymentPresenter : NSObject <PKCreditPaymentDueCellDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKDashboardItemPresenter> {

	PKCreditBalanceCell* _sampleBalanceCell;
	PKCreditActivityCell* _sampleActivityCell;
	PKCreditPaymentDueCell* _samplePaymentDueCell;
	UIViewController*<PKSpendingSummaryViewControllerDelegate> _viewController;
	PKAccountServiceAccountResolutionController* _resolutionController;
	NSDateFormatter* _paymentDateFormatter;
	NSDateFormatter* _monthDayFormatter;
	NSDateFormatter* _monthFormatter;
	BOOL _isCompactUI;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_configurePaymentDueCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4 ;
-(id)_accountServiceResoultionControllerWithItem:(id)arg1 ;
-(BOOL)_useAccessibilityLayoutForCollectionView:(id)arg1 ;
-(void)paymentButtonTappedForItem:(id)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(id)collectionViewCellClasses;
-(id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(Class)itemClass;
-(void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(/*^block*/id)arg5 ;
-(CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)cellIsStackableForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)cellIsIndependentForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_configureBalanceCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4 ;
-(void)_configureActivityCell:(id)arg1 forItem:(id)arg2 sizing:(BOOL)arg3 inCollectionView:(id)arg4 forIndexPath:(id)arg5 ;
@end

