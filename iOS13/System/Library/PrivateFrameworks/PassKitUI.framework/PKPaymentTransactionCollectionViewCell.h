/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class PKDashboardPaymentTransactionItem, PKPaymentTransactionGroupItem, PKPaymentTransactionView;

@interface PKPaymentTransactionCollectionViewCell : PKDashboardCollectionViewCell {

	PKDashboardPaymentTransactionItem* _item;
	PKPaymentTransactionGroupItem* _groupItem;
	PKPaymentTransactionView* _transactionView;

}

@property (nonatomic,retain) PKDashboardPaymentTransactionItem * item;                  //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionGroupItem * groupItem;                 //@synthesize groupItem=_groupItem - In the implementation block
@property (nonatomic,readonly) PKPaymentTransactionView * transactionView;              //@synthesize transactionView=_transactionView - In the implementation block
-(PKDashboardPaymentTransactionItem *)item;
-(void)setItem:(PKDashboardPaymentTransactionItem *)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setGroupItem:(PKPaymentTransactionGroupItem *)arg1 ;
-(PKPaymentTransactionView *)transactionView;
-(PKPaymentTransactionGroupItem *)groupItem;
-(void)setShowsBottomSeparator:(BOOL)arg1 ;
-(double)maxWidthForTransactionCellInWidth:(double)arg1 ;
@end

