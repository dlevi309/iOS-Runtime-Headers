/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class UILabel, PKTransactionMapView, UIImageView, PKPaymentTransaction;

@interface PKPaymentTransactionLocationTableViewCell : PKTableViewCell {

	UILabel* _titleLabel;
	PKTransactionMapView* _mapView;
	UIImageView* _disclosureView;
	PKPaymentTransaction* _transaction;

}

@property (nonatomic,retain) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) BOOL usesDarkMapAppearance; 
-(PKPaymentTransaction *)transaction;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)_disclosureView;
-(void)setTitleLabelColor:(id)arg1 ;
-(BOOL)_shouldShowDisclosureIndicator;
-(BOOL)usesDarkMapAppearance;
-(void)setUsesDarkMapAppearance:(BOOL)arg1 ;
@end

