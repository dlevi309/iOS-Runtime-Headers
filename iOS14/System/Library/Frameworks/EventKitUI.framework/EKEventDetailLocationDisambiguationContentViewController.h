/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol OS_dispatch_queue;
@class EKStructuredLocation, NSMutableArray, UISearchBar, MKMapView, UIView, UITableView, MKPointAnnotation, MKCircleRenderer, NSObject, NSCache, NSSet, NSString;

@interface EKEventDetailLocationDisambiguationContentViewController : UIViewController <UISearchBarDelegate, MKMapViewDelegate, UITableViewDelegate, UITableViewDataSource> {

	EKStructuredLocation* _location;
	NSMutableArray* _pois;
	/*^block*/id _completionBlock;
	UISearchBar* _searchBar;
	MKMapView* _mapView;
	UIView* _separatorLine;
	UITableView* _tableView;
	MKPointAnnotation* _pin;
	MKCircleRenderer* _circleRenderer;
	BOOL _textChanged;
	BOOL _geocoding;
	BOOL _done;
	NSObject*<OS_dispatch_queue> _iconRenderQueue;
	NSCache* _iconCache;
	BOOL _rowSelectionInitialized;
	unsigned long long _currentLayoutParadigm;
	NSSet* _tallConstraints;
	NSSet* _iPadConstraints;
	NSSet* _splitConstraints;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateViewConstraints;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(id)_constraintsForParadigm:(unsigned long long)arg1 ;
-(void)cancelTapped:(id)arg1 ;
-(void)_selectCircle;
-(void)_updateMapRegion;
-(void)_deselectCircle;
-(BOOL)_shouldEnableAddButton;
-(void)_createConstraints;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(void)doneTapped:(id)arg1 ;
-(void)viewDidLoad;
-(void)_selectRow:(unsigned long long)arg1 ;
-(id)initWithLocation:(id)arg1 pois:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
@end

