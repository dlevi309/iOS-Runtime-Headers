/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@protocol OS_dispatch_queue;
@class IDSCKDatabase, NSObject;

@interface IDSCloudKitKeyElectionStore : NSObject {

	IDSCKDatabase* _database;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) IDSCKDatabase * database;                        //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(BOOL)isItemNotFoundError:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setDatabase:(IDSCKDatabase *)arg1 ;
-(IDSCKDatabase *)database;
-(id)_recordID;
-(id)initWithDatabase:(id)arg1 queue:(id)arg2 ;
-(id)_itemFromRecord:(id)arg1 error:(id*)arg2 ;
-(id)_recordFromItem:(id)arg1 ;
-(void)fetchAccountIdentityItemWithCompletion:(/*^block*/id)arg1 ;
-(void)removeAccountIdentityItemWithCompletion:(/*^block*/id)arg1 ;
-(void)storeAccountIdentityItem:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

