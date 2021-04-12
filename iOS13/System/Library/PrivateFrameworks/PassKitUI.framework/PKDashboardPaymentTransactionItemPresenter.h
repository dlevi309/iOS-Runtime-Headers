/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKDashboardItemPresenter.h>

@protocol CNAvatarViewDelegate;
@class PKPeerPaymentWebService, PKPeerPaymentController, PKPeerPaymentContactResolver, PKPaymentDefaultDataProvider, PKPaymentTransactionCellController, UIFont, UIImage, PKPaymentTransactionDetailsFactory, PKPaymentTransactionCollectionViewCell, NSString;

@interface PKDashboardPaymentTransactionItemPresenter : NSObject <PKDashboardItemPresenter> {

	unsigned long long _context;
	PKPeerPaymentWebService* _peerPaymentWebService;
	PKPeerPaymentController* _peerPaymentController;
	PKPeerPaymentContactResolver* _contactResolver;
	PKPaymentDefaultDataProvider* _dataProvider;
	PKPaymentTransactionCellController* _transactionCellController;
	UIFont* _transactionCellPrimaryLabelFont;
	UIFont* _transactionCellPrimaryLabelPeerPaymentFont;
	UIFont* _transactionCellValueLabelFont;
	UIFont* _transactionCellValueLabelPeerPaymentFont;
	UIFont* _transactionCellSecondaryLabelFont;
	UIFont* _transactionCellSecondaryLabelPeerPaymentFont;
	UIImage* _emptyImage;
	UIImage* _cashbackImage;
	UIImage* _appleCardImage;
	PKPaymentTransactionDetailsFactory* _transactionDetailsFactory;
	id<CNAvatarViewDelegate> _avatarViewDelegate;
	PKPaymentTransactionCollectionViewCell* _sampleCell;
	BOOL _useAccessibilityLayout;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)_imageSize;
-(Class)itemClass;
-(id)cashbackImage;
-(id)appleCardImage;
-(id)_contactKeysToFetch;
-(id)collectionViewCellClasses;
-(id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3 ;
-(void)prefetchForItem:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4 ;
-(id)initWithContext:(unsigned long long)arg1 avatarViewDelegate:(id)arg2 ;
-(void)viewControllerForTransaction:(id)arg1 paymentPass:(id)arg2 account:(id)arg3 forcePreventHistory:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)_updateAvatarOnTransactionCell:(id)arg1 withTransaction:(id)arg2 contact:(id)arg3 ;
-(void)_updatePrimaryLabelOnTransactionCell:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 contact:(id)arg3 ;
-(BOOL)_shouldShowIconForPass:(id)arg1 context:(unsigned long long)arg2 ;
@end

