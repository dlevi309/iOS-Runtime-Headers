/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/


@interface CDPAccount : NSObject
+(id)sharedInstance;
+(BOOL)isICDPEnabledForDSID:(id)arg1 ;
+(BOOL)isICDPEnabledForDSID:(id)arg1 checkWithServer:(BOOL)arg2 ;
-(id)primaryAccountUsername;
-(id)authToken;
-(id)primaryAccountFirstName;
-(id)escrowURL;
-(unsigned long long)primaryAccountSecurityLevel;
-(id)sharedAccountStore;
-(id)primaryAccountDSID;
-(id)primaryAccountStashedPRK;
-(id)primaryAccountAltDSID;
-(id)contextForPrimaryAccount;
-(id)iCloudEnv;
-(id)primaryAppleAccount;
@end

