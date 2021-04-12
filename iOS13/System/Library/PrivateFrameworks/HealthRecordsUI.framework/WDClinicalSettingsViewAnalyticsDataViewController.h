/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <UIKitCore/UITableViewController.h>

@class HKHealthRecordsStore, NSArray;

@interface WDClinicalSettingsViewAnalyticsDataViewController : UITableViewController {

	HKHealthRecordsStore* _healthRecordsStore;
	NSArray* _filePaths;

}

@property (retain) NSArray * filePaths;                                              //@synthesize filePaths=_filePaths - In the implementation block
@property (nonatomic,retain) HKHealthRecordsStore * healthRecordsStore;              //@synthesize healthRecordsStore=_healthRecordsStore - In the implementation block
-(id)description;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSArray *)filePaths;
-(HKHealthRecordsStore *)healthRecordsStore;
-(void)fetchClinicalOptInDataCollectionFilePaths;
-(void)setFilePaths:(NSArray *)arg1 ;
-(void)setHealthRecordsStore:(HKHealthRecordsStore *)arg1 ;
@end

