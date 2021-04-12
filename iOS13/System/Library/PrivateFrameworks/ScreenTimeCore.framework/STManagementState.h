/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@class NSXPCConnection;

@interface STManagementState : NSObject {

	BOOL _cachedShouldRequestMoreTime;
	BOOL _cachedIsRestrictionsPasscodeSet;
	BOOL _contactsEditable;
	NSXPCConnection* _connection;

}

@property (assign) BOOL cachedShouldRequestMoreTime;                        //@synthesize cachedShouldRequestMoreTime=_cachedShouldRequestMoreTime - In the implementation block
@property (assign) BOOL cachedIsRestrictionsPasscodeSet;                    //@synthesize cachedIsRestrictionsPasscodeSet=_cachedIsRestrictionsPasscodeSet - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                  //@synthesize connection=_connection - In the implementation block
@property (readonly) BOOL contactsEditable;                                 //@synthesize contactsEditable=_contactsEditable - In the implementation block
@property (readonly) BOOL needsToSetRestrictionsPasscode; 
@property (nonatomic,readonly) BOOL isRestrictionsPasscodeSet; 
@property (nonatomic,readonly) BOOL shouldRequestMoreTime; 
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)screenTimeSyncStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)screenTimeStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)setScreenTimeEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(id)primaryiCloudCardDAVAccountIdentifierWithError:(id*)arg1 ;
-(BOOL)shouldRequestMoreTime;
-(BOOL)isRestrictionsPasscodeSet;
-(BOOL)needsToSetRestrictionsPasscode;
-(id)shouldAllowOneMoreMinuteForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)shouldAllowOneMoreMinuteForWebsiteURL:(id)arg1 error:(id*)arg2 ;
-(id)shouldAllowOneMoreMinuteForCategoryIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)contactsEditable;
-(void)isRestrictionsPasscodeSet:(/*^block*/id)arg1 ;
-(BOOL)permitWebFilterURL:(id)arg1 pageTitle:(id)arg2 error:(id*)arg3 ;
-(id)communicationPoliciesWithError:(id*)arg1 ;
-(void)communicationPoliciesWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)cachedShouldRequestMoreTime;
-(void)setCachedShouldRequestMoreTime:(BOOL)arg1 ;
-(BOOL)cachedIsRestrictionsPasscodeSet;
-(void)setCachedIsRestrictionsPasscodeSet:(BOOL)arg1 ;
-(void)setScreenTimeEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setScreenTimeSyncingEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)communicationPoliciesForDSID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)contactManagementStateForDSID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)shouldRequestMoreTime:(/*^block*/id)arg1 ;
-(BOOL)clearRestrictionsPasscodeWithError:(id*)arg1 ;
-(BOOL)enableScreenTimeForDSID:(id)arg1 error:(id*)arg2 ;
-(void)setManageContactsEnabled:(BOOL)arg1 forDSID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestToManageContactsForDSID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)performMigrationFromMCXSettings:(id)arg1 error:(id*)arg2 ;
-(void)isExplicitContentRestricted:(/*^block*/id)arg1 ;
@end

