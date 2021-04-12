/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKDashboardItemPresenter.h>

@protocol CNAvatarViewDelegate;
@class PKPeerPaymentContactResolver, PKPaymentDefaultDataProvider, PKPaymentTransactionIconGenerator, UIFont, UIImage, PKPaymentTransactionDetailsFactory, PKPaymentTransactionCollectionViewCell, NSString;

@interface PKDashboardPaymentTransactionItemPresenter : NSObject <PKDashboardItemPresenter> {

	unsigned long long _context;
	PKPeerPaymentContactResolver* _contactResolver;
	PKPaymentDefaultDataProvider* _dataProvider;
	PKPaymentTransactionIconGenerator* _iconGenerator;
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

@property (nonatomic,retain) PKPeerPaymentContactResolver * contactResolver;              //@synthesize contactResolver=_contactResolver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cashbackImage;
-(id)appleCardImage;
-(void)_updatePrimaryLabelOnTransactionCell:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 contact:(id)arg3 ;
-(id)collectionViewCellClasses;
-(id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(Class)itemClass;
-(void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(/*^block*/id)arg5 ;
-(CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3 ;
-(void)prefetchForItem:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4 ;
-(BOOL)hideSeparatorForItem:(id)arg1 inCollectionView:(id)arg2 ;
-(CGSize)_imageSize;
-(id)_contactKeysToFetch;
-(PKPeerPaymentContactResolver *)contactResolver;
-(BOOL)_shouldShowIconForTransactionSource:(id)arg1 context:(unsigned long long)arg2 ;
-(id)initWithContext:(unsigned long long)arg1 avatarViewDelegate:(id)arg2 ;
-(void)viewControllerForTransaction:(id)arg1 transactionSource:(id)arg2 account:(id)arg3 forcePreventHistory:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)_updateAvatarOnTransactionCell:(id)arg1 withTransaction:(id)arg2 contact:(id)arg3 ;
-(void)setContactResolver:(PKPeerPaymentContactResolver *)arg1 ;
@end

