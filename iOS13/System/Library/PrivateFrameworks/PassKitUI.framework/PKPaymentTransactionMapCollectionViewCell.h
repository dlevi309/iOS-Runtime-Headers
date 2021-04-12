/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(PKDashboardTransactionMapItem *)item;
-(void)setItem:(PKDashboardTransactionMapItem *)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(PKTransactionMapView *)mapView;
-(BOOL)showSpinner;
-(void)setShowSpinner:(BOOL)arg1 ;
-(double)maxWidthForTransactionCellInWidth:(double)arg1 ;
-(void)_updateSpinnerAndDisclosureIndicator;
-(void)setShowDisclosureIndicator:(BOOL)arg1 ;
-(BOOL)showDisclosureIndicator;
@end

