/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKDashboardItemPresenter.h>

@class PKObjectDownloader, PKPaymentService, UICollectionViewCell, UIImage, PKMapsSnapshotManager, PKPeerPaymentContactResolver, UIVisualEffect, UIColor, NSString;

@interface PKTransactionHistoryHeaderPresenter : NSObject <PKDashboardItemPresenter> {

	PKObjectDownloader* _fileDownloader;
	PKPaymentService* _paymentService;
	UICollectionViewCell* _templateCell;
	UIImage* _logoImage;
	UIImage* _logoBackgroundImage;
	UIImage* _heroImage;
	UIImage* _mapsPlaceholderImage;
	BOOL _hasNetworkAccess;
	PKMapsSnapshotManager* _snapshotManager;
	PKPeerPaymentContactResolver* _contactResolver;
	UIVisualEffect* _overlayEffect;
	UIColor* _shadowColor;

}

@property (nonatomic,retain) PKMapsSnapshotManager * snapshotManager;                     //@synthesize snapshotManager=_snapshotManager - In the implementation block
@property (nonatomic,retain) PKPeerPaymentContactResolver * contactResolver;              //@synthesize contactResolver=_contactResolver - In the implementation block
@property (nonatomic,retain) UIVisualEffect * overlayEffect;                              //@synthesize overlayEffect=_overlayEffect - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                                       //@synthesize shadowColor=_shadowColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShadowColor:(UIColor *)arg1 ;
-(id)init;
-(UIColor *)shadowColor;
-(id)mapsPlaceholderImage;
-(id)collectionViewCellClasses;
-(id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(PKMapsSnapshotManager *)snapshotManager;
-(Class)itemClass;
-(void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(/*^block*/id)arg5 ;
-(CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setSnapshotManager:(PKMapsSnapshotManager *)arg1 ;
-(PKPeerPaymentContactResolver *)contactResolver;
-(void)_configureMerchantHeaderCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)_updateMerchantHeaderImagesOnCell:(id)arg1 item:(id)arg2 ;
-(void)_downloadLogoForItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_merchantHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setOverlayEffect:(UIVisualEffect *)arg1 ;
-(UIVisualEffect *)overlayEffect;
-(id)_installmentProductHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(id)_peerPaymentHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(id)_transactionGroupHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(id)_transactionTypeHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_configureInstallmentProductHeaderCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)_configurePeerPaymentHeaderCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configureCategoryHeaderCell:(id)arg1 forItem:(id)arg2 isUpdate:(BOOL)arg3 ;
-(void)_configureTransactionTypeHeaderCell:(id)arg1 forItem:(id)arg2 ;
-(id)_backgroundImageFromLogoImage:(id)arg1 ;
-(void)setContactResolver:(PKPeerPaymentContactResolver *)arg1 ;
-(void)dealloc;
@end

