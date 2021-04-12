/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)reset;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(BOOL)hasMapItemLaunchOptionFromTimeToLeaveNotification;
-(void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(BOOL)arg1 ;
-(void)setupMapView;
-(void)updateViewColors;
-(void)_animateMapIfNeededWithPresentingController:(id)arg1 presentingView:(id)arg2 ;
-(double)_mapHeight;
-(id)_mapRelatedViewConstraintsForMapRelatedView:(id)arg1 inCell:(id)arg2 ;
-(CGPoint)_makeSpanWithCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2 minRadius:(double)arg3 ;
-(void)_loadMapItem:(id)arg1 withCoordinateSpan:(CGPoint)arg2 ;
-(void)eventViewController:(id)arg1 tableViewDidScroll:(id)arg2 ;
@end

