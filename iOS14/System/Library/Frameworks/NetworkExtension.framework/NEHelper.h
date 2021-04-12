/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol OS_xpc_object, OS_dispatch_queue;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSObject, NSDictionary;

@interface NEHelper : NSObject {

	os_unfair_lock_s _lock;
	BOOL _isSynchronous;
	int _classID;
	/*^block*/id _incomingMessageHandler;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _additionalProperties;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;                       //@synthesize connection=_connection - In the implementation block
@property (retain,readonly) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) int classID;                                             //@synthesize classID=_classID - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * additionalProperties;              //@synthesize additionalProperties=_additionalProperties - In the implementation block
@property (copy) id incomingMessageHandler;                                             //@synthesize incomingMessageHandler=_incomingMessageHandler - In the implementation block
@property (assign,nonatomic) BOOL isSynchronous;                                        //@synthesize isSynchronous=_isSynchronous - In the implementation block
-(id)initWithDelegateClassID:(int)arg1 queue:(id)arg2 ;
-(void)sendRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(BOOL)isSynchronous;
-(void)setIsSynchronous:(BOOL)arg1 ;
-(int)classID;
-(NSObject*<OS_xpc_object>)connection;
-(id)initWithDelegateClassID:(int)arg1 queue:(id)arg2 additionalProperties:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setIncomingMessageHandler:(id)arg1 ;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSDictionary *)additionalProperties;
-(id)incomingMessageHandler;
-(void)dealloc;
-(id)getConnection;
@end

