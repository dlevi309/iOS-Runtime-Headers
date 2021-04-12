/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingCore.framework/HearingCore
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface HCXPCClient : NSObject {

	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	unsigned long long _requestedUpdates;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> xpcQueue;               //@synthesize xpcQueue=_xpcQueue - In the implementation block
@property (assign,nonatomic) unsigned long long requestedUpdates;                 //@synthesize requestedUpdates=_requestedUpdates - In the implementation block
+(id)clientWithConnection:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(id)initWithConnection:(id)arg1 ;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_dispatch_queue>)xpcQueue;
-(void)setXpcQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setWantsUpdates:(BOOL)arg1 forIdentifier:(unsigned long long)arg2 ;
-(BOOL)sendMessage:(id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(unsigned long long)requestedUpdates;
-(void)setRequestedUpdates:(unsigned long long)arg1 ;
-(void)teardownConnection;
-(BOOL)wantsUpdatesForIdentifier:(unsigned long long)arg1 ;
@end

