/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIActivityItemSource.h>

@class HKLocationReadings, HKWorkout, HKRouteView, HKHealthStore, NSString, NSArray;

@interface HKWorkoutRouteViewController : UIViewController <UIActivityItemSource> {

	HKLocationReadings* _locationReadings;
	HKWorkout* _workout;
	BOOL _showUnsmoothedRoute;
	BOOL _sharingEnabled;
	HKRouteView* _routeView;
	HKLocationReadings* _unsmoothedLocationReadings;
	HKHealthStore* _healthStore;
	NSString* _shareText;
	NSArray* _excludedActivityTypes;

}

@property (nonatomic,retain) HKRouteView * routeView;                                      //@synthesize routeView=_routeView - In the implementation block
@property (nonatomic,retain) HKLocationReadings * unsmoothedLocationReadings;              //@synthesize unsmoothedLocationReadings=_unsmoothedLocationReadings - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                  //@synthesize healthStore=_healthStore - In the implementation block
@property (assign,nonatomic) BOOL sharingEnabled;                                          //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
@property (nonatomic,retain) NSString * shareText;                                         //@synthesize shareText=_shareText - In the implementation block
@property (nonatomic,retain) NSArray * excludedActivityTypes;                              //@synthesize excludedActivityTypes=_excludedActivityTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKHealthStore *)healthStore;
-(void)viewWillLayoutSubviews;
-(void)setExcludedActivityTypes:(NSArray *)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(NSString *)shareText;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg1 ;
-(void)viewDidLoad;
-(void)_shareButtonPressed:(id)arg1 ;
-(NSArray *)excludedActivityTypes;
-(void)setSharingEnabled:(BOOL)arg1 ;
-(BOOL)sharingEnabled;
-(id)initWithLocationReadings:(id)arg1 title:(id)arg2 sharingEnabled:(BOOL)arg3 shareText:(id)arg4 excludedActivityTypes:(id)arg5 ;
-(void)_toggleRouteViewMapType:(id)arg1 ;
-(void)_internalDebuggingOnly_toggleUnsmoothedLocations:(id)arg1 ;
-(HKRouteView *)routeView;
-(void)_internalDebuggingOnly_fetchUnsmoothedRoutesFromDatabase;
-(void)setUnsmoothedLocationReadings:(HKLocationReadings *)arg1 ;
-(void)setRouteView:(HKRouteView *)arg1 ;
-(HKLocationReadings *)unsmoothedLocationReadings;
-(void)setShareText:(NSString *)arg1 ;
@end

