/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVFigRoutingContextCommunicationChannelManager.h>

@protocol OS_dispatch_queue;
@class AVFigRoutingContextOutputContextImpl, AVOutputContextCommunicationChannel, NSObject, AVWeakReference, NSString;

@interface AVFigCommChannelUUIDCommunicationChannelManager : NSObject <AVFigRoutingContextCommunicationChannelManager> {

	AVFigRoutingContextOutputContextImpl* _parentOutputContextImpl;
	OpaqueFigRoutingContextRef _routingContext;
	NSObject*<OS_dispatch_queue> _ivarAccessQueue;
	CFStringRef _outgoingCommChannelUUID;
	CFDictionaryRef _communicationChannelsForUUIDs;
	AVWeakReference* _weakObserver;

}

@property (__weak) AVFigRoutingContextOutputContextImpl * parentOutputContextImpl;                              //@synthesize parentOutputContextImpl=_parentOutputContextImpl - In the implementation block
@property (nonatomic,readonly) AVOutputContextCommunicationChannel * outgoingCommunicationChannel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)openCommunicationChannelWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)_didReceiveData:(CFDataRef)arg1 fromCommChannelUUID:(CFStringRef)arg2 ;
-(id)init;
-(AVFigRoutingContextOutputContextImpl *)parentOutputContextImpl;
-(void)setParentOutputContextImpl:(AVFigRoutingContextOutputContextImpl *)arg1 ;
-(id)initWithRoutingContext:(OpaqueFigRoutingContextRef)arg1 ;
-(void)didCloseCommChannelUUID:(CFStringRef)arg1 ;
-(AVOutputContextCommunicationChannel *)outgoingCommunicationChannel;
-(void)dealloc;
@end

