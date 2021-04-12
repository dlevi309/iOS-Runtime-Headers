/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <HealthExperienceUI/HealthExperienceUI.CompoundDataSourceCollectionViewController.h>
#import <libobjc.A.dylib/HKMCSettingsManagerObserver.h>
#import <libobjc.A.dylib/HKMCAnalysisProviderObserver.h>
#import <UIKit/UIViewControllerRestoration.h>

@interface MenstrualCyclesAppPlugin.MenstrualCyclesRoomViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController <HKMCSettingsManagerObserver, HKMCAnalysisProviderObserver, UIViewControllerRestoration> {

	 $__lazy_storage_$_analysisProvider;
	 $__lazy_storage_$_availabilityManager;
	 $__lazy_storage_$_settingsManager;
	 launchSource;
	 $__lazy_storage_$_initialDay;
	 loadTest;
	 tripleTapInternalSettingsGestureRecognizer;
	 observation;

}
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)settingsManagerDidUpdateHiddenDisplayTypes:(id)arg1 ;
-(void)analysisProvider:(id)arg1 didUpdateAnalysis:(id)arg2 ;
-(void)presentAddPeriodCalendar:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)pushInternalSettings;
@end

