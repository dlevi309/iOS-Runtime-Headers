/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVFigRoutingContextCommunicationChannelManager.h>

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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) AVFigRoutingContextOutputContextImpl * parentOutputContextImpl;                              //@synthesize parentOutputContextImpl=_parentOutputContextImpl - In the implementation block
@property (nonatomic,readonly) AVOutputContextCommunicationChannel * outgoingCommunicationChannel; 
-(id)init;
-(void)dealloc;
-(AVOutputContextCommunicationChannel *)outgoingCommunicationChannel;
-(id)openCommunicationChannelWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)setParentOutputContextImpl:(AVFigRoutingContextOutputContextImpl *)arg1 ;
-(id)initWithRoutingContext:(OpaqueFigRoutingContextRef)arg1 ;
-(AVFigRoutingContextOutputContextImpl *)parentOutputContextImpl;
-(void)_didReceiveData:(CFDataRef)arg1 fromCommChannelUUID:(CFStringRef)arg2 ;
-(void)didCloseCommChannelUUID:(CFStringRef)arg1 ;
@end

