/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>

@class PXContextualMemoriesSettings, UIView, NSString;

@interface PXContextualMemoriesSettingsTableViewController : UITableViewController <MKMapViewDelegate, CNContactPickerDelegate> {

	BOOL _showsDatePicker;
	BOOL _showsLocationPicker;
	PXContextualMemoriesSettings* _settings;
	UIView* _progressIndicatorView;

}

@property (nonatomic,retain) PXContextualMemoriesSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) BOOL showsDatePicker;                                 //@synthesize showsDatePicker=_showsDatePicker - In the implementation block
@property (assign,nonatomic) BOOL showsLocationPicker;                             //@synthesize showsLocationPicker=_showsLocationPicker - In the implementation block
@property (nonatomic,retain) UIView * progressIndicatorView;                       //@synthesize progressIndicatorView=_progressIndicatorView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)title;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)_handleLongPress:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setSettings:(PXContextualMemoriesSettings *)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContacts:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)viewDidLoad;
-(PXContextualMemoriesSettings *)settings;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)_installProgressIndicatorView;
-(void)_tableView:(id)arg1 selectionDidUpdateForRowAtIndexPath:(id)arg2 ;
-(void)_updateDatePickerHidden;
-(void)_updateLocationPickerHidden;
-(long long)_sectionForSettingOfClass:(Class)arg1 ;
-(void)_reloadRowAndRestoreSelectionIfNeededAtIndexPath:(id)arg1 ;
-(long long)_sectionForDate;
-(long long)_sectionForLocation;
-(long long)_sectionForPeople;
-(id)_indexPathForDateValue;
-(id)_indexPathForLocationValue;
-(id)_indexPathForPeopleValue;
-(id)_indexPathForDatePicker;
-(id)_indexPathForLocationPicker;
-(BOOL)_isDatePickerCellAtIndexPath:(id)arg1 ;
-(BOOL)_isLocationPickerCellAtIndexPath:(id)arg1 ;
-(BOOL)_isPeopleValueCellAtIndexPath:(id)arg1 ;
-(SCD_Struct_PX74)_regionForLocationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)_didChangeDatePicker:(id)arg1 ;
-(BOOL)showsDatePicker;
-(void)_didPressResetAll:(id)arg1 ;
-(void)_showContactsPicker;
-(void)setShowsDatePicker:(BOOL)arg1 ;
-(BOOL)showsLocationPicker;
-(void)setShowsLocationPicker:(BOOL)arg1 ;
-(UIView *)progressIndicatorView;
-(void)setProgressIndicatorView:(UIView *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
@end

