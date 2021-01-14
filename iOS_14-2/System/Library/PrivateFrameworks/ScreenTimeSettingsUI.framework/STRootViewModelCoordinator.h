/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <libobjc.A.dylib/STGroupFetchedResultsControllerDelegate.h>
#import <libobjc.A.dylib/STRootViewModelCoordinator.h>
@class STRootViewModel;


@protocol STRootViewModelCoordinator <NSObject>
@property (nonatomic,readonly) STRootViewModel * viewModel; 
@property (readonly) NSObject*<STContentPrivacyViewModelCoordinator> contentPrivacyCoordinator; 
@property (readonly) NSObject*<STUsageDetailsViewModelCoordinator> usageDetailsCoordinator; 
@property (readonly) NSObject*<STTimeAllowancesViewModelCoordinator> timeAllowancesCoordinator; 
@property (assign,nonatomic) BOOL hasShownMiniBuddy; 
@property (assign,nonatomic) BOOL hasAlreadyEnteredPINForSession; 
@property (getter=isPasscodeEnabled,nonatomic,readonly) BOOL passcodeEnabled; 
@required
-(void)setShareWebUsageEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setHasAlreadyEnteredPINForSession:(BOOL)arg1;
-(void)setPIN:(id)arg1 recoveryAltDSID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)coordinatorForChild:(id)arg1 deviceIdentifier:(id)arg2 usageReportType:(id)arg3;
-(void)enableScreenTimeWithPIN:(id)arg1 recoveryAltDSID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(STRootViewModel *)viewModel;
-(NSObject*<STUsageDetailsViewModelCoordinator>)usageDetailsCoordinator;
-(BOOL)isPasscodeEnabled;
-(void)setPIN:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setHasShownMiniBuddy:(BOOL)arg1;
-(BOOL)validatePIN:(id)arg1;
-(NSObject*<STContentPrivacyViewModelCoordinator>)contentPrivacyCoordinator;
-(BOOL)hasAlreadyEnteredPINForSession;
-(void)setScreenTimeEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setScreenTimeSyncingEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(NSObject*<STTimeAllowancesViewModelCoordinator>)timeAllowancesCoordinator;
-(BOOL)hasShownMiniBuddy;

@end


@protocol STUsageDetailsViewModelCoordinator, STTimeAllowancesViewModelCoordinator, STContentPrivacyViewModelCoordinator;
@class STRootViewModel, NSObject, STAdminPersistenceController, STGroupFetchedResultsController, NSMutableDictionary, NSNumber, NSString;

@interface STRootViewModelCoordinator : NSObject <STGroupFetchedResultsControllerDelegate, STRootViewModelCoordinator> {

	BOOL _hasAlreadyEnteredPINForSession;
	BOOL _isLocalUser;
	NSObject*<STUsageDetailsViewModelCoordinator> _usageDetailsCoordinator;
	NSObject*<STTimeAllowancesViewModelCoordinator> _timeAllowancesCoordinator;
	NSObject*<STContentPrivacyViewModelCoordinator> _contentPrivacyCoordinator;
	STAdminPersistenceController* _persistenceController;
	STRootViewModel* _viewModel;
	STGroupFetchedResultsController* _fetchedResultsController;
	NSMutableDictionary* _coordinatorsByChildDSID;
	NSNumber* _userDSID;
	NSString* _deviceIdentifier;
	NSNumber* _usageReportType;
	long long _usageContext;
	NSString* _userName;

}

