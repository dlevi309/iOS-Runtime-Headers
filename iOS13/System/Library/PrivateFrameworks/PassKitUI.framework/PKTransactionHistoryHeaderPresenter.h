/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKDashboardItemPresenter.h>

@class PKObjectDownloader, UICollectionViewCell, UIImage, NSDateFormatter, NSString;

@interface PKTransactionHistoryHeaderPresenter : NSObject <PKDashboardItemPresenter> {

	PKObjectDownloader* _fileDownloader;
	UICollectionViewCell* _templateCell;
	UIImage* _logoImage;
	UIImage* _logoBackgroundImage;
	UIImage* _heroImage;
	NSDateFormatter* _formatterMonth;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(Class)itemClass;
-(id)collectionViewCellClasses;
-(id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(id)_installmentProductHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(id)_merchantHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(id)_peerPaymentHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(id)_transactionGroupHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(id)_transactionTypeHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_configurePeerPaymentHeaderCell:(id)arg1 forITem:(id)arg2 ;
-(void)_configureCategoryHeaderCell:(id)arg1 forITem:(id)arg2 ;
-(void)_configureTransactionTypeHeaderCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configureMerchantHeaderCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)_configureInstallmentProductHeaderCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)_updateMerchantHeaderImagesOnCell:(id)arg1 item:(id)arg2 ;
-(id)_backgroundImageFromLogoImage:(id)arg1 ;
@end

