/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(HKHealthRecordsStore *)healthRecordsStore;
-(id)description;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NSArray *)filePaths;
-(void)fetchClinicalOptInDataCollectionFilePaths;
-(void)setFilePaths:(NSArray *)arg1 ;
-(void)setHealthRecordsStore:(HKHealthRecordsStore *)arg1 ;
@end

