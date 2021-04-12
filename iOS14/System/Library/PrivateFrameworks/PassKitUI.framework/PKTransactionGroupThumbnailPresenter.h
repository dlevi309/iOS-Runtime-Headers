/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKDashboardItemPresenter.h>

@class PKPaymentTransactionIconGenerator, PKPeerPaymentContactResolver, NSCache, UIImage, PKMapsSnapshotManager, PKThumbnailCollectionViewCell, NSString;

@interface PKTransactionGroupThumbnailPresenter : NSObject <PKDashboardItemPresenter> {

	PKPaymentTransactionIconGenerator* _iconGenerator;
	PKPeerPaymentContactResolver* _contactResolver;
	NSCache* _iconsPerMerchantCategory;
	UIImage* _mapsPlaceholderImage;
	PKMapsSnapshotManager* _snapshotManager;
	PKThumbnailCollectionViewCell* _sampleCell;

}

@property (nonatomic,retain) PKMapsSnapshotManager * snapshotManager;              //@synthesize snapshotManager=_snapshotManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)mapsPlaceholderImage;
-(id)collectionViewCellClasses;
-(id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(PKMapsSnapshotManager *)snapshotManager;
-(Class)itemClass;
-(void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(/*^block*/id)arg5 ;
-(CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3 ;
-(void)setSnapshotManager:(PKMapsSnapshotManager *)arg1 ;
-(id)_contactKeysToFetch;
-(void)_updateAvatarOnThumbnailCell:(id)arg1 contact:(id)arg2 ;
-(void)_updateTitleOnThumbnailCell:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 contact:(id)arg3 ;
-(double)thumbnailWidth;
@end

