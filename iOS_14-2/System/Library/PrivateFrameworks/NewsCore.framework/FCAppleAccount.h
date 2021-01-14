/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) long long supportedContentLanguage; 
@property (nonatomic,readonly) BOOL isContentStoreFrontSupported; 
@property (nonatomic,readonly) BOOL isSignedInStoreFrontSupported; 
@property (nonatomic,readonly) NSString * supportedContentStoreFrontID; 
@property (getter=isPrivateDataSyncingEnabled,nonatomic,readonly) BOOL privateDataSyncingEnabled; 
@property (getter=isUserSignedInToiCloud,nonatomic,readonly) BOOL userSignedInToiCloud; 
@property (nonatomic,readonly) NSString * endpointConnectionClientID; 
@property (nonatomic,readonly) ACAccount * activeiTunesAccount; 
@required
-(NSString *)supportedContentStoreFrontID;
-(void)addObserver:(id)arg1;
-(NSString *)DSID;
-(id)iCloudAccountDSID;
-(void)invalidateGSTokenCache;
-(BOOL)isPrivateDataSyncingEnabled;
-(void)loadStoreFrontWithCompletionHandler:(/*^block*/id)arg1;
-(NSString *)userStoreFrontID;
-(long long)supportedContentLanguage;
-(void)getGSTokenWithCompletionHandler:(/*^block*/id)arg1;
-(id)iTunesAccountName;
-(NSString *)primaryLanguageCode;
-(void)checkAllDevicesRunningMinimumiOSVersion:(SCD_Struct_FC23)arg1 macOSVersion:(SCD_Struct_FC23)arg2 orInactiveForTimeInterval:(double)arg3 completionHandler:(/*^block*/id)arg4;
-(id)currentStoreFrontID;
-(NSString *)contentStoreFrontID;
-(id)getGSToken;
-(void)checkAlliOSDevicesRunningMinimumOSVersion:(SCD_Struct_FC23)arg1 orInactiveForTimeInterval:(double)arg2 completionHandler:(/*^block*/id)arg3;
-(void)removeObserver:(id)arg1;
-(NSString *)endpointConnectionClientID;
-(BOOL)isContentStoreFrontSupported;
-(BOOL)isSignedInStoreFrontSupported;
-(BOOL)isUserSignedIntoiTunes;
-(BOOL)isUserSignedInToiCloud;
-(BOOL)isPrimaryAccountEmailAddress;
-(ACAccount *)activeiTunesAccount;
-(id)iTunesAccountDSID;

@end


@class NSString, ACAccount, ACAccountStore, NFPromise, NSHashTable, NSArray;

@interface FCAppleAccount : NSObject <FCAppleAccount> {

