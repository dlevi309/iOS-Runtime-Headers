/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSUUID *)identifier;
-(void)cancel;
-(NEIPC *)ipc;
-(NSObject*<OS_dispatch_queue>)sendQueue;
-(NSObject*<OS_dispatch_queue>)ipcQueue;
-(id)initWithSession:(void*)arg1 identifier:(id)arg2 ;
@end

