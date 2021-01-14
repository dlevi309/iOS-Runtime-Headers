/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/ExchangeSync
*/

#import <DataAccess/DAAccount.h>

@interface ESAccount : DAAccount
+(id)esAccountSubclassWithBackingAccountInfo:(id)arg1 ;
+(id)oneshotListOfAccountIDs;
+(void)reacquireClientRestrictions:(id)arg1 ;
+(id)_leafExchangeAccountTypes;
-(void)updateOofSettingsWithParams:(id)arg1 consumer:(id)arg2 ;
-(void)retrieveOofSettingsForConsumer:(id)arg1 ;
@end

