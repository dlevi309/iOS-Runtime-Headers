/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
*/

#import <libobjc.A.dylib/UMUserManagement.h>
#import <libobjc.A.dylib/UMUserSwitchManagement.h>
#import <libobjc.A.dylib/UMUserPersonaManagement.h>
#import <libobjc.A.dylib/UMUserPersonaAttributesList.h>
#import <libobjc.A.dylib/UMUserPersonaLoginSessionManagement.h>
#import <libobjc.A.dylib/UMUserSessionProvisioning.h>

@protocol UMUserListUpdateObserver, UMUserPersonaUpdateObserver;
@class UMUser, UMUserPersona, NSArray, NSString;

@interface UMUserManager : NSObject <UMUserManagement, UMUserSwitchManagement, UMUserPersonaManagement, UMUserPersonaAttributesList, UMUserPersonaLoginSessionManagement, UMUserSessionProvisioning> {

	NSArray* _allUsers;
	BOOL _switchIsOccurring;
	id<UMUserListUpdateObserver> _userListUpdateObserver;
	id<UMUserPersonaUpdateObserver> _userPersonaUpdateObserver;

}

@property (assign,nonatomic,__weak) id<UMUserListUpdateObserver> userListUpdateObserver;                    //@synthesize userListUpdateObserver=_userListUpdateObserver - In the implementation block
@property (assign,nonatomic) BOOL switchIsOccurring;                                                        //@synthesize switchIsOccurring=_switchIsOccurring - In the implementation block
@property (assign,nonatomic,__weak) id<UMUserPersonaUpdateObserver> userPersonaUpdateObserver;              //@synthesize userPersonaUpdateObserver=_userPersonaUpdateObserver - In the implementation block
@property (nonatomic,readonly) BOOL isMultiUser; 
@property (nonatomic,copy,readonly) UMUser * currentUser; 
@property (nonatomic,copy,readonly) UMUser * loginUser; 
@property (nonatomic,readonly) BOOL isLoginSession; 
@property (nonatomic,readonly) unsigned long long maxNumberOfUsers; 
@property (nonatomic,readonly) unsigned long long userQuotaSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) UMUserPersona * currentPersona; 
+(id)sharedManager;
-(void)suspendQuotasWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setMultiPersonaBundleIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)currentUserSwitchContext;
-(void)resumeQuotas;
-(void)deleteUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(UMUser *)loginUser;
-(id)init;
-(UMUser *)currentUser;
-(void)setBundlesIdentifiers:(id)arg1 forUniquePersonaWithIDString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchBundleIdentifierForType:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)switchIsOccurring;
-(BOOL)haveValidPersonaContextForIDString:(id)arg1 ;
-(void)registerPersonaListUpdateObserver:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)currentUserSwitchContextHasBeenUsed;
-(void)directSwitchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)canAccessUserProperties;
-(void)createUserPersona:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchBundleIdentifierForPersonaWithIDString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchAllPersonasWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchMultiPersonaBundleIdentifierWithcompletionHandler:(/*^block*/id)arg1 ;
-(void)deleteUserPersonaWithProfileInfo:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)registerPersonaListUpdateObserver:(id)arg1 withMachService:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)switchToLoginUserWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)maxNumberOfUsers;
-(void)deleteUserPersonaWithPersonaUniqueString:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setBundlesIdentifiers:(id)arg1 forPersonaWithPersonaUniqueString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)registerUserSwitchStakeHolder:(id)arg1 ;
-(void)createUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)loginUICheckInWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)listAllPersonaWithAttributes;
-(void)setBundlesIdentifiers:(id)arg1 forUniquePersonaType:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteUserPersonaWithType:(int)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)userListDidUpdate;
-(id<UMUserListUpdateObserver>)userListUpdateObserver;
-(void)setUserListUpdateObserver:(id<UMUserListUpdateObserver>)arg1 ;
-(BOOL)personaLogoutWithUserODuuid:(id)arg1 withUid:(unsigned)arg2 WithError:(id*)arg3 ;
-(void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2 ;
-(void)setUserPersonaUpdateObserver:(id<UMUserPersonaUpdateObserver>)arg1 ;
-(void)fetchAllPersonasForAllUsersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)disableUserPersonaWithProfileInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setSwitchIsOccurring:(BOOL)arg1 ;
-(BOOL)haveValidPersonaContextForPersonaUniqueString:(id)arg1 ;
-(BOOL)isMultiUser;
-(id)allUsers;
-(void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(id)arg3 ;
-(void)registerUserListUpdateObserver:(id)arg1 ;
-(void)switchToLoginUserWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)terminateSyncWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_allUsersDidChange;
-(void)logoutToLoginSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)disableUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)userInteractionIsEnabled;
-(void)registerCriticalUserSwitchStakeHolder:(id)arg1 ;
-(void)fetchPersonaWithType:(int)arg1 CompletionHandler:(/*^block*/id)arg2 ;
-(void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)resumeSync;
-(BOOL)userExists:(id)arg1 ;
-(BOOL)personaLoginWithUserODuuid:(id)arg1 withUid:(unsigned)arg2 WithError:(id*)arg3 ;
-(UMUserPersona *)currentPersona;
-(void)fetchPersonaWithPersonaUniqueString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteUserPersonaWithIDString:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchAsidMapOfAllUsersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)userQuotaSize;
-(void)fetchPersonaWithIDString:(id)arg1 CompletionHandler:(/*^block*/id)arg2 ;
-(id<UMUserPersonaUpdateObserver>)userPersonaUpdateObserver;
-(void)fetchBundleIdentifierForPersonaWithPersonaUniqueString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setupUMUserSessionProvisioning:(id)arg1 WithCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)isLoginSession;
@end

