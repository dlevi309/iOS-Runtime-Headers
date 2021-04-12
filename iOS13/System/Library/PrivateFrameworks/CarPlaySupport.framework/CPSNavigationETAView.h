/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CPSNavigationDisplaying.h>

@class CPTrip, CPSRouteEstimatesView, UIView, NSString;

@interface CPSNavigationETAView : UIView <CPSNavigationDisplaying> {

	CPTrip* _trip;
	CPSRouteEstimatesView* _routeEstimatesView;
	unsigned long long _tripEstimateStyle;
	UIView* _borderView;

}

@property (nonatomic,retain) UIView * borderView;                                       //@synthesize borderView=_borderView - In the implementation block
@property (nonatomic,readonly) CPTrip * trip;                                           //@synthesize trip=_trip - In the implementation block
@property (nonatomic,readonly) CPSRouteEstimatesView * routeEstimatesView;              //@synthesize routeEstimatesView=_routeEstimatesView - In the implementation block
@property (assign,nonatomic) unsigned long long tripEstimateStyle;                      //@synthesize tripEstimateStyle=_tripEstimateStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHidden:(BOOL)arg1 ;
-(void)removeFromSuperview;
-(void)_updateStyle;
-(void)didMoveToSuperview;
-(void)setBorderView:(UIView *)arg1 ;
-(UIView *)borderView;
-(CPTrip *)trip;
-(unsigned long long)tripEstimateStyle;
-(void)setTripEstimateStyle:(unsigned long long)arg1 ;
-(void)updateEstimates:(id)arg1 forManeuver:(id)arg2 ;
-(CPSRouteEstimatesView *)routeEstimatesView;
-(id)initWithTrip:(id)arg1 style:(unsigned long long)arg2 ;
-(void)showManeuvers:(id)arg1 ;
@end

