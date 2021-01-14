/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/


@protocol OS_xpc_object;
@class NSObject, RBSXPCCoder, RBSXPCMessageReply, NSError;

@interface RBSXPCMessage : NSObject {

	NSObject*<OS_xpc_object> _xpc_message;
	RBSXPCCoder* _payload;
	SEL _method;

}

@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) SEL method;                              //@synthesize method=_method - In the implementation block
@property (nonatomic,readonly) RBSXPCMessageReply * reply; 
@property (nonatomic,readonly) NSError * error; 
+(id)messageForXPCMessage:(id)arg1 ;
+(id)messageForMethod:(SEL)arg1 varguments:(id)arg2 ;
-(id)init;
-(id)decodeArgumentWithClass:(Class)arg1 atIndex:(unsigned long long)arg2 allowNil:(BOOL)arg3 error:(out id*)arg4 ;
-(SEL)method;
-(oneway void)sendToConnection:(id)arg1 replyQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)decodeArgumentCollection:(Class)arg1 withClass:(Class)arg2 atIndex:(unsigned long long)arg3 allowNil:(BOOL)arg4 error:(out id*)arg5 ;
-(oneway void)sendToConnection:(id)arg1 ;
-(NSError *)error;
-(oneway void)sendToConnection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)invokeOnConnection:(id)arg1 withReturnCollectionClass:(Class)arg2 entryClass:(Class)arg3 error:(out id*)arg4 ;
-(RBSXPCMessageReply *)reply;
-(id)sendToConnection:(id)arg1 error:(out id*)arg2 ;
-(BOOL)isEmpty;
-(id)invokeOnConnection:(id)arg1 withReturnClass:(Class)arg2 error:(out id*)arg3 ;
@end

