/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


@protocol CADPermissionValidator <NSObject>
@property (readonly) BOOL isFirstPartyCalendarApp; 
@property (readonly) BOOL isCalendarDaemon; 
@property (readonly) BOOL canModifySuggestedEventCalendar; 
@property (readonly) BOOL canMakeSpotlightChanges; 
@property (readonly) BOOL canModifyBirthdayCalendar; 
@property (readonly) BOOL canModifyCalendarDatabase; 
@property (readonly) BOOL testingAccessLevelGranted; 
@property (readonly) BOOL internalAccessLevelGranted; 
@property (readonly) BOOL storageManagementAccessGranted; 
@property (readonly) BOOL hasContactsUIEntitlement; 
@property (readonly) BOOL hasMigrationEntitlement; 
@property (readonly) BOOL hasSyncClientEntitlement; 
@property (readonly) BOOL hasCalendarToolEntitlement; 
@property (readonly) BOOL hasChangeIdTrackingOverrideEntitlement; 
@property (readonly) BOOL hasNotificationCountEntitlement; 
@property (readonly) BOOL hasManagedConfigurationBundleIDOverrideEntitlement; 
@property (readonly) BOOL shouldTrustClientEnforcedManagedConfigurationAccess; 
@required
-(BOOL)hasChangeIdTrackingOverrideEntitlement;
-(BOOL)hasContactsUIEntitlement;
-(BOOL)hasSyncClientEntitlement;
-(BOOL)canModifyCalendarDatabase;
-(BOOL)hasCalendarToolEntitlement;
-(BOOL)canModifyBirthdayCalendar;
-(BOOL)hasMigrationEntitlement;
-(BOOL)hasManagedConfigurationBundleIDOverrideEntitlement;
-(BOOL)canMakeSpotlightChanges;
-(BOOL)testingAccessLevelGranted;
-(BOOL)hasNotificationCountEntitlement;
-(BOOL)shouldTrustClientEnforcedManagedConfigurationAccess;
-(BOOL)storageManagementAccessGranted;
-(BOOL)isFirstPartyCalendarApp;
-(BOOL)isCalendarDaemon;
-(BOOL)internalAccessLevelGranted;
-(BOOL)canModifySuggestedEventCalendar;

@end

