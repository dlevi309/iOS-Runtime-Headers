/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UIViewController.h>

@class HKLocationReadings, HKWorkout, HKRouteView, HKHealthStore, NSString, NSArray;

@interface HKWorkoutRouteViewController : UIViewController {

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
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setExcludedActivityTypes:(NSArray *)arg1 ;
-(BOOL)sharingEnabled;
-(void)setSharingEnabled:(BOOL)arg1 ;
-(NSArray *)excludedActivityTypes;
-(void)_shareButtonPressed:(id)arg1 ;
-(void)setShareText:(NSString *)arg1 ;
-(NSString *)shareText;
-(id)initWithLocationReadings:(id)arg1 title:(id)arg2 sharingEnabled:(BOOL)arg3 shareText:(id)arg4 excludedActivityTypes:(id)arg5 ;
-(void)_toggleRouteViewMapType:(id)arg1 ;
-(void)_internalDebuggingOnly_toggleUnsmoothedLocations:(id)arg1 ;
-(HKRouteView *)routeView;
-(void)_internalDebuggingOnly_fetchUnsmoothedRoutesFromDatabase;
-(void)setUnsmoothedLocationReadings:(HKLocationReadings *)arg1 ;
-(void)setRouteView:(HKRouteView *)arg1 ;
-(HKLocationReadings *)unsmoothedLocationReadings;
@end

