/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class _UIPortalView, UIView, UIAccessibilityHUDItem, NSString;

@interface _UIStatusBarSensorActivityView : UIView <_UIStatusBarDisplayable> {

	_UIPortalView* _portalView;
	UIView* _sensorActivityView;

}

@property (nonatomic,retain) _UIPortalView * portalView;                                             //@synthesize portalView=_portalView - In the implementation block
@property (nonatomic,retain) UIView * sensorActivityView;                                            //@synthesize sensorActivityView=_sensorActivityView - In the implementation block
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)intrinsicContentSize;
-(void)configurePortalViewIfNeeded;
-(_UIPortalView *)portalView;
-(UIView *)sensorActivityView;
-(void)setSensorActivityView:(UIView *)arg1 ;
-(void)configureSensorViewWithoutPortalIfNeeded;
-(void)setPortalView:(_UIPortalView *)arg1 ;
@end

