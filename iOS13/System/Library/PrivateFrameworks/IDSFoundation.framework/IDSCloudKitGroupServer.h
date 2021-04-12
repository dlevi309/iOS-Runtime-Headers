/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject, IDSCKDatabase;

@interface IDSCloudKitGroupServer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	IDSCKDatabase* _database;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) IDSCKDatabase * database;                        //@synthesize database=_database - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setDatabase:(IDSCKDatabase *)arg1 ;
-(IDSCKDatabase *)database;
-(id)initWithDatabase:(id)arg1 queue:(id)arg2 ;
-(void)q_groupFromRecord:(id)arg1 inContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveGroup:(id)arg1 inContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchGroupWithID:(id)arg1 inContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchGroupsWithStableGroupID:(id)arg1 inContext:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

