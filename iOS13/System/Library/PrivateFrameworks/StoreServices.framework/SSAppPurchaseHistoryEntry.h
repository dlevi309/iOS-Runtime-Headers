/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSSQLiteEntity.h>

@interface SSAppPurchaseHistoryEntry : SSSQLiteEntity
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
+(id)predicateForAccountIdentifier:(id)arg1 ;
+(id)predicateForNotHidden;
+(id)supportsPlatformPredicate:(BOOL)arg1 ;
+(id)predicateForNotFirstParty;
+(id)predicateForHasMessagesExtension;
+(id)predicateForIs32BitOnly:(BOOL)arg1 ;
@end

