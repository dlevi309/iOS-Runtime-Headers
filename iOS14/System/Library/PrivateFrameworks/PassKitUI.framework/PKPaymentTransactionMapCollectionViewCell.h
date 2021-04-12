/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UIImageView, UIActivityIndicatorView, PKDashboardTransactionMapItem, PKTransactionMapView, UILabel;

@interface PKPaymentTransactionMapCollectionViewCell : PKDashboardCollectionViewCell {

	UIImageView* _disclosureView;
	UIActivityIndicatorView* _spinner;
	BOOL _showDisclosureIndicator;
	BOOL _showSpinner;
	PKDashboardTransactionMapItem* _item;
	PKTransactionMapView* _mapView;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) PKDashboardTransactionMapItem * item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) PKTransactionMapView * mapView;                  //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) BOOL showDisclosureIndicator;                      //@synthesize showDisclosureIndicator=_showDisclosureIndicator - In the implementation block
@property (assign,nonatomic) BOOL showSpinner;                                  //@synthesize showSpinner=_showSpinner - In the implementation block
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)showDisclosureIndicator;
-(PKDashboardTransactionMapItem *)item;
-(void)prepareForReuse;
-(void)setItem:(PKDashboardTransactionMapItem *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setShowSpinner:(BOOL)arg1 ;
-(PKTransactionMapView *)mapView;
-(double)maxWidthForTransactionCellInWidth:(double)arg1 ;
-(void)_updateSpinnerAndDisclosureIndicator;
-(void)setShowDisclosureIndicator:(BOOL)arg1 ;
-(BOOL)showSpinner;
@end

