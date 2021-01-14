/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/SRAuthorizationCellDelegate.h>
#import <libobjc.A.dylib/SRSensorReaderDelegate.h>
#import <libobjc.A.dylib/SRSensorPrunerDelegate.h>
#import <libobjc.A.dylib/SRAuthorizationStoreDelegate.h>

@protocol OS_dispatch_group;
@class SRAuthorizationGroup, NSMutableSet, NSArray, NSSet, NSMutableArray, NSObject, NSString;

@interface SRResearchDataPerCategoryViewController : UITableViewController <SRAuthorizationCellDelegate, SRSensorReaderDelegate, SRSensorPrunerDelegate, SRAuthorizationStoreDelegate> {

	SRAuthorizationGroup* _authGroup;
	NSMutableSet* _authorizedBundleIds;
	NSArray* _appBundles;
	NSSet* _sensorIdentifiers;
	NSMutableArray* _readers;
	NSMutableArray* _pruners;
	double _start;
	double _end;
	NSObject*<OS_dispatch_group> _fetchGroup;
	NSMutableArray* _tombstones;
	long long _numberOfDays;
	/*^block*/id _cancelExportBlock;

}

@property (nonatomic,retain) NSMutableSet * authorizedBundleIds;                   //@synthesize authorizedBundleIds=_authorizedBundleIds - In the implementation block
@property (nonatomic,retain) NSArray * appBundles;                                 //@synthesize appBundles=_appBundles - In the implementation block
@property (nonatomic,retain) NSSet * sensorIdentifiers;                            //@synthesize sensorIdentifiers=_sensorIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * readers;                             //@synthesize readers=_readers - In the implementation block
@property (nonatomic,retain) NSMutableArray * pruners;                             //@synthesize pruners=_pruners - In the implementation block
@property (assign,nonatomic) double start;                                         //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) double end;                                           //@synthesize end=_end - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_group> fetchGroup;              //@synthesize fetchGroup=_fetchGroup - In the implementation block
@property (nonatomic,retain) NSMutableArray * tombstones;                          //@synthesize tombstones=_tombstones - In the implementation block
@property (assign,nonatomic) long long numberOfDays;                               //@synthesize numberOfDays=_numberOfDays - In the implementation block
@property (copy) id cancelExportBlock;                                             //@synthesize cancelExportBlock=_cancelExportBlock - In the implementation block
@property (nonatomic,retain) SRAuthorizationGroup * authGroup;                     //@synthesize authGroup=_authGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(long long)numberOfDays;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)end;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)start;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)cancelExport;
-(void)exportData;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setEnd:(double)arg1 ;
-(void)viewDidLoad;
-(void)setFetchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)fetchGroup;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(NSMutableArray *)tombstones;
-(void)setStart:(double)arg1 ;
-(NSMutableArray *)readers;
-(NSMutableArray *)pruners;
-(void)dealloc;
-(BOOL)sensorReader:(id)arg1 fetchingRequest:(id)arg2 didFetchResult:(id)arg3 ;
-(void)sensorReader:(id)arg1 didCompleteFetch:(id)arg2 ;
-(void)sensorReader:(id)arg1 fetchingRequest:(id)arg2 failedWithError:(id)arg3 ;
-(void)setValue:(BOOL)arg1 indexPath:(id)arg2 ;
-(void)setAuthGroup:(SRAuthorizationGroup *)arg1 ;
-(SRAuthorizationGroup *)authGroup;
-(void)setAuthorizedBundleIds:(NSMutableSet *)arg1 ;
-(void)setAppBundles:(NSArray *)arg1 ;
-(void)setNumberOfDays:(long long)arg1 ;
-(void)setSensorIdentifiers:(NSSet *)arg1 ;
-(NSSet *)sensorIdentifiers;
-(void)setTombstones:(NSMutableArray *)arg1 ;
-(void)setReaders:(NSMutableArray *)arg1 ;
-(void)setPruners:(NSMutableArray *)arg1 ;
-(void)populateDays;
-(void)setCancelExportBlock:(id)arg1 ;
-(NSArray *)appBundles;
-(id)bundleForRow:(unsigned long long)arg1 ;
-(NSMutableSet *)authorizedBundleIds;
-(id)prepareDayCell;
-(id)prepareDeleteCell;
-(id)prepareExportCell;
-(void)showActionSheet;
-(void)confirmAuthChangeForBundle:(id)arg1 value:(BOOL)arg2 ;
-(long long)daysFromDate:(id)arg1 toDate:(id)arg2 ;
-(void)deleteAllUnreleasedData;
-(void)presentDownloadPath:(id)arg1 sandboxExtensionToken:(id)arg2 ;
-(id)cancelExportBlock;
@end

