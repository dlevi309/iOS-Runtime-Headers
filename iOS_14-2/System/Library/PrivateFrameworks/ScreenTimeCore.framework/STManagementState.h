/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)requestToManageContactsForDSID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)shouldAllowOneMoreMinuteForCategoryIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)isRestrictionsPasscodeSet;
-(void)communicationPoliciesWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldRequestMoreTime;
-(void)setCachedShouldRequestMoreTime:(BOOL)arg1 ;
-(void)shouldRequestMoreTime:(/*^block*/id)arg1 ;
-(id)communicationPoliciesWithError:(id*)arg1 ;
-(void)setManageContactsEnabled:(BOOL)arg1 forDSID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)shouldAllowOneMoreMinuteForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)contactManagementStateForDSID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)communicationPoliciesForDSID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)enableScreenTimeForDSID:(id)arg1 error:(id*)arg2 ;
-(NSXPCConnection *)connection;
-(BOOL)clearRestrictionsPasscodeWithError:(id*)arg1 ;
-(void)isRestrictionsPasscodeSet:(/*^block*/id)arg1 ;
-(BOOL)permitWebFilterURL:(id)arg1 pageTitle:(id)arg2 error:(id*)arg3 ;
-(BOOL)performMigrationFromMCXSettings:(id)arg1 error:(id*)arg2 ;
-(void)setCachedIsRestrictionsPasscodeSet:(BOOL)arg1 ;
-(BOOL)setScreenTimeEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(void)setScreenTimeEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)needsToSetRestrictionsPasscode;
-(BOOL)contactsEditable;
-(BOOL)cachedIsRestrictionsPasscodeSet;
-(void)setScreenTimeSyncingEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)screenTimeSyncStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)shouldAllowOneMoreMinuteForWebDomain:(id)arg1 error:(id*)arg2 ;
-(void)isExplicitContentRestricted:(/*^block*/id)arg1 ;
-(id)primaryiCloudCardDAVAccountIdentifierWithError:(id*)arg1 ;
-(void)dealloc;
-(void)screenTimeStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)cachedShouldRequestMoreTime;
@end

