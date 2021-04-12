/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
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
-(void)dealloc;
-(void)close;
-(void)_setEndpoint:(OpaqueFigEndpointRef)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)_setupStateMachine;
-(void)openWithDestination:(id)arg1 ;
-(int)enqueueVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleEndpointsChanged:(id)arg1 ;
-(void)_handleStreamsChanged:(id)arg1 ;
@end

