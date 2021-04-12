/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/


@interface CDPAccount : NSObject
+(id)sharedInstance;
+(BOOL)isICDPEnabledForDSID:(id)arg1 checkWithServer:(BOOL)arg2 ;
+(BOOL)isICDPEnabledForDSID:(id)arg1 ;
-(id)sharedAccountStore;
-(id)authToken;
-(unsigned long long)primaryAccountSecurityLevel;
-(id)primaryAppleAccount;
-(id)contextForPrimaryAccount;
-(id)primaryAccountAltDSID;
-(id)primaryAccountDSID;
-(id)primaryAccountUsername;
-(id)escrowURL;
-(id)iCloudEnv;
-(id)primaryAccountStashedPRK;
@end

