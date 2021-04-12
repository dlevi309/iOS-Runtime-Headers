/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol BWStillImageProcessingStatusDelegate;
@class NSDictionary, NSMutableDictionary, BWStillImageCaptureSettings;

@interface BWStillImageFrameCoordinatorNode : BWNode {

	NSDictionary* _portTypeToInput;
	NSDictionary* _portTypeToOutput;
	NSMutableDictionary* _portTypeToFrameCounters;
	id<BWStillImageProcessingStatusDelegate> _stillImageProcessingDelegate;
	BWStillImageCaptureSettings* _currentResolvedStillImageCaptureSettings;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)_resetStillImageCaptureState;
-(int)_setupStillImageCaptureStateWithResolvedStillImageCaptureSettings:(id)arg1 ;
-(void)_handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)_isCaptureComplete;
-(id)initWithPortTypes:(id)arg1 ;
-(id)inputForPortType:(id)arg1 ;
-(id)outputForPortType:(id)arg1 ;
-(void)setStillImageProcessingDelegate:(id)arg1 ;
-(id)stillImageProcessingDelegate;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)_handleZeroShutterLagSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

