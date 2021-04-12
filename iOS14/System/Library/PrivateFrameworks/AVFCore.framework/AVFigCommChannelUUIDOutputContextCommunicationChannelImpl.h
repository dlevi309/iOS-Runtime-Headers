/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputContextCommunicationChannelImpl.h>

@class AVOutputContextCommunicationChannel, NSString;

@interface AVFigCommChannelUUIDOutputContextCommunicationChannelImpl : NSObject <AVOutputContextCommunicationChannelImpl> {

	AVOutputContextCommunicationChannel* _parentChannel;
	OpaqueFigRoutingContextRef _routingContext;
	CFStringRef _commChannelUUID;

}

@property (nonatomic,readonly) CFStringRef commChannelUUID;                                       //@synthesize commChannelUUID=_commChannelUUID - In the implementation block
@property (__weak) AVOutputContextCommunicationChannel * parentCommunicationChannel;              //@synthesize parentChannel=_parentChannel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)sendData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setParentCommunicationChannel:(AVOutputContextCommunicationChannel *)arg1 ;
-(id)initWithRoutingContext:(OpaqueFigRoutingContextRef)arg1 commChannelUUID:(CFStringRef)arg2 ;
-(CFStringRef)commChannelUUID;
-(AVOutputContextCommunicationChannel *)parentCommunicationChannel;
-(void)dealloc;
@end

