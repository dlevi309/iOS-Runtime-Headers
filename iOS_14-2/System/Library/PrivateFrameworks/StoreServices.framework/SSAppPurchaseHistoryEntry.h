/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSSQLiteEntity.h>

@interface SSAppPurchaseHistoryEntry : SSSQLiteEntity
+(id)databaseTable;
+(id)predicateForAccountIdentifier:(id)arg1 ;
+(id)predicateForNotHidden;
+(id)supportsPlatformPredicate:(BOOL)arg1 ;
+(id)predicateForNotFirstParty;
+(id)predicateForHasMessagesExtension;
+(id)predicateForIs32BitOnly:(BOOL)arg1 ;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
@end

