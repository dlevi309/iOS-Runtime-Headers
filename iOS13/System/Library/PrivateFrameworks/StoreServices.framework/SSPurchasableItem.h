/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSDictionary, NSString, SSSQLiteDatabase;

@interface SSPurchasableItem : NSObject {

	NSDictionary* _propertyValues;
	NSString* _tableName;
	SSSQLiteDatabase* _database;

}
+(id)databaseTable;
+(id)sortByDatePurchasedKey;
+(id)allPropertyKeys;
-(void)dealloc;
-(id)description;
-(BOOL)isHidden;
-(long long)pid;
-(long long)storeID;
-(id)propertyValues;
-(long long)accountUniqueIdentifier;
-(id)initWithPropertyValues:(id)arg1 ;
-(id)datePurchased;
@end

