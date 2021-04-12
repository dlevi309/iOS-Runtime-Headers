/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOutputContextCommunicationChannelImpl.h>

@class AVOutputContextCommunicationChannel, NSString;

@interface AVFigCommChannelUUIDOutputContextCommunicationChannelImpl : NSObject <AVOutputContextCommunicationChannelImpl> {

	AVOutputContextCommunicationChannel* _parentChannel;
	OpaqueFigRoutingContextRef _routingContext;
	CFStringRef _commChannelUUID;

}

@property (nonatomic,readonly) CFStringRef commChannelUUID;                                       //@synthesize commChannelUUID=_commChannelUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) AVOutputContextCommunicationChannel * parentCommunicationChannel;              //@synthesize parentChannel=_parentChannel - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setParentCommunicationChannel:(AVOutputContextCommunicationChannel *)arg1 ;
-(void)sendData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithRoutingContext:(OpaqueFigRoutingContextRef)arg1 commChannelUUID:(CFStringRef)arg2 ;
-(AVOutputContextCommunicationChannel *)parentCommunicationChannel;
-(CFStringRef)commChannelUUID;
@end

