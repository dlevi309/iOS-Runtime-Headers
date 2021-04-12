/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject, IDSCKContainer;

@interface IDSCloudKitKeyValueStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	IDSCKContainer* _container;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) IDSCKContainer * container;                      //@synthesize container=_container - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(IDSCKContainer *)container;
-(void)setContainer:(IDSCKContainer *)arg1 ;
-(id)initWithContainer:(id)arg1 queue:(id)arg2 ;
-(void)fetchDataForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setData:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchObjectForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

