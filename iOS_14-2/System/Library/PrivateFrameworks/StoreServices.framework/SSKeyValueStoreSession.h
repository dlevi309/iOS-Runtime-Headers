/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSSQLiteDatabase;

@interface SSKeyValueStoreSession : NSObject {

	SSSQLiteDatabase* _database;

}

@property (nonatomic,readonly) SSSQLiteDatabase * database;              //@synthesize database=_database - In the implementation block
-(id)iTunesValueForKey:(id)arg1 usedDomain:(id*)arg2 ;
-(id)copyValueForDomain:(id)arg1 key:(id)arg2 ;
-(id)copyAccountDictionaryForDomain:(id)arg1 ;
-(id)copyDataForDomain:(id)arg1 key:(id)arg2 ;
-(id)existingEntityForDomain:(id)arg1 key:(id)arg2 ;
-(SSSQLiteDatabase *)database;
-(id)initWithDatabase:(id)arg1 ;
-(void)dealloc;
@end

