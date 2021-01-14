/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/Social-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <libobjc.A.dylib/SLPlaceDataSourceDelegate.h>

@protocol SLSheetPlaceViewControllerDelegate, SLPlaceDataSource;
@class NSArray, SLPlace, NSBundle, UITableView, UISearchBar, UISearchDisplayController, SLSheetPlaceSearchController, MKMapView, NSObject, ACAccount, NSString;

@interface SLSheetPlaceViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UISearchDisplayDelegate, MKMapViewDelegate, SLPlaceDataSourceDelegate> {

	NSArray* _places;
	SLPlace* _selectedPlace;
	NSBundle* _effectiveBundle;
	UITableView* _tableView;
	UISearchBar* _searchBar;
	UISearchDisplayController* _searchDisplayController;
	SLSheetPlaceSearchController* _placeSearchController;
	MKMapView* _mapView;
	BOOL _searchPresented;
	BOOL _searchAnimationComplete;
	double _mapHeight;
	BOOL _searchEnabled;
	NSObject*<SLSheetPlaceViewControllerDelegate> _selectionDelegate;
	ACAccount* _account;
	NSObject*<SLPlaceDataSource> _placeDataSource;

}

@property (retain) ACAccount * account;                                                          //@synthesize account=_account - In the implementation block
@property (retain) NSObject*<SLPlaceDataSource> placeDataSource;                                 //@synthesize placeDataSource=_placeDataSource - In the implementation block
@property (retain) NSArray * places; 
@property (__weak) NSObject*<SLSheetPlaceViewControllerDelegate> selectionDelegate;              //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
@property (assign,nonatomic) BOOL searchEnabled;                                                 //@synthesize searchEnabled=_searchEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(ACAccount *)account;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(NSArray *)places;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(NSObject*<SLSheetPlaceViewControllerDelegate>)selectionDelegate;
-(void)setSelectionDelegate:(NSObject*<SLSheetPlaceViewControllerDelegate>)arg1 ;
-(void)loadView;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)searchDisplayControllerDidBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerDidEndSearch:(id)arg1 ;
-(void)searchDisplayControllerWillEndSearch:(id)arg1 ;
-(void)setPlaces:(NSArray *)arg1 ;
-(void)dealloc;
-(void)_centerMapWithSelectedPlace:(id)arg1 ;
-(void)_calculatePreferredContentSize;
-(double)_mapHeightForInterfaceOrientation:(long long)arg1 ;
-(double)_preferredViewHeight;
-(void)_layoutNormal;
-(void)_layoutForSearch;
-(void)_presentSearch;
-(void)_restoreFromSearch;
-(NSObject*<SLPlaceDataSource>)placeDataSource;
-(BOOL)searchEnabled;
-(BOOL)_forceSelectPlace:(id)arg1 setMapAnnotation:(BOOL)arg2 ;
-(void)_centerMapForPlaces;
-(SCD_Struct_SL2)_regionForPlaces:(id)arg1 ;
-(id)_placeForRow:(long long)arg1 ;
-(void)placeManager:(id)arg1 updatedPlaces:(id)arg2 ;
-(void)placeManager:(id)arg1 failedWithError:(id)arg2 ;
-(id)initWithPlaceDataSource:(id)arg1 effectiveBundle:(id)arg2 ;
-(void)setSelectedPlace:(id)arg1 ;
-(void)setSearchEnabled:(BOOL)arg1 ;
-(void)setPlaceDataSource:(NSObject*<SLPlaceDataSource>)arg1 ;
@end

