/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_state;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isEnabled;
-(void)_setState:(long long)arg1 ;
-(id)createViewForNavigationItem:(id)arg1 ;
-(id)createViewForToolbar:(id)arg1 ;
-(UINavigationBar *)_navigationBar;
-(UIToolbar *)_toolbar;
-(UIView *)_associatedView;
-(long long)_activityIndicatorStyle;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(id)initWithMapView:(id)arg1 ;
-(void)_goToNextMode:(id)arg1 ;
-(void)_setInternallyEnabled:(BOOL)arg1 ;
-(void)set_associatedView:(UIView *)arg1 ;
-(BOOL)_selectsWhenTracking;
-(void)_setSelectsWhenTracking:(BOOL)arg1 ;
-(id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(id)_trackingEmptyImage;
-(id)_trackingNoneImage;
-(id)_trackingFollowImage;
-(id)_trackingFollowWithHeadingImage;
-(BOOL)_isInMiniBar;
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
-(void)_setLandscapeImagePhone:(id)arg1 forUserTrackingMode:(long long)arg2 ;
@end

