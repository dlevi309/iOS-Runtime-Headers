/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_executeWithSelf:(id)arg1 block:(/*^block*/id)arg2 synchronously:(BOOL)arg3 ;
-(void)executeWithSelf:(id)arg1 asynchronously:(/*^block*/id)arg2 ;
-(void)executeWithSelf:(id)arg1 synchronously:(/*^block*/id)arg2 ;
@end

