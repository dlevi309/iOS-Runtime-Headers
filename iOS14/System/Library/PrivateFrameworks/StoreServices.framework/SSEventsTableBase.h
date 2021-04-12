/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSSQLiteDatabase;

@interface SSEventsTableBase : NSObject {

	SSSQLiteDatabase* _database;

}
+(id)databasePath;
-(id)init;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_setupDatabase;
-(id)initWithDatabase:(id)arg1 ;
@end

