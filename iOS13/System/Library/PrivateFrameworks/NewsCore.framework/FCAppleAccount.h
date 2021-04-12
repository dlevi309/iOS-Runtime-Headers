/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCAppleAccount.h>
@class NSString, ACAccount;


@protocol FCAppleAccount <NSObject>
@property (nonatomic,readonly) NSString * DSID; 
@property (nonatomic,readonly) NSString * userStoreFrontID; 
@property (nonatomic,readonly) NSString * contentStoreFrontID; 
@property (nonatomic,readonly) NSString * primaryLanguageCode; 
@property (nonatomic,readonly) BOOL isContentStoreFrontSupported; 
@property (nonatomic,readonly) NSString * supportedContentStoreFrontID; 
@property (getter=isPrivateDataSyncingEnabled,nonatomic,readonly) BOOL privateDataSyncingEnabled; 
@property (getter=isUserSignedInToiCloud,nonatomic,readonly) BOOL userSignedInToiCloud; 
@property (nonatomic,readonly) NSString * endpointConnectionClientID; 
@property (nonatomic,readonly) ACAccount * activeiTunesAccount; 
@required
-(NSString *)DSID;
-(NSString *)primaryLanguageCode;
-(void)loadStoreFrontWithCompletionHandler:(/*^block*/id)arg1;
-(id)currentStoreFrontID;
-(id)iTunesAccountDSID;
-(NSString *)contentStoreFrontID;
-(BOOL)isContentStoreFrontSupported;
-(NSString *)supportedContentStoreFrontID;
-(BOOL)isPrivateDataSyncingEnabled;
-(void)checkAlliOSDevicesRunningMinimumOSVersion:(SCD_Struct_FC21)arg1 orInactiveForTimeInterval:(double)arg2 completionHandler:(/*^block*/id)arg3;
-(ACAccount *)activeiTunesAccount;
-(NSString *)endpointConnectionClientID;
-(BOOL)isUserSignedIntoiTunes;
-(void)checkAllDevicesRunningMinimumiOSVersion:(SCD_Struct_FC21)arg1 macOSVersion:(SCD_Struct_FC21)arg2 orInactiveForTimeInterval:(double)arg3 completionHandler:(/*^block*/id)arg4;
-(id)iCloudAccountDSID;
-(id)iTunesAccountName;
-(BOOL)isPrimaryAccountEmailAddress;
-(NSString *)userStoreFrontID;
-(BOOL)isUserSignedInToiCloud;

@end


@class NSString, ACAccount, ACAccountStore, NSArray;

@interface FCAppleAccount : NSObject <FCAppleAccount> {

	BOOL _runningPPT;
	ACAccountStore* _accountStore;
	ACAccount* _primaryAccount;
	ACAccount* _iTunesAccount;
	NSString* _DSID;
	NSString* _userStoreFrontID;
	NSString* _contentStoreFrontID;
	NSString* _overrideContentStoreFrontID;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;                                                  //@synthesize accountStore=_accountStore - In the implementation block
@property (retain) ACAccount * primaryAccount;                                                                 //@synthesize primaryAccount=_primaryAccount - In the implementation block
@property (retain) ACAccount * iTunesAccount;                                                                  //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
@property (nonatomic,copy) NSString * DSID;                                                                    //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSString * userStoreFrontID;                                                        //@synthesize userStoreFrontID=_userStoreFrontID - In the implementation block
@property (nonatomic,copy) NSString * contentStoreFrontID;                                                     //@synthesize contentStoreFrontID=_contentStoreFrontID - In the implementation block
@property (nonatomic,readonly) NSArray * supportedLanguageCodes; 
@property (nonatomic,copy) NSString * overrideContentStoreFrontID;                                             //@synthesize overrideContentStoreFrontID=_overrideContentStoreFrontID - In the implementation block
@property (getter=isRunningPPT) BOOL runningPPT;                                                               //@synthesize runningPPT=_runningPPT - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * primaryLanguageCode; 
@property (nonatomic,readonly) BOOL isContentStoreFrontSupported; 
@property (nonatomic,readonly) NSString * supportedContentStoreFrontID; 
@property (getter=isPrivateDataSyncingEnabled,nonatomic,readonly) BOOL privateDataSyncingEnabled; 
@property (getter=isUserSignedInToiCloud,nonatomic,readonly) BOOL userSignedInToiCloud; 
@property (nonatomic,readonly) NSString * endpointConnectionClientID; 
@property (nonatomic,readonly) ACAccount * activeiTunesAccount; 
+(id)sharedAccount;
+(void)enableStoreFrontLocking;
-(id)init;
-(ACAccountStore *)accountStore;
-(ACAccount *)iTunesAccount;
-(void)setITunesAccount:(ACAccount *)arg1 ;
-(void)setDSID:(NSString *)arg1 ;
-(ACAccount *)primaryAccount;
-(void)setPrimaryAccount:(ACAccount *)arg1 ;
-(NSString *)DSID;
-(void)setRunningPPT:(BOOL)arg1 ;
-(NSString *)primaryLanguageCode;
-(void)loadStoreFrontWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)currentStoreFrontID;
-(id)iTunesAccountDSID;
-(BOOL)isRunningPPT;
-(NSString *)contentStoreFrontID;
-(BOOL)isContentStoreFrontSupported;
-(NSString *)supportedContentStoreFrontID;
-(BOOL)isPrivateDataSyncingEnabled;
-(void)checkAlliOSDevicesRunningMinimumOSVersion:(SCD_Struct_FC21)arg1 orInactiveForTimeInterval:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(ACAccount *)activeiTunesAccount;
-(NSString *)endpointConnectionClientID;
-(BOOL)isUserSignedIntoiTunes;
-(void)_reloadAccountsFromAccountStore;
-(void)_setStoreFrontDependentPropertiesWithStoreFrontLockingEnabled:(BOOL)arg1 ;
-(void)_accountStoreDidChange;
-(NSString *)overrideContentStoreFrontID;
-(NSArray *)supportedLanguageCodes;
-(void)checkAllDevicesRunningMinimumiOSVersion:(SCD_Struct_FC21)arg1 macOSVersion:(SCD_Struct_FC21)arg2 orInactiveForTimeInterval:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)iCloudAccountDSID;
-(void)setOverrideContentStoreFrontID:(NSString *)arg1 ;
-(id)iTunesAccountName;
-(BOOL)isPrimaryAccountEmailAddress;
-(NSString *)userStoreFrontID;
-(BOOL)isUserSignedInToiCloud;
-(void)reloadiTunesAccount;
-(void)t_startOverridingContentStoreFrontID:(id)arg1 ;
-(void)t_stopOverridingContentStoreFrontID;
-(void)setUserStoreFrontID:(NSString *)arg1 ;
-(void)setContentStoreFrontID:(NSString *)arg1 ;
@end

