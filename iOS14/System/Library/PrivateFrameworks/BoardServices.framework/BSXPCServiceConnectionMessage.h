/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BaseBoard/BSXPCCoder.h>
#import <libobjc.A.dylib/BSXPCServiceConnectionMessage.h>

@protocol BSXPCServiceConnectionMessage <BSXPCEncoding,BSXPCDecoding>
@required
-(BOOL)sendSynchronously;
-(BOOL)expectsReply;
-(id)createReply;
-(BOOL)send;

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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sendSynchronouslyWithError:(out id*)arg1 ;
-(BOOL)sendSynchronously;
-(BOOL)expectsReply;
-(id)initWithMessage:(id)arg1 ;
-(void)invalidate;
-(id)createReply;
-(BOOL)send;
@end

