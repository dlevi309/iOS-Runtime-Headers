/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MKLocationManagerObserver.h>

@class UIView, UILabel, MKLocationManager, CLInUseAssertion, NSString;

@interface MKStarkCompassView : UIView <MKLocationManagerObserver> {

	UIView* _contentsView;
	BOOL _monitoringCourse;
	UILabel* _label;
	MKLocationManager* _locationManager;
	CLInUseAssertion* _assertion;
	BOOL _contentsHidden;
	BOOL _active;
	int _compassPoint;

}

@property (assign,nonatomic) int compassPoint;                         //@synthesize compassPoint=_compassPoint - In the implementation block
@property (assign,nonatomic) BOOL contentsHidden;                      //@synthesize contentsHidden=_contentsHidden - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)_setActive:(BOOL)arg1 ;
-(void)_createSubviews;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)_startLocationUpdates;
-(void)_stopLocationUpdates;
-(void)_updateStyling;
-(void)_updateContents;
-(BOOL)contentsHidden;
-(void)setContentsHidden:(BOOL)arg1 ;
-(BOOL)_canStartLocationUpdates;
-(void)setCompassPoint:(int)arg1 ;
-(void)_updateDisplayedHeadingWithHeading:(double)arg1 ;
-(id)initWithSharedMKLocationManager;
-(int)compassPoint;
@end

