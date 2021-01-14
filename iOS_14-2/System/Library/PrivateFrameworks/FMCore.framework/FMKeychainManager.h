/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/


@interface FMKeychainManager : NSObject
+(id)sharedInstance;
-(int)_add:(id)arg1 ;
-(id)allAccountsForService:(id)arg1 ;
-(int)_updateWithQuery:(id)arg1 attributes:(id)arg2 ;
-(BOOL)setPassword:(id)arg1 forAccount:(id)arg2 service:(id)arg3 synchronizable:(long long)arg4 dataProtectionClass:(long long)arg5 migratable:(long long)arg6 ;
-(id)_accessibilityForDataProtectionClass:(long long)arg1 migratable:(BOOL)arg2 ;
-(int)_delete:(id)arg1 ;
-(BOOL)setData:(id)arg1 forAccount:(id)arg2 service:(id)arg3 synchronizable:(long long)arg4 dataProtectionClass:(long long)arg5 migratable:(long long)arg6 ;
-(id)dataForAccount:(id)arg1 service:(id)arg2 ;
-(id)passwordForAccount:(id)arg1 service:(id)arg2 ;
-(BOOL)deleteDataForAccount:(id)arg1 service:(id)arg2 ;
-(id)itemForAccount:(id)arg1 service:(id)arg2 error:(id*)arg3 ;
-(id)_query:(id)arg1 error:(id*)arg2 ;
-(BOOL)setData:(id)arg1 forAccount:(id)arg2 service:(id)arg3 ;
-(BOOL)setPassword:(id)arg1 forAccount:(id)arg2 service:(id)arg3 ;
-(id)allRecords;
-(id)allServices;
@end

