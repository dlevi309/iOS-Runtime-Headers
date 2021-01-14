/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/HealthExperienceUI.CompoundDataSourceViewController.h>
#import <libobjc.A.dylib/WDFavoriteDisplayTypesControllerObserver.h>

@interface HealthExperienceUI.EditFavoritesTableViewController : HealthExperienceUI.CompoundDataSourceViewController <WDFavoriteDisplayTypesControllerObserver> {

	 editFavoritesDataSource;
	 favoritesController;
	 $__lazy_storage_$_segmentedControl;

}
-(void)favoriteDisplayTypesControllerDidUpdate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(void)segmentedControlChanged;
-(void)doneButtonTapped;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

