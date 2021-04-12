/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class EKEventMapCell, MKMapItemView, UIView, CLLocation;

@interface EKEventMapDetailItem : EKEventDetailItem {

	EKEventMapCell* _cell;
	MKMapItemView* _mapView;
	UIView* _loadingView;
	CLLocation* _location;
	EKEventMapCell* _oldCell;
	BOOL _animationHasRan;
	BOOL _hasMapItemLaunchOptionFromTimeToLeaveNotification;

}

@property (assign,nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;              //@synthesize hasMapItemLaunchOptionFromTimeToLeaveNotification=_hasMapItemLaunchOptionFromTimeToLeaveNotification - In the implementation block
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)_mapRelatedViewConstraintsForMapRelatedView:(id)arg1 inCell:(id)arg2 ;
-(void)_animateMapIfNeededWithPresentingController:(id)arg1 presentingView:(id)arg2 ;
-(CGPoint)_makeSpanWithCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2 minRadius:(double)arg3 ;
-(void)setupMapView;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)updateViewColors;
-(void)_loadMapItem:(id)arg1 withCoordinateSpan:(CGPoint)arg2 ;
-(void)reset;
-(BOOL)hasMapItemLaunchOptionFromTimeToLeaveNotification;
-(void)eventViewController:(id)arg1 tableViewDidScroll:(id)arg2 ;
-(void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(BOOL)arg1 ;
-(double)_mapHeight;
@end

