/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSSQLiteDatabase;

@interface SSKeyValueStoreSession : NSObject {

	SSSQLiteDatabase* _database;

}

@property (nonatomic,readonly) SSSQLiteDatabase * database;              //@synthesize database=_database - In the implementation block
-(void)dealloc;
-(SSSQLiteDatabase *)database;
-(id)initWithDatabase:(id)arg1 ;
-(id)iTunesValueForKey:(id)arg1 usedDomain:(id*)arg2 ;
-(id)copyValueForDomain:(id)arg1 key:(id)arg2 ;
-(id)copyAccountDictionaryForDomain:(id)arg1 ;
-(id)copyDataForDomain:(id)arg1 key:(id)arg2 ;
-(id)existingEntityForDomain:(id)arg1 key:(id)arg2 ;
@end

