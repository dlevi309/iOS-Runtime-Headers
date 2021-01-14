/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDatabase:(IDSCKDatabase *)arg1 ;
-(void)q_groupFromRecord:(id)arg1 inContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveGroup:(id)arg1 inContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchGroupWithID:(id)arg1 inContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchGroupsWithStableGroupID:(id)arg1 inContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(IDSCKDatabase *)database;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithDatabase:(id)arg1 queue:(id)arg2 ;
@end

