/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface OITSUKeychainUtils : NSObject
+(BOOL)lookupGenericItem:(id)arg1 account:(id*)arg2 passphrase:(id*)arg3 policy:(long long)arg4 error:(id*)arg5 ;
+(BOOL)removeGenericItem:(id)arg1 error:(id*)arg2 ;
+(BOOL)shouldUseTouchID;
+(void)cryptoProcessData:(id)arg1 encrypt:(BOOL)arg2 localizedReason:(id)arg3 completionQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(id)errorForStatus:(int)arg1 ;
+(BOOL)setPassphrase:(id)arg1 forGenericItem:(id)arg2 service:(id)arg3 description:(id)arg4 label:(id)arg5 account:(id)arg6 policy:(long long)arg7 error:(id*)arg8 ;
+(id)mutableQueryForGenericItem:(id)arg1 returnData:(BOOL)arg2 ;
+(void)authenticateAndUpgradeKeychainResult:(id)arg1 localizedReason:(id)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(long long)touchIDAvailability;
+(void)setPassphrase:(id)arg1 forGenericItem:(id)arg2 service:(id)arg3 description:(id)arg4 label:(id)arg5 account:(id)arg6 policy:(long long)arg7 completionQueue:(id)arg8 completionHandler:(/*^block*/id)arg9 ;
+(void)lookupGenericItem:(id)arg1 localizedReason:(id)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)cancelTouchIDIfNeeded;
+(BOOL)lookupGenericItem:(id)arg1 passphrase:(id*)arg2 policy:(long long)arg3 error:(id*)arg4 ;
+(id)defaultServiceForGenericItem:(id)arg1 ;
+(id)defaultDocumentPasswordDescriptionString;
@end

