/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSSQLiteDatabase;

@interface SSEventsTableBase : NSObject {

	SSSQLiteDatabase* _database;

}
+(id)databasePath;
-(id)init;
-(id)initWithDatabase:(id)arg1 ;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_setupDatabase;
@end

