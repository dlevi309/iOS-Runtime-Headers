/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>
#import <libobjc.A.dylib/STUsageDetailsViewModelCoordinator.h>

@protocol STPersistenceControllerProtocol;
@class STUsageDetailsViewModel, NSArray, NSString, NSNumber, NSFetchedResultsController, NSDate, NSTimer;

@interface STUsageDetailsViewModelCoordinator : NSObject <NSFetchedResultsControllerDelegate, STUsageDetailsViewModelCoordinator> {

	BOOL _refreshing;
	STUsageDetailsViewModel* _viewModel;
	NSArray* _devices;
	NSString* _selectedDeviceIdentifier;
	NSString* _organizationIdentifier;
	NSNumber* _userDSID;
	long long _usageContext;
	id<STPersistenceControllerProtocol> _persistenceController;
	NSFetchedResultsController* _usageBlocksFetchedResultsController;
	NSDate* _lastUsageDataRefreshTime;
	NSTimer* _usageDataRefreshTimer;
	unsigned long long _usageDataRefreshReferenceCount;

}

@property (nonatomic,copy) NSString * organizationIdentifier;                                               //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * userDSID;                                                             //@synthesize userDSID=_userDSID - In the implementation block
@property (nonatomic,copy) NSArray * devices;                                                               //@synthesize devices=_devices - In the implementation block
@property (readonly) long long usageContext;                                                                //@synthesize usageContext=_usageContext - In the implementation block
@property (nonatomic,retain) id<STPersistenceControllerProtocol> persistenceController;                     //@synthesize persistenceController=_persistenceController - In the implementation block
@property (nonatomic,retain) NSFetchedResultsController * usageBlocksFetchedResultsController;              //@synthesize usageBlocksFetchedResultsController=_usageBlocksFetchedResultsController - In the implementation block
@property (nonatomic,retain) NSDate * lastUsageDataRefreshTime;                                             //@synthesize lastUsageDataRefreshTime=_lastUsageDataRefreshTime - In the implementation block
@property (nonatomic,retain) NSTimer * usageDataRefreshTimer;                                               //@synthesize usageDataRefreshTimer=_usageDataRefreshTimer - In the implementation block
@property (assign,nonatomic) unsigned long long usageDataRefreshReferenceCount;                             //@synthesize usageDataRefreshReferenceCount=_usageDataRefreshReferenceCount - In the implementation block
@property (getter=isRefreshing) BOOL refreshing;                                                            //@synthesize refreshing=_refreshing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) STUsageDetailsViewModel * viewModel;                                         //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,copy) NSString * selectedDeviceIdentifier;                                             //@synthesize selectedDeviceIdentifier=_selectedDeviceIdentifier - In the implementation block
+(id)defaultDeviceIdentifierForChild:(id)arg1 ;
+(id)defaultUsageReportTypeForChild:(id)arg1 ;
+(id)defaultDeviceIdentifierForLocalUser;
+(id)defaultUsageReportTypeForLocalUser;
+(void)setDefaultUsageReportType:(id)arg1 childDSID:(id)arg2 ;
+(void)setDefaultUsageReportTypeForLocalUser:(id)arg1 ;
+(void)setDefaultDeviceIdentifier:(id)arg1 childDSID:(id)arg2 ;
+(void)setDefaultDeviceIdentifierForLocalUser:(id)arg1 ;
-(NSString *)organizationIdentifier;
-(void)controllerDidChangeContent:(id)arg1 ;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(void)setPersistenceController:(id<STPersistenceControllerProtocol>)arg1 ;
-(id<STPersistenceControllerProtocol>)persistenceController;
-(STUsageDetailsViewModel *)viewModel;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(NSNumber *)userDSID;
-(long long)usageContext;
-(BOOL)isRefreshing;
-(void)loadViewModelWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setRefreshing:(BOOL)arg1 ;
-(void)setUserDSID:(NSNumber *)arg1 ;
-(void)dealloc;
-(void)startRefreshingUsageData;
-(void)stopRefreshingUsageData;
-(void)refreshUsageData;
-(NSString *)selectedDeviceIdentifier;
-(void)setSelectedDeviceIdentifier:(NSString *)arg1 ;
-(id)initWithPersistenceController:(id)arg1 organizationIdentifier:(id)arg2 userDSID:(id)arg3 devices:(id)arg4 selectedDeviceIdentifier:(id)arg5 selectedUsageReportType:(id)arg6 usageContext:(long long)arg7 ;
-(NSTimer *)usageDataRefreshTimer;
-(unsigned long long)usageDataRefreshReferenceCount;
-(void)setUsageDataRefreshReferenceCount:(unsigned long long)arg1 ;
-(void)scheduleRefreshUsageData;
-(void)setUsageDataRefreshTimer:(NSTimer *)arg1 ;
-(NSDate *)lastUsageDataRefreshTime;
-(void)_refreshUsageDataAndReschedule;
-(void)setLastUsageDataRefreshTime:(NSDate *)arg1 ;
-(void)_refreshUsageDataWithCompletion:(/*^block*/id)arg1 ;
-(id)_usageBlocksWithUser:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(void)_loadAllHistoricalUsageWithUsageBlocks:(id)arg1 selectedItemDisplayName:(id)arg2 selectedDay:(unsigned long long)arg3 selectedWeek:(unsigned long long)arg4 hadUsageData:(BOOL)arg5 referenceDate:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)_loadTodayUsageWithUsageBlocks:(id)arg1 selectedItemDisplayName:(id)arg2 referenceDate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_loadLastWeekUsageWithUsageBlocks:(id)arg1 selectedItemDisplayName:(id)arg2 referenceDate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_usageItemsWithUsageBlocks:(id)arg1 lastUpdatedDate:(id*)arg2 firstPickupByWeekdayByWeek:(id)arg3 referenceDate:(id)arg4 usageContext:(long long)arg5 ;
-(void)_updateWeekAndDayReportsWithUsageItems:(id)arg1 weekStartDate:(id)arg2 lastUpdatedDate:(id)arg3 referenceDate:(id)arg4 selectedItemDisplayName:(id)arg5 isSelectedWeek:(BOOL)arg6 selectedDay:(unsigned long long)arg7 weekUsageReports:(id)arg8 dayUsageReports:(id)arg9 dayUsageReportByWeekdays:(id)arg10 firstPickupByWeekdayByWeek:(id)arg11 ;
-(NSFetchedResultsController *)usageBlocksFetchedResultsController;
-(void)setUsageBlocksFetchedResultsController:(NSFetchedResultsController *)arg1 ;
@end

