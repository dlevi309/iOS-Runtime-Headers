/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSSQLiteDatabase, NSNumber;

@interface SSWishlist : NSObject {

	long long _accountIdentifier;
	SSSQLiteDatabase* _database;

}

@property (nonatomic,readonly) long long accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * lastSyncTime; 
+(BOOL)existsForAccountIdentifier:(long long)arg1 ;
-(long long)accountIdentifier;
-(BOOL)deleteBackingStore;
-(NSNumber *)lastSyncTime;
-(void)setLastSyncTime:(NSNumber *)arg1 ;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(id)initWithAccountIdentifier:(long long)arg1 ;
-(void)dealloc;
@end

