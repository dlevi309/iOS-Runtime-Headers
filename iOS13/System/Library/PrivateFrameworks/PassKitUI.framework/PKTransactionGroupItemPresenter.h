/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKDashboardItemPresenter.h>

@class PKPaymentTransactionCollectionViewCell, UIFont, UIImage, NSCache, NSDateFormatter, PKPaymentTransactionCellController, NSString;

@interface PKTransactionGroupItemPresenter : NSObject <PKDashboardItemPresenter> {

	PKPaymentTransactionCollectionViewCell* _sampleCell;
	UIFont* _transactionCellPrimaryLabelFont;
	UIFont* _transactionCellValueLabelFont;
	UIFont* _transactionCellSecondaryLabelFont;
	UIImage* _emptyImage;
	UIImage* _cashbackImage;
	UIImage* _transactionListImage;
	UIImage* _interestImage;
	UIImage* _appleCardImage;
	UIImage* _refundsImage;
	UIImage* _adjustmentsImage;
	NSCache* _iconsPerMerchantCategory;
	CGSize _groupSize;
	BOOL _needsSizing;
	NSDateFormatter* _formatterYear;
	NSDateFormatter* _formatterMonth;
	BOOL _useAccessibilityLayout;
	PKPaymentTransactionCellController* _cellController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CGSize)_imageSize;
-(Class)itemClass;
-(void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4 forSizing:(BOOL)arg5 ;
-(id)_viewControllerForItem:(id)arg1 ;
-(id)cashbackImage;
-(id)appleCardImage;
-(id)transactionListImage;
-(id)interestImage;
-(id)refundsImage;
-(id)adjustmentsImage;
-(id)_contactKeysToFetch;
-(id)collectionViewCellClasses;
-(id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3 ;
@end

