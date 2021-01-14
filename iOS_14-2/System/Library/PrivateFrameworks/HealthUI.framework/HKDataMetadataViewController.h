/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HKDataMetadataSubsampleDelegate.h>
#import <libobjc.A.dylib/HKDataMetadataReportAccessDelegate.h>

@protocol HKDataMetadataViewControllerDelegate;
@class HKSample, NSArray, NSMutableArray, HKLocationFetcher, HKLocationReadings, HKDataMetadataWorkoutRouteSection;

@interface HKDataMetadataViewController : HKTableViewController <HKDataMetadataSubsampleDelegate, HKDataMetadataReportAccessDelegate> {

	HKSample* _sample;
	NSArray* _subSampleTypes;
	id<HKDataMetadataViewControllerDelegate> _delegate;
	NSMutableArray* _sections;
	HKLocationFetcher* _locationFetcher;
	HKLocationReadings* _locationReadings;
	HKDataMetadataWorkoutRouteSection* _workoutRouteSection;

}

@property (nonatomic,readonly) NSArray * subSampleTypes;                                           //@synthesize subSampleTypes=_subSampleTypes - In the implementation block
@property (nonatomic,readonly) id<HKDataMetadataViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * sections;                                            //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) HKLocationFetcher * locationFetcher;                                  //@synthesize locationFetcher=_locationFetcher - In the implementation block
@property (nonatomic,retain) HKLocationReadings * locationReadings;                                //@synthesize locationReadings=_locationReadings - In the implementation block
@property (nonatomic,retain) HKDataMetadataWorkoutRouteSection * workoutRouteSection;              //@synthesize workoutRouteSection=_workoutRouteSection - In the implementation block
@property (nonatomic,retain) HKSample * sample;                                                    //@synthesize sample=_sample - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setSections:(NSMutableArray *)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(HKSample *)sample;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id<HKDataMetadataViewControllerDelegate>)delegate;
-(NSMutableArray *)sections;
-(id)initWithSample:(id)arg1 usingInsetStyling:(BOOL)arg2 profileName:(id)arg3 delegate:(id)arg4 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)setSample:(HKSample *)arg1 ;
-(id)defaultPredicateForSampleType:(id)arg1 ;
-(id)viewControllerForSampleType:(id)arg1 subSamplePredicate:(id)arg2 title:(id)arg3 ;
-(id)accessViewControllerForSample:(id)arg1 healthStore:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(void)setLocationReadings:(HKLocationReadings *)arg1 ;
-(HKLocationReadings *)locationReadings;
-(HKLocationFetcher *)locationFetcher;
-(void)setLocationFetcher:(HKLocationFetcher *)arg1 ;
-(void)_loadSections;
-(void)_fetchWorkoutRouteLocations;
-(void)_localeOrDisplayTypeChange:(id)arg1 ;
-(void)_fetchSubSampleTypes;
-(BOOL)_addSectionIfNonNull:(id)arg1 ;
-(void)_addWorkoutRouteSection;
-(void)_exportButtonAction:(id)arg1 ;
-(void)_updateSubSampleTypes:(id)arg1 error:(id)arg2 ;
-(void)_fetchRoutesWithSamplesHandler:(/*^block*/id)arg1 ;
-(void)finishedAggregateQuery;
-(NSArray *)subSampleTypes;
-(HKDataMetadataWorkoutRouteSection *)workoutRouteSection;
-(void)setWorkoutRouteSection:(HKDataMetadataWorkoutRouteSection *)arg1 ;
@end

