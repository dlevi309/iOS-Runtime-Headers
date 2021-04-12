/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/


@protocol OS_xpc_object;
@class NSObject, BSXPCCoder, RBSXPCMessageReply, NSError;

@interface RBSXPCMessage : NSObject {

	NSObject*<OS_xpc_object> _xpc_message;
	BSXPCCoder* _payload;
	SEL _method;

}

@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) SEL method;                              //@synthesize method=_method - In the implementation block
@property (nonatomic,readonly) RBSXPCMessageReply * reply; 
@property (nonatomic,readonly) NSError * error; 
+(id)messageForMethod:(SEL)arg1 varguments:(id)arg2 ;
+(id)messageForXPCMessage:(id)arg1 ;
+(id)messageWithEncoder:(/*^block*/id)arg1 ;
+(id)messageForMethod:(SEL)arg1 arguments:(id)arg2 ;
-(id)init;
-(BOOL)isEmpty;
-(NSError *)error;
-(SEL)method;
-(id)invokeOnConnection:(id)arg1 withReturnClass:(Class)arg2 error:(out id*)arg3 ;
-(id)invokeOnConnection:(id)arg1 withReturnCollectionClass:(Class)arg2 entryClass:(Class)arg3 error:(out id*)arg4 ;
-(id)sendToConnection:(id)arg1 error:(out id*)arg2 ;
-(RBSXPCMessageReply *)reply;
-(id)decodeArgumentWithClass:(Class)arg1 atIndex:(unsigned long long)arg2 allowNil:(BOOL)arg3 error:(out id*)arg4 ;
-(id)decodeArgumentCollection:(Class)arg1 withClass:(Class)arg2 atIndex:(unsigned long long)arg3 allowNil:(BOOL)arg4 error:(out id*)arg5 ;
-(id)_initWithMessage:(id)arg1 ;
-(oneway void)sendToConnection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)sendToConnection:(id)arg1 replyQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)sendToConnection:(id)arg1 ;
@end

