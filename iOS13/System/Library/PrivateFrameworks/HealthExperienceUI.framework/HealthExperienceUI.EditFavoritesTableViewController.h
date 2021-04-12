/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)doneButtonTapped;
-(void)segmentedControlChanged;
@end