@property (readonly) STAdminPersistenceController * persistenceController;                                   //@synthesize persistenceController=_persistenceController - In the implementation block
@property (nonatomic,retain) STRootViewModel * viewModel;                                                    //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) STGroupFetchedResultsController * fetchedResultsController;                     //@synthesize fetchedResultsController=_fetchedResultsController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * coordinatorsByChildDSID;                                  //@synthesize coordinatorsByChildDSID=_coordinatorsByChildDSID - In the implementation block
@property (nonatomic,copy) NSNumber * userDSID;                                                              //@synthesize userDSID=_userDSID - In the implementation block
@property (copy,readonly) NSString * deviceIdentifier;                                                       //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (copy,readonly) NSNumber * usageReportType;                                                        //@synthesize usageReportType=_usageReportType - In the implementation block
@property (readonly) long long usageContext;                                                                 //@synthesize usageContext=_usageContext - In the implementation block
@property (nonatomic,copy) NSString * userName;                                                              //@synthesize userName=_userName - In the implementation block
@property (assign,nonatomic) BOOL isLocalUser;                                                               //@synthesize isLocalUser=_isLocalUser - In the implementation block
@property (assign,nonatomic) BOOL hasAlreadyEnteredPINForSession;                                            //@synthesize hasAlreadyEnteredPINForSession=_hasAlreadyEnteredPINForSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSObject*<STContentPrivacyViewModelCoordinator> contentPrivacyCoordinator;              //@synthesize contentPrivacyCoordinator=_contentPrivacyCoordinator - In the implementation block
@property (readonly) NSObject*<STUsageDetailsViewModelCoordinator> usageDetailsCoordinator;                  //@synthesize usageDetailsCoordinator=_usageDetailsCoordinator - In the implementation block
@property (readonly) NSObject*<STTimeAllowancesViewModelCoordinator> timeAllowancesCoordinator;              //@synthesize timeAllowancesCoordinator=_timeAllowancesCoordinator - In the implementation block
@property (assign,nonatomic) BOOL hasShownMiniBuddy; 
@property (getter=isPasscodeEnabled,nonatomic,readonly) BOOL passcodeEnabled; 
+(id)loadViewModelFromManagedObjectContext:(id)arg1 isLocalUser:(BOOL)arg2 userDSID:(id)arg3 error:(id*)arg4 ;
+(id)keyPathsForValuesAffectingPasscodeEnabled;
+(id)keyPathsForValuesAffectingUsageDetailsCoordinator;
-(NSString *)deviceIdentifier;
-(id)organizationIdentifierForManagement;
-(void)setShareWebUsageEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setHasAlreadyEnteredPINForSession:(BOOL)arg1 ;
-(id)init;
-(void)_setPIN:(id)arg1 recoveryAltDSID:(id)arg2 shouldSetRecoveryAppleID:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setPIN:(id)arg1 recoveryAltDSID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)coordinatorForChild:(id)arg1 deviceIdentifier:(id)arg2 usageReportType:(id)arg3 ;
-(NSMutableDictionary *)coordinatorsByChildDSID;
-(id)initWithUserDSID:(id)arg1 deviceIdentifier:(id)arg2 usageReportType:(id)arg3 usageContext:(long long)arg4 ;
-(void)enableScreenTimeWithPIN:(id)arg1 recoveryAltDSID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)userName;
-(STAdminPersistenceController *)persistenceController;
-(void)setIsLocalUser:(BOOL)arg1 ;
-(void)saveViewModel:(id)arg1 ;
-(STRootViewModel *)viewModel;
-(NSObject*<STUsageDetailsViewModelCoordinator>)usageDetailsCoordinator;
-(id)organizationIdentifierForUsage;
-(void)setUserName:(NSString *)arg1 ;
-(BOOL)isPasscodeEnabled;
-(STGroupFetchedResultsController *)fetchedResultsController;
-(void)setViewModel:(STRootViewModel *)arg1 ;
-(void)setPIN:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSNumber *)userDSID;
-(void)setHasShownMiniBuddy:(BOOL)arg1 ;
-(BOOL)validatePIN:(id)arg1 ;
-(void)_passcodeSessionHasEnded:(id)arg1 ;
-(NSObject*<STContentPrivacyViewModelCoordinator>)contentPrivacyCoordinator;
-(void)setCoordinatorsByChildDSID:(NSMutableDictionary *)arg1 ;
-(void)groupResultsControllerDidChangeContents:(id)arg1 ;
-(void)_registerForPersistentStoreNotifications;
-(BOOL)hasAlreadyEnteredPINForSession;
-(long long)usageContext;
-(void)setFetchedResultsController:(STGroupFetchedResultsController *)arg1 ;
-(void)loadViewModelWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setScreenTimeEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setScreenTimeSyncingEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<STTimeAllowancesViewModelCoordinator>)timeAllowancesCoordinator;
-(void)loadViewModelRightNow;
-(BOOL)hasShownMiniBuddy;
-(void)_registerForWillResignActiveNotifications;
-(void)setUserDSID:(NSNumber *)arg1 ;
-(NSNumber *)usageReportType;
-(BOOL)isLocalUser;
@end

