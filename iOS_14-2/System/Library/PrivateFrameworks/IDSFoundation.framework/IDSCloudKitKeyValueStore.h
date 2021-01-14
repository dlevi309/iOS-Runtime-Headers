/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContainer:(IDSCKContainer *)arg1 ;
-(void)fetchDataForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setData:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchObjectForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(IDSCKContainer *)container;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithContainer:(id)arg1 queue:(id)arg2 ;
@end

