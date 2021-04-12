/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BaseBoard/BSXPCCoder.h>
#import <libobjc.A.dylib/BSXPCServiceConnectionMessage.h>

@protocol BSXPCServiceConnectionMessage <BSXPCEncoding,BSXPCDecoding>
@required
-(BOOL)send;
-(BOOL)expectsReply;
-(id)createReply;
-(BOOL)sendSynchronously;

@end

#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue, BSServiceDispatchingQueue;
@class NSObject, NSString;

@interface BSXPCServiceConnectionMessage : BSXPCCoder <BSXPCServiceConnectionMessage, BSInvalidatable> {

	int _sendFlag;
	NSObject*<OS_dispatch_queue> _targetQueue;
	/*^block*/id _completion;
	id<BSServiceDispatchingQueue> _replyQueue;

}

@property (nonatomic,retain) id<BSServiceDispatchingQueue> replyQueue;              //@synthesize replyQueue=_replyQueue - In the implementation block
@property (nonatomic,copy) id completion;                                           //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSString * messageID; 
@property (assign,nonatomic) unsigned long long childIdentifier; 
@property (assign,nonatomic) BOOL childIdentifierIsRemotelyDefined; 
@property (nonatomic,retain) NSString * selectorName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithXPCConnection:(id)arg1 targetQueue:(id)arg2 ;
-(void)invalidate;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(BOOL)send;
-(id)initWithMessage:(id)arg1 ;
-(void)setReplyQueue:(id<BSServiceDispatchingQueue>)arg1 ;
-(NSString *)selectorName;
-(id<BSServiceDispatchingQueue>)replyQueue;
-(void)setChildIdentifier:(unsigned long long)arg1 ;
-(void)setChildIdentifierIsRemotelyDefined:(BOOL)arg1 ;
-(void)setSelectorName:(NSString *)arg1 ;
-(id)sendSynchronouslyWithError:(out id*)arg1 ;
-(BOOL)expectsReply;
-(id)createReply;
-(id)initWithXPCConnection:(id)arg1 targetQueue:(id)arg2 ;
-(BOOL)_sendSynchronously:(BOOL)arg1 ;
-(BOOL)sendSynchronously;
-(NSString *)messageID;
-(void)setMessageID:(NSString *)arg1 ;
-(unsigned long long)childIdentifier;
-(BOOL)childIdentifierIsRemotelyDefined;
@end

