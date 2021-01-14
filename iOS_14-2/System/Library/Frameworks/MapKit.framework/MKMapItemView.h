/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MKInfoCardThemeListener.h>

@class MKMuninContainerView, NSMutableArray, MKMapSnapshotView, NSLayoutConstraint, NSError, NSTimer, MKMapItem, NSString;

@interface MKMapItemView : UIView <MKInfoCardThemeListener> {

	MKMuninContainerView* _muninContainerView;
	NSMutableArray* _muninConstraints;
	MKMapSnapshotView* _snapshotView;
	CGSize _coordinateSpan;
	/*^block*/id _mapItemloadedCompletionHandler;
	NSMutableArray* _snapshotConstraints;
	NSLayoutConstraint* _snapshotWidthConstraint;
	NSError* _snapshotError;
	NSTimer* _loadTimeoutTimer;
	CGSize _sizeWhenLastLoaded;
	BOOL _loadCalledOnce;
	unsigned long long _signpostID;
	BOOL _loadingMuninView;
	BOOL _shouldResolveMapItem;
	BOOL _shouldShowBorders;
	MKMapItem* _mapItem;

}

@property (nonatomic,readonly) MKMapItem * mapItem;                  //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic) BOOL shouldResolveMapItem;              //@synthesize shouldResolveMapItem=_shouldResolveMapItem - In the implementation block
@property (assign,nonatomic) BOOL shouldShowBorders;                 //@synthesize shouldShowBorders=_shouldShowBorders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupObserver;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)triggerAnimation;
-(void)loadMapItem:(id)arg1 coordinateSpan:(CGSize)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setShouldShowBorders:(BOOL)arg1 ;
-(void)setShouldResolveMapItem:(BOOL)arg1 ;
-(MKMapItem *)mapItem;
-(void)layoutSubviews;
-(id)_annotationView;
-(void)_resetState;
-(void)_updateBorders;
-(void)infoCardThemeChanged;
-(BOOL)_areBoundsValid;
-(void)_callCompletionHandlerWithInvalidBoundsError;
-(void)_getParentItem;
-(CGSize)_clampCoordinateSpan:(CGSize)arg1 ;
-(void)_takeSnapshotCompleted;
-(void)_takeSnapshotWithCompletionHandler:(/*^block*/id)arg1 isReload:(BOOL)arg2 ;
-(void)_callCompletionHandler;
-(void)_fetchMuninViewforMapItem:(id)arg1 ;
-(BOOL)shouldResolveMapItem;
-(BOOL)shouldHideMuninForParsec;
-(void)_handleTapOnMuninView:(id)arg1 ;
-(void)_setupMuninConstraints;
-(void)_handleTapOnSnapshot:(id)arg1 ;
-(void)_setupSnapshotConstraints;
-(id)_deriveSnapshotOptions:(BOOL)arg1 ;
-(void)_reloadSnapshot;
-(id)_customAnnotation;
-(void)_receivedFullyDrawnNotification:(id)arg1 ;
-(void)_renderMapItem;
-(void)_resetMuninContainerViewState;
-(BOOL)shouldShowBorders;
-(void)cancel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
@end

