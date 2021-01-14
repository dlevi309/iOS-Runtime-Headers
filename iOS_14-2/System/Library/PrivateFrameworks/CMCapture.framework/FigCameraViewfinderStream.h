/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class FigDelegateStorage, FigStateMachine;

@interface FigCameraViewfinderStream : NSObject {

	FigDelegateStorage* _delegateStorage;
	FigStateMachine* _stateMachine;
	OpaqueFigEndpointRef _endpoint;
	OpaqueFigEndpointStreamRef _stream;
	OpaqueFigVirtualDisplaySourceRef _displaySource;
	id _endpointsChangedNotificationToken;
	id _streamsChangedNotificationToken;

}
+(void)initialize;
-(id)init;
-(void)_setEndpoint:(OpaqueFigEndpointRef)arg1 ;
-(void)close;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)_handleStreamsChanged:(id)arg1 ;
-(int)enqueueVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleEndpointsChanged:(id)arg1 ;
-(void)_setupStateMachine;
-(void)openWithDestination:(id)arg1 ;
-(void)dealloc;
@end

