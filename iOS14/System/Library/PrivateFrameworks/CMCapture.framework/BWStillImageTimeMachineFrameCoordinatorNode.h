/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSDictionary, NSMutableDictionary, BWStillImageCaptureSettings;

@interface BWStillImageTimeMachineFrameCoordinatorNode : BWNode {

	NSDictionary* _portTypeToInput;
	NSDictionary* _portTypeToOutput;
	NSMutableDictionary* _portTypeToFrameCounts;
	BWStillImageCaptureSettings* _currentResolvedStillImageCaptureSettings;

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
-(int)_setupStillImageCaptureStateWithResolvedStillImageCaptureSettings:(id)arg1 ;
-(void)_handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)_isCaptureComplete;
-(id)outputForPortType:(id)arg1 ;
-(id)inputForPortType:(id)arg1 ;
-(void)dealloc;
@end

