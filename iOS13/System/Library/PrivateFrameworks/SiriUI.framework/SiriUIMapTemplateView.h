/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUIBaseTemplateView.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@protocol SiriUIMapTemplateViewDelegate;
@class MKMapView, UILabel, MKPinAnnotationView, UIButton, CLPlacemark, CLGeocoder, UITapGestureRecognizer, NSString;

@interface SiriUIMapTemplateView : SiriUIBaseTemplateView <MKMapViewDelegate> {

	MKMapView* _mapView;
	UILabel* _footnoteDescriptorLabel;
	UILabel* _footnoteLabel;
	MKPinAnnotationView* _pinAnnotationView;
	UIButton* _mapButton;
	CLPlacemark* _currentPlacemark;
	CLGeocoder* _geocoder;
	BOOL _needsToNotifyDelegateOfLocationUpdate;
	UITapGestureRecognizer* _tapRecognizer;
	id<SiriUIMapTemplateViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriUIMapTemplateViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIMapTemplateModel> dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SiriUIMapTemplateViewDelegate>)delegate;
-(void)setDelegate:(id<SiriUIMapTemplateViewDelegate>)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(void)_handleTapGesture:(id)arg1 ;
-(double)desiredHeight;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(void)prepareForDismissal;
-(id)_configuredFootnoteDescriptorLabel;
-(id)_configuredFootnoteLabel;
-(void)_mapButtonPressed:(id)arg1 ;
-(void)_notifyDelegateOfLocationUpdateIfNeededWithPlacemark:(id)arg1 ;
-(id)_configuredLabel;
@end

