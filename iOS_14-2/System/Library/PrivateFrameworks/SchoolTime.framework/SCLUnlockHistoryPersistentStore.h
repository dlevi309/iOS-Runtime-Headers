/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/


@class NSURL, NSPersistentContainer, NSManagedObjectContext;

@interface SCLUnlockHistoryPersistentStore : NSObject {

	NSURL* _URL;
	NSPersistentContainer* _persistentContainer;
	NSManagedObjectContext* _storeContext;

}

@property (retain) NSManagedObjectContext * storeContext;                                //@synthesize storeContext=_storeContext - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSPersistentContainer * persistentContainer;              //@synthesize persistentContainer=_persistentContainer - In the implementation block
-(NSPersistentContainer *)persistentContainer;
-(BOOL)insertItem:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)dealloc;
-(NSManagedObjectContext *)storeContext;
-(void)setStoreContext:(NSManagedObjectContext *)arg1 ;
-(void)loadStore;
-(id)recentHistoryItems;
-(BOOL)deleteHistory:(id*)arg1 ;
-(BOOL)purgeOldItems;
-(id)recentItemsThresholdDate;
@end

