/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

@class NSString, CKAccountOverrideInfo;


@protocol CKDAccountInfoProvider <NSObject>
@property (nonatomic,readonly) NSString * accountIdentifier; 
@property (nonatomic,readonly) BOOL isAnonymousAccount; 
@property (nonatomic,readonly) BOOL isUnitTestingAccount; 
@property (nonatomic,readonly) BOOL accountWantsPushRegistration; 
@property (nonatomic,readonly) BOOL isCarryAccount; 
@property (nonatomic,readonly) BOOL isiCloudDevEnvironmentAccount; 
@property (nonatomic,readonly) NSString * serverPreferredPushEnvironment; 
@property (nonatomic,readonly) NSString * displayedHostname; 
@property (nonatomic,readonly) BOOL isFakeAccount; 
@property (nonatomic,readonly) CKAccountOverrideInfo * fakeAccountInfo; 
@required
-(id)dsid;
-(BOOL)isiCloudDevEnvironmentAccount;
-(BOOL)isAnonymousAccount;
-(NSString *)serverPreferredPushEnvironment;
-(BOOL)isCarryAccount;
-(void)renewiCloudAuthTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 accessProvider:(id)arg3 failedToken:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(id)cloudKitAuthTokenWithAccessProvider:(id)arg1 error:(id*)arg2;
-(NSString *)accountIdentifier;
-(BOOL)accountWantsPushRegistration;
-(NSString *)displayedHostname;
-(BOOL)isUnitTestingAccount;
-(id)iCloudAuthTokenWithAccessProvider:(id)arg1 error:(id*)arg2;
-(void)iCloudAuthTokenWithAccessProvider:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)cloudKitAuthTokenWithAccessProvider:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(CKAccountOverrideInfo *)fakeAccountInfo;
-(BOOL)isFakeAccount;
-(id)sharingURLHostname;
-(void)renewCloudKitAuthTokenWithReason:(id)arg1 shouldForce:(BOOL)arg2 accessProvider:(id)arg3 failedToken:(id)arg4 completionHandler:(/*^block*/id)arg5;

@end

