/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDatabase:(IDSCKDatabase *)arg1 ;
-(id)_itemFromRecord:(id)arg1 error:(id*)arg2 ;
-(id)_recordFromItem:(id)arg1 ;
-(void)fetchAccountIdentityItemWithCompletion:(/*^block*/id)arg1 ;
-(void)removeAccountIdentityItemWithCompletion:(/*^block*/id)arg1 ;
-(void)storeAccountIdentityItem:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_recordID;
-(NSObject*<OS_dispatch_queue>)queue;
-(IDSCKDatabase *)database;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithDatabase:(id)arg1 queue:(id)arg2 ;
@end

