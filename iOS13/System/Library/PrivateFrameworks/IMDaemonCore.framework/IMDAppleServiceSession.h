/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMDServiceSession.h>

@class NSString, IDSAccount, NSArray;

@interface IMDAppleServiceSession : IMDServiceSession {

	NSString* _serviceName;
	NSString* _GUID;

}

@property (nonatomic,retain,readonly) IDSAccount * idsAccount; 
@property (nonatomic,retain,readonly) NSArray * aliases; 
@property (nonatomic,retain,readonly) NSArray * vettedAliases; 
@property (nonatomic,retain,readonly) NSString * callerURI; 
@property (nonatomic,readonly) NSArray * registeredURIs; 
@property (getter=UID,nonatomic,retain,readonly) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
+(id)idsAccounts;
-(void)dealloc;
-(NSString *)GUID;
-(NSArray *)vettedAliases;
-(void)authenticateAccount:(id)arg1 ;
-(void)registerAccount:(id)arg1 ;
-(void)unregisterAccount:(id)arg1 ;
-(NSArray *)aliases;
-(NSArray *)registeredURIs;
-(id)_aliases;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 account:(id)arg3 ;
-(void)addAliases:(id)arg1 account:(id)arg2 ;
-(void)removeAliases:(id)arg1 account:(id)arg2 ;
-(void)unvalidateAliases:(id)arg1 account:(id)arg2 ;
-(void)validateAliases:(id)arg1 account:(id)arg2 ;
-(long long)validationStatusForAlias:(id)arg1 ;
-(id)initWithAccount:(id)arg1 service:(id)arg2 ;
-(void)sessionDidBecomeActive;
-(void)sessionWillBecomeInactiveWithAccount:(id)arg1 ;
-(IDSAccount *)idsAccount;
-(void)logoutServiceSessionWithAccount:(id)arg1 ;
-(void)passwordUpdatedWithAccount:(id)arg1 ;
-(void)validateProfileWithAccount:(id)arg1 ;
-(void)loginServiceSessionWithAccount:(id)arg1 ;
-(void)refreshRegistration;
-(void)_updateAccountStatusToUnregistered:(BOOL)arg1 withAccount:(id)arg2 ;
-(id)_aliasesForIDSAccount:(id)arg1 ;
-(BOOL)_isDeviceRegisteredForAccount:(id)arg1 ;
-(long long)validationStatusForAlias:(id)arg1 onAccount:(id)arg2 ;
-(void)resetCallerIDForIDSAccount:(id)arg1 ;
-(id)_aliasStringsForIDSAccount:(id)arg1 ;
-(long long)_validationStatusForAlias:(id)arg1 onAccount:(id)arg2 ;
-(id)callerURIForIDSAccount:(id)arg1 ;
-(id)idsAccountForURI:(id)arg1 IDSServiceName:(id)arg2 ;
-(id)imdAccountForIDSAccount:(id)arg1 ;
-(BOOL)_isDeviceRegistered;
-(void)activeDevicesUpdated;
-(void)reregister;
-(void)reIdentify;
-(NSString *)callerURI;
-(id)idsAccountForFromURI:(id)arg1 toURI:(id)arg2 ;
@end

