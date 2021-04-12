/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSDictionary, NSMutableDictionary, BWStillImageCaptureSettings, NSMutableArray;

@interface BWStillImageFrameCoordinatorNode : BWNode {

	NSDictionary* _portTypeToInput;
	NSDictionary* _portTypeToOutput;
	NSMutableDictionary* _portTypeToFrameCounters;
	BWStillImageCaptureSettings* _currentResolvedStillImageCaptureSettings;
	BOOL _holdMessagesUntilAllInputsAreLive;
	NSMutableArray* _queuedMessages;
	NSMutableArray* _inputsForQueuedMessages;

}
+(void)initialize;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(id)initWithPortTypes:(id)arg1 ;
-(void)_resetStillImageCaptureState;
-(void)_handleMessage:(id)arg1 fromInput:(id)arg2 ;
-(int)_setupStillImageCaptureStateWithResolvedStillImageCaptureSettings:(id)arg1 ;
-(void)_handleZeroShutterLagSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)_isCaptureComplete;
-(void)_deliverQueuedMessages;
-(id)outputForPortType:(id)arg1 ;
-(id)inputForPortType:(id)arg1 ;
-(void)dealloc;
@end

