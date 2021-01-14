/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UIBarButtonItem.h>
#import <libobjc.A.dylib/MKUserTrackingButtonTarget.h>

@class UIButton, _MKUserTrackingButtonController, _MKUserTrackingButton, UIImage, MKMapView, UIToolbar, UINavigationBar, UIView, NSString;

@interface MKUserTrackingBarButtonItem : UIBarButtonItem <MKUserTrackingButtonTarget> {

	BOOL _hasCustomAssociatedView;
	UIButton* _customButton;
	_MKUserTrackingButtonController* _controller;
	_MKUserTrackingButton* _userTrackingButton;
	BOOL _explicitlyEnabled;
	BOOL _internallyEnabled;
	UIImage* _trackingEmptyImage;
	UIImage* _trackingNoneImage;
	UIImage* _trackingFollowImage;
	UIImage* _trackingFollowWithHeadingImage;
	MKMapView* _mapView;
	UIToolbar* _toolbar;
	UINavigationBar* _navigationBar;
	UIView* _associatedView;

}

@property (assign,setter=_setState:,nonatomic) long long _state; 
@property (nonatomic,retain) UIToolbar * _toolbar;                                                                              //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) UINavigationBar * _navigationBar;                                                                  //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) UIView * _associatedView;                                                                          //@synthesize associatedView=_associatedView - In the implementation block
@property (setter=_setUserTrackingView:,nonatomic,retain) id<MKUserTrackingView> _userTrackingView; 
@property (assign,setter=_setSelectsWhenTracking:,getter=_selectsWhenTracking,nonatomic) BOOL selectsWhenTracking; 
@property (nonatomic,retain) MKMapView * mapView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_activityIndicatorClass;
-(long long)_state;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_setState:(long long)arg1 ;
-(id)init;
-(UIToolbar *)_toolbar;
-(void)_setInternallyEnabled:(BOOL)arg1 ;
-(void)set_associatedView:(UIView *)arg1 ;
-(BOOL)_selectsWhenTracking;
-(void)_setSelectsWhenTracking:(BOOL)arg1 ;
-(id)_trackingEmptyImage;
-(id)_trackingNoneImage;
-(id)_trackingFollowImage;
-(BOOL)_isInMiniBar;
-(void)setMapView:(MKMapView *)arg1 ;
-(id)_trackingFollowWithHeadingImage;
-(id<MKUserTrackingView>)_userTrackingView;
-(void)_setUserTrackingView:(id)arg1 ;
-(void)set_toolbar:(UIToolbar *)arg1 ;
-(void)_repositionViews;
-(void)set_navigationBar:(UINavigationBar *)arg1 ;
-(void)_updateForState:(long long)arg1 ;
-(BOOL)_isHighlightedForState:(long long)arg1 ;
-(id)_imageForUserTrackingMode:(long long)arg1 ;
-(void)_setImage:(id)arg1 forUserTrackingMode:(long long)arg2 ;
-(id)_landscapeImagePhoneForUserTrackingMode:(long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_setLandscapeImagePhone:(id)arg1 forUserTrackingMode:(long long)arg2 ;
-(id)initWithMapView:(id)arg1 ;
-(void)_goToNextMode:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)createViewForToolbar:(id)arg1 ;
-(id)createViewForNavigationItem:(id)arg1 ;
-(BOOL)isEnabled;
-(UINavigationBar *)_navigationBar;
-(long long)_activityIndicatorStyle;
-(UIView *)_associatedView;
-(MKMapView *)mapView;
-(void)dealloc;
-(id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2 ;
@end

