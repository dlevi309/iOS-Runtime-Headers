/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)aliases;
-(NSArray *)vettedAliases;
-(IDSAccount *)idsAccount;
-(void)loginServiceSessionWithAccount:(id)arg1 ;
-(id)initWithAccount:(id)arg1 service:(id)arg2 ;
-(void)sessionWillBecomeInactiveWithAccount:(id)arg1 ;
-(void)authenticateAccount:(id)arg1 ;
-(void)registerAccount:(id)arg1 ;
-(void)unregisterAccount:(id)arg1 ;
-(id)_aliases;
-(void)sessionDidBecomeActive;
-(long long)validationStatusForAlias:(id)arg1 ;
-(void)logoutServiceSessionWithAccount:(id)arg1 ;
-(NSString *)GUID;
-(NSArray *)registeredURIs;
-(void)dealloc;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 account:(id)arg3 ;
-(void)addAliases:(id)arg1 account:(id)arg2 ;
-(void)removeAliases:(id)arg1 account:(id)arg2 ;
-(void)unvalidateAliases:(id)arg1 account:(id)arg2 ;
-(void)validateAliases:(id)arg1 account:(id)arg2 ;
-(void)reregister;
-(BOOL)_isDeviceRegistered;
-(void)resetCallerIDForIDSAccount:(id)arg1 ;
-(NSString *)callerURI;
-(void)refreshRegistration;
-(BOOL)_isDeviceRegisteredForAccount:(id)arg1 ;
-(id)idsAccountForURI:(id)arg1 IDSServiceName:(id)arg2 ;
-(id)imdAccountForIDSAccount:(id)arg1 ;
-(id)idsAccountForFromURI:(id)arg1 toURI:(id)arg2 ;
-(id)callerURIForIDSAccount:(id)arg1 ;
-(void)passwordUpdatedWithAccount:(id)arg1 ;
-(void)validateProfileWithAccount:(id)arg1 ;
-(void)_updateAccountStatusToUnregistered:(BOOL)arg1 withAccount:(id)arg2 ;
-(id)_aliasesForIDSAccount:(id)arg1 ;
-(long long)validationStatusForAlias:(id)arg1 onAccount:(id)arg2 ;
-(id)_aliasStringsForIDSAccount:(id)arg1 ;
-(long long)_validationStatusForAlias:(id)arg1 onAccount:(id)arg2 ;
-(void)activeDevicesUpdated;
-(void)reIdentify;
@end
