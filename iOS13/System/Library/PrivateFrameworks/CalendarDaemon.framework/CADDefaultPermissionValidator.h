/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <libobjc.A.dylib/CADPermissionValidator.h>

@class ClientConnection, NSString;

@interface CADDefaultPermissionValidator : NSObject <CADPermissionValidator> {

	ClientConnection* _connection;

}

@property (nonatomic,__weak,readonly) ClientConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL canModifySuggestedEventCalendar; 
@property (readonly) BOOL canMakeSpotlightChanges; 
@property (readonly) BOOL canModifyBirthdayCalendar; 
@property (readonly) BOOL canModifyCalendarDatabase; 
@property (readonly) BOOL testingAccessLevelGranted; 
@property (readonly) BOOL internalAccessLevelGranted; 
@property (readonly) BOOL hasContactsUIEntitlement; 
@property (readonly) BOOL hasMigrationEntitlement; 
@property (readonly) BOOL hasSyncClientEntitlement; 
@property (readonly) BOOL hasCalendarToolEntitlement; 
@property (readonly) BOOL hasChangeIdTrackingOverrideEntitlement; 
@property (readonly) BOOL hasManagedConfigurationBundleIDOverrideEntitlement; 
@property (readonly) BOOL shouldTrustClientEnforcedManagedConfigurationAccess; 
@property (readonly) BOOL hasNotificationCountEntitlement; 
-(ClientConnection *)connection;
-(BOOL)canModifySuggestedEventCalendar;
-(BOOL)canModifyCalendarDatabase;
-(id)initWithClientConnection:(id)arg1 ;
-(BOOL)testingAccessLevelGranted;
-(BOOL)hasChangeIdTrackingOverrideEntitlement;
-(BOOL)hasManagedConfigurationBundleIDOverrideEntitlement;
-(BOOL)hasMigrationEntitlement;
-(BOOL)hasSyncClientEntitlement;
-(BOOL)hasCalendarToolEntitlement;
-(BOOL)hasNotificationCountEntitlement;
-(BOOL)shouldTrustClientEnforcedManagedConfigurationAccess;
-(BOOL)hasContactsUIEntitlement;
-(BOOL)canMakeSpotlightChanges;
-(BOOL)canModifyBirthdayCalendar;
-(BOOL)internalAccessLevelGranted;
-(BOOL)_valueForBooleanEntitlement:(id)arg1 defaultValue:(BOOL)arg2 ;
@end
