/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKDataMetadataViewController.h>

@class HKHealthStore, HKMapRouteTableViewCell, NSMutableArray, HKWorkoutRoute;

@interface HKWorkoutRouteTableViewController : HKDataMetadataViewController {

	HKHealthStore* _healthStore;
	HKMapRouteTableViewCell* _mapRouteTableViewCell;
	NSMutableArray* _routeData;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                  //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKMapRouteTableViewCell * mapRouteTableViewCell;              //@synthesize mapRouteTableViewCell=_mapRouteTableViewCell - In the implementation block
@property (nonatomic,retain) NSMutableArray * routeData;                                   //@synthesize routeData=_routeData - In the implementation block
@property (readonly) HKWorkoutRoute * workoutRoute; 
-(HKHealthStore *)healthStore;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithSample:(id)arg1 usingInsetStyling:(BOOL)arg2 profileName:(id)arg3 delegate:(id)arg4 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(HKWorkoutRoute *)workoutRoute;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithWorkoutRoute:(id)arg1 healthStore:(id)arg2 usingInsetStyling:(BOOL)arg3 profileName:(id)arg4 delegate:(id)arg5 ;
-(void)addRouteData:(id)arg1 hasFinishedQuery:(BOOL)arg2 ;
-(NSMutableArray *)routeData;
-(void)setRouteData:(NSMutableArray *)arg1 ;
-(void)parseAndDisplayRouteData;
-(HKMapRouteTableViewCell *)mapRouteTableViewCell;
-(void)setMapRouteTableViewCell:(HKMapRouteTableViewCell *)arg1 ;
-(void)loadRoute;
-(id)_convertIndexPathToSuper:(id)arg1 ;
@end

