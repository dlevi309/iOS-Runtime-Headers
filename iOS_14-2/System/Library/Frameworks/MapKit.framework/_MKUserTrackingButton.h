/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/MKUserTrackingButtonTarget.h>

@class _MKUserTrackingButtonController, NSMutableDictionary, MKMapView, NSString;

@interface _MKUserTrackingButton : UIButton <MKUserTrackingButtonTarget> {

	_MKUserTrackingButtonController* _controller;
	NSMutableDictionary* _customImages;
	NSMutableDictionary* _customLandscapeImagePhones;
	NSMutableDictionary* _customImageEdgeInsets;
	BOOL _selectsWhenTracking;
	BOOL _explicitlyEnabled;
	BOOL _internallyEnabled;
	BOOL _applyDefaultImageIfNeeded;
	BOOL _inMiniBar;

}

@property (nonatomic,readonly) _MKUserTrackingButtonController * controller;                                                    //@synthesize controller=_controller - In the implementation block
@property (assign,setter=_setSelectsWhenTracking:,getter=_selectsWhenTracking,nonatomic) BOOL selectsWhenTracking;              //@synthesize selectsWhenTracking=_selectsWhenTracking - In the implementation block
@property (assign,nonatomic,__weak) MKMapView * mapView; 
@property (assign,nonatomic,__weak) id<MKUserTrackingView> userTrackingView; 
@property (nonatomic,readonly) BOOL inMiniBar;                                                                                  //@synthesize inMiniBar=_inMiniBar - In the implementation block
@property (nonatomic,readonly) unsigned long long behavior; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buttonWithUserTrackingView:(id)arg1 ;
+(Class)_activityIndicatorClass;
+(id)buttonWithUserTrackingView:(id)arg1 withType:(long long)arg2 applyDefaultImageIfNeeded:(BOOL)arg3 ;
+(id)buttonWithUserTrackingView:(id)arg1 withType:(long long)arg2 ;
+(id)buttonWithMapView:(id)arg1 ;
+(id)buttonWithMapView:(id)arg1 applyDefaultImageIfNeeded:(BOOL)arg2 ;
-(CGRect)_selectedIndicatorBounds;
-(long long)_state;
-(void)_setState:(long long)arg1 ;
-(void)_setInternallyEnabled:(BOOL)arg1 ;
-(BOOL)_selectsWhenTracking;
-(void)_setSelectsWhenTracking:(BOOL)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(id)_imageForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(void)_setImage:(id)arg1 forUserTrackingMode:(long long)arg2 controlState:(unsigned long long)arg3 ;
-(id)_landscapeImagePhoneForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(void)_setLandscapeImagePhone:(id)arg1 forUserTrackingMode:(long long)arg2 controlState:(unsigned long long)arg3 ;
-(void)_repositionViews;
-(unsigned long long)behavior;
-(void)_updateForState:(long long)arg1 ;
-(BOOL)_isHighlightedForState:(long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)_defaultImageForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(id)_defaultLandscapeImagePhoneForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(UIEdgeInsets)_imageEdgeInsetsForUserTrackingMode:(long long)arg1 ;
-(void)_setImageEdgeInsets:(UIEdgeInsets)arg1 forUserTrackingMode:(long long)arg2 ;
-(id<MKUserTrackingView>)userTrackingView;
-(void)setUserTrackingView:(id<MKUserTrackingView>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_MKUserTrackingButtonController *)controller;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)_activityIndicatorStyle;
-(BOOL)inMiniBar;
-(MKMapView *)mapView;
-(void)updateForMiniBarState:(BOOL)arg1 ;
-(id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2 ;
@end

