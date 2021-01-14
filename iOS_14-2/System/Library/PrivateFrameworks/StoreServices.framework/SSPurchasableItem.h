/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)storeID;
-(long long)pid;
-(BOOL)isHidden;
-(id)initWithPropertyValues:(id)arg1 ;
-(id)datePurchased;
-(long long)accountUniqueIdentifier;
-(id)description;
-(id)propertyValues;
-(void)dealloc;
@end

