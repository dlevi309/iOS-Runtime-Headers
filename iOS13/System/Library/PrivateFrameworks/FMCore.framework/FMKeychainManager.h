/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/


@interface FMKeychainManager : NSObject
+(id)sharedInstance;
-(int)_delete:(id)arg1 ;
-(id)allServices;
-(id)allRecords;
-(id)_accessibilityForDataProtectionClass:(long long)arg1 migratable:(BOOL)arg2 ;
-(int)_add:(id)arg1 ;
-(int)_updateWithQuery:(id)arg1 attributes:(id)arg2 ;
-(BOOL)setData:(id)arg1 forAccount:(id)arg2 service:(id)arg3 synchronizable:(long long)arg4 dataProtectionClass:(long long)arg5 migratable:(long long)arg6 ;
-(id)itemForAccount:(id)arg1 service:(id)arg2 error:(id*)arg3 ;
-(BOOL)setData:(id)arg1 forAccount:(id)arg2 service:(id)arg3 ;
-(id)_query:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteDataForAccount:(id)arg1 service:(id)arg2 ;
-(id)dataForAccount:(id)arg1 service:(id)arg2 ;
-(BOOL)setPassword:(id)arg1 forAccount:(id)arg2 service:(id)arg3 ;
-(BOOL)setPassword:(id)arg1 forAccount:(id)arg2 service:(id)arg3 synchronizable:(long long)arg4 dataProtectionClass:(long long)arg5 migratable:(long long)arg6 ;
-(id)passwordForAccount:(id)arg1 service:(id)arg2 ;
-(id)allAccountsForService:(id)arg1 ;
@end

