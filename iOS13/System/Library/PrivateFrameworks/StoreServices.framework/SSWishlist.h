/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(long long)accountIdentifier;
-(id)initWithAccountIdentifier:(long long)arg1 ;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)deleteBackingStore;
-(NSNumber *)lastSyncTime;
-(void)setLastSyncTime:(NSNumber *)arg1 ;
@end

