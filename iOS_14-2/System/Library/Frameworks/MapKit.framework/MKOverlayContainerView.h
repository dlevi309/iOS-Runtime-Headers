/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol MKOverlayContainerViewDelegate;
@class NSMutableOrderedSet, NSMapTable, NSMutableArray, UIView, MKMapView, NSArray;

@interface MKOverlayContainerView : UIView {

	NSMutableOrderedSet* _overlays[2];
	NSMapTable* _overlayToDrawable[2];
	NSMutableArray* _drawables[2];
	NSMutableArray* _vkOverlays[2];
	UIView* _viewContainers[2];
	id<MKOverlayContainerViewDelegate> _delegate;
	double _mapZoomScale;
	MKMapView* _mapView;

}

@property (assign,nonatomic,__weak) id<MKOverlayContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) MKMapView * mapView;                                      //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic) double mapZoomScale;                                             //@synthesize mapZoomScale=_mapZoomScale - In the implementation block
@property (nonatomic,readonly) NSArray * overlays; 
@property (nonatomic,readonly) NSArray * allDrawables; 
-(void)insertOverlay:(id)arg1 belowOverlay:(id)arg2 ;
-(void)addOverlay:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<MKOverlayContainerViewDelegate>)delegate;
-(NSArray *)overlays;
-(void)setMapView:(MKMapView *)arg1 ;
-(void)addAndRemoveOverlayViews;
-(void)setMapZoomScale:(double)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2 ;
-(void)setDelegate:(id<MKOverlayContainerViewDelegate>)arg1 ;
-(void)didMoveToWindow;
-(long long)_drawableIndexForDrawable:(id)arg1 level:(long long)arg2 ;
-(void)_insertDrawable:(id)arg1 forOverlay:(id)arg2 atIndex:(long long)arg3 level:(long long)arg4 ;
-(void)_updateShowsAppleLogoIfNeeded;
-(long long)_levelForOverlay:(id)arg1 exists:(BOOL*)arg2 ;
-(void)_configureAndAddDrawable:(id)arg1 forOverlay:(id)arg2 level:(long long)arg3 ;
-(SCD_Struct_MK6)_mapRectWithFractionOfVisible:(double)arg1 ;
-(void)_removeDrawable:(id)arg1 forOverlay:(id)arg2 level:(long long)arg3 ;
-(id)_considerAddingDrawable:(id)arg1 inAddRect:(SCD_Struct_MK6)arg2 level:(long long)arg3 ;
-(void)_exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2 level:(long long)arg3 ;
-(void)_updateContentScale:(id)arg1 ;
-(id)_viewContainerForLevel:(long long)arg1 ;
-(BOOL)_overlaySpansGlobeAndReplacesMapContent;
-(double)mapZoomScale;
-(NSArray *)allDrawables;
-(void)addOverlays:(id)arg1 ;
-(void)addOverlay:(id)arg1 level:(long long)arg2 ;
-(void)addOverlays:(id)arg1 level:(long long)arg2 ;
-(void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2 level:(long long)arg3 ;
-(void)removeOverlays:(id)arg1 ;
-(void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2 ;
-(void)exchangeOverlay:(id)arg1 withOverlay:(id)arg2 ;
-(id)drawableForOverlay:(id)arg1 ;
-(id)overlaysInLevel:(long long)arg1 ;
-(MKMapView *)mapView;
-(void)removeOverlay:(id)arg1 ;
@end

