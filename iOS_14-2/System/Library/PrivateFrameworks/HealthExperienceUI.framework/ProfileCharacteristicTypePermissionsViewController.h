/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/HKSwitchTableViewCellDelegate.h>
#import <libobjc.A.dylib/HKSourceListDataSourceObserver.h>

@class HKHealthStore, HKDisplayTypeController, NSString, HKAuthorizationStore, HKCharacteristicType, NSDictionary, WDDisplayTypeDescriptionTableFooterView, HKDisplayType, NSArray, HKSourceListDataSource;

@interface ProfileCharacteristicTypePermissionsViewController : UITableViewController <HKSwitchTableViewCellDelegate, HKSourceListDataSourceObserver> {

	HKHealthStore* _healthStore;
	HKDisplayTypeController* _displayTypeController;
	NSString* _firstName;
	HKAuthorizationStore* _authorizationStore;
	HKCharacteristicType* _characteristicType;
	NSDictionary* _characteristicAuthorizationRecordsBySource;
	WDDisplayTypeDescriptionTableFooterView* _footerView;
	HKDisplayType* _displayType;
	BOOL _isLoaded;
	NSArray* _orderedSectionIdentifiers;
	HKSourceListDataSource* _sourceListDataSource;
	NSDictionary* _sourceToAuthRecord;

}

@property (nonatomic,retain) HKSourceListDataSource * sourceListDataSource;              //@synthesize sourceListDataSource=_sourceListDataSource - In the implementation block
@property (nonatomic,copy) NSDictionary * sourceToAuthRecord;                            //@synthesize sourceToAuthRecord=_sourceToAuthRecord - In the implementation block
+(id)orderedSectionIdentifiersForProfile:(long long)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(id)initWithHealthStore:(id)arg1 characteristicType:(id)arg2 firstName:(id)arg3 ;
-(void)_gatherDataAndRefreshUI;
-(void)_adjustFooterHeight;
-(void)setSourceToAuthRecord:(NSDictionary *)arg1 ;
-(void)_fetchAuthorizationRecordsBySourceForCharacteristic:(id)arg1 ;
-(NSDictionary *)sourceToAuthRecord;
-(void)setSourceListDataSource:(HKSourceListDataSource *)arg1 ;
-(HKSourceListDataSource *)sourceListDataSource;
-(id)_sourceForIndexPath:(id)arg1 ;
-(long long)_profileSectionIdentifierForIndex:(long long)arg1 ;
-(void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 cell:(id)arg3 tableView:(id)arg4 fetchError:(id)arg5 ;
-(BOOL)_shouldDisplayNameInFooters;
-(id)initWithCoder:(id)arg1 ;
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(void)sourceListDataSourceDidUpdate:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

