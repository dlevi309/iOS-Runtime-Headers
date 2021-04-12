/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


@interface TSUKeychainUtils : NSObject
+(id)errorForStatus:(int)arg1 ;
+(BOOL)removeGenericItem:(id)arg1 error:(id*)arg2 ;
+(void)cryptoProcessData:(id)arg1 encrypt:(BOOL)arg2 localizedReason:(id)arg3 completionQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(id)mutableQueryForGenericItem:(id)arg1 returnData:(BOOL)arg2 ;
+(void)authenticateAndUpgradeKeychainResult:(id)arg1 localizedReason:(id)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)lookupGenericItem:(id)arg1 localizedReason:(id)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)defaultServiceForGenericItem:(id)arg1 ;
+(id)defaultDocumentPasswordDescriptionString;
+(BOOL)lookupGenericItem:(id)arg1 account:(id*)arg2 passphrase:(id*)arg3 options:(unsigned long long)arg4 error:(id*)arg5 ;
+(BOOL)shouldUseBiometry;
+(BOOL)setPassphrase:(id)arg1 forGenericItem:(id)arg2 service:(id)arg3 description:(id)arg4 label:(id)arg5 account:(id)arg6 options:(unsigned long long)arg7 error:(id*)arg8 ;
+(long long)biometryAvailability;
+(void)setPassphrase:(id)arg1 forGenericItem:(id)arg2 service:(id)arg3 description:(id)arg4 label:(id)arg5 account:(id)arg6 options:(unsigned long long)arg7 completionQueue:(id)arg8 completionHandler:(/*^block*/id)arg9 ;
+(void)cancelBiometryIfNeeded;
+(BOOL)lookupGenericItem:(id)arg1 passphrase:(id*)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
+(BOOL)isBiometryEnabledByDefault;
+(void)setBiometryEnabledByDefault:(BOOL)arg1 ;
@end

