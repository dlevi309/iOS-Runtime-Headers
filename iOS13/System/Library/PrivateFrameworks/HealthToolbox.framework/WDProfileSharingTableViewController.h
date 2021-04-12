/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HKSwitchTableViewCellDelegate.h>
#import <libobjc.A.dylib/HKSourceListDataSourceObserver.h>

@class WDProfile, HKHealthStore, HKCharacteristicType, NSDictionary, WDDisplayTypeDescriptionTableFooterView, HKDisplayType, HKSourceListDataSource;

@interface WDProfileSharingTableViewController : HKTableViewController <HKSwitchTableViewCellDelegate, HKSourceListDataSourceObserver> {

	WDProfile* _profile;
	HKHealthStore* _healthStore;
	HKCharacteristicType* _characteristicType;
	NSDictionary* _characteristicAuthorizationRecordsBySource;
	WDDisplayTypeDescriptionTableFooterView* _footerView;
	HKDisplayType* _displayType;
	BOOL _isLoaded;
	HKSourceListDataSource* _sourceListDataSource;
	NSDictionary* _sourceToAuthRecord;

}

@property (nonatomic,retain) HKSourceListDataSource * sourceListDataSource;              //@synthesize sourceListDataSource=_sourceListDataSource - In the implementation block
@property (nonatomic,copy) NSDictionary * sourceToAuthRecord;                            //@synthesize sourceToAuthRecord=_sourceToAuthRecord - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)sourceListDataSourceDidUpdate:(id)arg1 ;
-(void)_gatherDataAndRefreshUI;
-(void)_adjustFooterHeight;
-(void)_fetchAuthorizationRecordsBySourceForCharacteristic:(id)arg1 ;
-(void)setSourceToAuthRecord:(NSDictionary *)arg1 ;
-(NSDictionary *)sourceToAuthRecord;
-(void)setSourceListDataSource:(HKSourceListDataSource *)arg1 ;
-(HKSourceListDataSource *)sourceListDataSource;
-(id)_sourceForIndexPath:(id)arg1 ;
-(void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 cell:(id)arg3 tableView:(id)arg4 fetchError:(id)arg5 ;
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(id)initWithProfile:(id)arg1 characteristicType:(id)arg2 ;
@end

