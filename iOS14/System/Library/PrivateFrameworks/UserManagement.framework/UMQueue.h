/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface UMQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)client;
+(id)server;
+(id)userList;
-(void)executeWithSelf:(id)arg1 synchronously:(/*^block*/id)arg2 ;
-(void)executeWithSelf:(id)arg1 asynchronously:(/*^block*/id)arg2 ;
-(void)_executeWithSelf:(id)arg1 block:(/*^block*/id)arg2 synchronously:(BOOL)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

