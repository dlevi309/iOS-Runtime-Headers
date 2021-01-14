/*
* Generated on Thursday, January 14, 2021 at 2:29:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/Heart.healthplugin/Heart
*/

#import <HealthToolbox/WDElectrocardiogramOverviewViewController.h>

@interface Heart.ElectrocardiogramDataTypeDetailViewController : WDElectrocardiogramOverviewViewController {

	 consumedHealthExperienceStore;
	 displayType;
	 favoritesController;
	 viewControllerFactory;
	 profileView;
	 profileInformationDataSource;
	 profileInformationSink;

}
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithUsingInsetStyling:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2 ;
-(double)adjustedSafeAreaInsetTop;
-(void)isFavorited:(BOOL)arg1 ;
-(void)showAddDataVC;
@end

