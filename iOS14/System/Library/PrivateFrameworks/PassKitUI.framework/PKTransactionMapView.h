/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(PKPaymentTransaction *)transaction;
-(void)layoutSubviews;
-(void)_updateLocations;
-(void)_centerOnTransactionAnimated:(BOOL)arg1 ;
-(id)_annotationsForTransaction:(id)arg1 ;
-(SCD_Struct_PK11)_mapRectForTransaction:(id)arg1 ;
-(void)_shiftLocationIfNeeded:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_createAnnotationsForTransaction:(id)arg1 ;
-(BOOL)showsMerchantName;
-(BOOL)usesDarkAppearance;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(id)_locationShifter;
-(void)setUsesDarkAppearance:(BOOL)arg1 ;
-(void)setShowsMerchantName:(BOOL)arg1 ;
@end

