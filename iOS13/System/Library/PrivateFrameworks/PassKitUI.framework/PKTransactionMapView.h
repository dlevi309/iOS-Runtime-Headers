/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class MKMapView, _MKLocationShifter, CLLocation, PKPaymentTransaction, NSString;

@interface PKTransactionMapView : UIView <MKMapViewDelegate> {

	MKMapView* _internalMapView;
	CGRect _lastLaidBounds;
	_MKLocationShifter* _locationShifter;
	CLLocation* _preferredLocation;
	CLLocation* _startStationLocation;
	CLLocation* _endStationLocation;
	BOOL _showsMerchantName;
	BOOL _usesDarkAppearance;
	PKPaymentTransaction* _transaction;

}

@property (assign,nonatomic) BOOL showsMerchantName;                          //@synthesize showsMerchantName=_showsMerchantName - In the implementation block
@property (nonatomic,retain) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) BOOL usesDarkAppearance;                         //@synthesize usesDarkAppearance=_usesDarkAppearance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPaymentTransaction *)transaction;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_locationShifter;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)setUsesDarkAppearance:(BOOL)arg1 ;
-(void)setShowsMerchantName:(BOOL)arg1 ;
-(void)_centerOnTransactionAnimated:(BOOL)arg1 ;
-(void)_updateLocations;
-(id)_annotationsForTransaction:(id)arg1 ;
-(SCD_Struct_PK8)_mapRectForTransaction:(id)arg1 ;
-(void)_shiftLocationIfNeeded:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_createAnnotationsForTransaction:(id)arg1 ;
-(BOOL)showsMerchantName;
-(BOOL)usesDarkAppearance;
@end

