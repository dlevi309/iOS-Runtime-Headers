/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/

#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/IDSSendXPCProtocol.h>

@class NSArray, IMRemoteObjectBroadcaster, Protocol, IMMessageContext, NSString;

@interface Broadcaster : NSProxy <IDSSendXPCProtocol> {

	NSArray* _targets;
	IMRemoteObjectBroadcaster* _parent;
	Protocol* _protocol;
	IMMessageContext* _messageContext;
	int _curXPCMessagePriority;
	/*^block*/id _completion;

}

@property (assign,nonatomic) int curXPCMessagePriority;              //@synthesize curXPCMessagePriority=_curXPCMessagePriority - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4 priority:(int)arg5 completion:(/*^block*/id)arg6 ;
-(id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4 priority:(int)arg5 ;
-(id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4 ;
-(int)curXPCMessagePriority;
-(void)sendXPCObject:(id)arg1 ;
-(void)setCurXPCMessagePriority:(int)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