	BOOL _runningPPT;
	ACAccountStore* _accountStore;
	ACAccount* _primaryAccount;
	ACAccount* _iTunesAccount;
	NSString* _DSID;
	NSString* _userStoreFrontID;
	NSString* _contentStoreFrontID;
	NSString* _overrideContentStoreFrontID;
	NFPromise* _base64GSTokenPromise;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;                                                  //@synthesize accountStore=_accountStore - In the implementation block
@property (retain) ACAccount * primaryAccount;                                                                 //@synthesize primaryAccount=_primaryAccount - In the implementation block
@property (retain) ACAccount * iTunesAccount;                                                                  //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
@property (nonatomic,copy) NSString * DSID;                                                                    //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSString * userStoreFrontID;                                                        //@synthesize userStoreFrontID=_userStoreFrontID - In the implementation block
@property (nonatomic,copy) NSString * contentStoreFrontID;                                                     //@synthesize contentStoreFrontID=_contentStoreFrontID - In the implementation block
@property (nonatomic,readonly) NSArray * supportedLanguageCodes; 
@property (nonatomic,copy) NSString * overrideContentStoreFrontID;                                             //@synthesize overrideContentStoreFrontID=_overrideContentStoreFrontID - In the implementation block
@property (nonatomic,retain) NFPromise * base64GSTokenPromise;                                                 //@synthesize base64GSTokenPromise=_base64GSTokenPromise - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                                        //@synthesize observers=_observers - In the implementation block
@property (getter=isRunningPPT) BOOL runningPPT;                                                               //@synthesize runningPPT=_runningPPT - In the implementation block
@property (nonatomic,readonly) NSString * primaryLanguageCode; 
@property (nonatomic,readonly) long long supportedContentLanguage; 
@property (nonatomic,readonly) BOOL isContentStoreFrontSupported; 
@property (nonatomic,readonly) BOOL isSignedInStoreFrontSupported; 
@property (nonatomic,readonly) NSString * supportedContentStoreFrontID; 
@property (getter=isPrivateDataSyncingEnabled,nonatomic,readonly) BOOL privateDataSyncingEnabled; 
@property (getter=isUserSignedInToiCloud,nonatomic,readonly) BOOL userSignedInToiCloud; 
@property (nonatomic,readonly) NSString * endpointConnectionClientID; 
@property (nonatomic,readonly) ACAccount * activeiTunesAccount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAccount;
+(void)enableStoreFrontLocking;
-(void)setContentStoreFrontID:(NSString *)arg1 ;
-(NSString *)supportedContentStoreFrontID;
-(void)addObserver:(id)arg1 ;
-(NSString *)DSID;
-(NSHashTable *)observers;
-(NSArray *)supportedLanguageCodes;
-(id)iCloudAccountDSID;
-(id)init;
-(ACAccount *)iTunesAccount;
-(void)invalidateGSTokenCache;
-(void)reloadiTunesAccount;
-(BOOL)isPrivateDataSyncingEnabled;
-(void)loadStoreFrontWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)userStoreFrontID;
-(long long)supportedContentLanguage;
-(void)_reloadAccountsFromAccountStore;
-(ACAccountStore *)accountStore;
-(void)getGSTokenWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)t_stopOverridingContentStoreFrontID;
-(NSString *)overrideContentStoreFrontID;
-(void)_setStoreFrontDependentPropertiesWithStoreFrontLockingEnabled:(BOOL)arg1 ;
-(id)iTunesAccountName;
-(BOOL)isRunningPPT;
-(NSString *)primaryLanguageCode;
-(void)checkAllDevicesRunningMinimumiOSVersion:(SCD_Struct_FC23)arg1 macOSVersion:(SCD_Struct_FC23)arg2 orInactiveForTimeInterval:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)currentStoreFrontID;
-(void)setDSID:(NSString *)arg1 ;
-(void)setRunningPPT:(BOOL)arg1 ;
-(NSString *)contentStoreFrontID;
-(void)t_startOverridingContentStoreFrontID:(id)arg1 ;
-(id)getGSToken;
-(ACAccount *)primaryAccount;
-(void)setUserStoreFrontID:(NSString *)arg1 ;
-(void)checkAlliOSDevicesRunningMinimumOSVersion:(SCD_Struct_FC23)arg1 orInactiveForTimeInterval:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)notifyObserversOfAccountChange;
-(void)removeObserver:(id)arg1 ;
-(NFPromise *)base64GSTokenPromise;
-(void)_accountStoreDidChange;
-(id)getNewGSTokenPromise;
-(void)setOverrideContentStoreFrontID:(NSString *)arg1 ;
-(void)setBase64GSTokenPromise:(NFPromise *)arg1 ;
-(NSString *)endpointConnectionClientID;
-(BOOL)isContentStoreFrontSupported;
-(void)setPrimaryAccount:(ACAccount *)arg1 ;
-(BOOL)isSignedInStoreFrontSupported;
-(void)setITunesAccount:(ACAccount *)arg1 ;
-(BOOL)isUserSignedIntoiTunes;
-(BOOL)isUserSignedInToiCloud;
-(BOOL)isPrimaryAccountEmailAddress;
-(ACAccount *)activeiTunesAccount;
-(id)iTunesAccountDSID;
-(void)_handleAccountChangeWithOldPrimaryAccount:(id)arg1 oldiTunesAccount:(id)arg2 ;
@end

