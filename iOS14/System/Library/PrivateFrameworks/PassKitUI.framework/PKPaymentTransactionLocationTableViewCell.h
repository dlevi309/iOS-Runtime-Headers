/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUsesDarkMapAppearance:(BOOL)arg1 ;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(id)_disclosureView;
-(PKPaymentTransaction *)transaction;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTitleLabelColor:(id)arg1 ;
-(BOOL)_shouldShowDisclosureIndicator;
-(BOOL)usesDarkMapAppearance;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

