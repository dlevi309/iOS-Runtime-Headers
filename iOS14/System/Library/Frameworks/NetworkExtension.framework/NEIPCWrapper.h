/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol OS_dispatch_queue;
@class NSObject, NEIPC, NSUUID;

@interface NEIPCWrapper : NSObject {

	NSObject*<OS_dispatch_queue> _sendQueue;
	NSObject*<OS_dispatch_queue> _ipcQueue;
	NEIPC* _ipc;
	NSUUID* _identifier;

}

@property (readonly) NSObject*<OS_dispatch_queue> sendQueue;              //@synthesize sendQueue=_sendQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> ipcQueue;               //@synthesize ipcQueue=_ipcQueue - In the implementation block
@property (readonly) NEIPC * ipc;                                         //@synthesize ipc=_ipc - In the implementation block
@property (readonly) NSUUID * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
+(void)cancelSharedWrapperForSession:(void*)arg1 ;
+(id)sharedWrapperForSession:(void*)arg1 ;
-(NEIPC *)ipc;
-(NSObject*<OS_dispatch_queue>)ipcQueue;
-(NSObject*<OS_dispatch_queue>)sendQueue;
-(id)initWithSession:(void*)arg1 identifier:(id)arg2 ;
-(NSUUID *)identifier;
-(void)cancel;
@end

