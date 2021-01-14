/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSArray, BWNodeError, BWNodeInput, BWNodeOutput;

@interface BWStillImageDualPhotoFacePropagatorNode : BWNode {

	long long _currentSettingsID;
	NSArray* _baseZoomFactors;
	opaqueCMSampleBufferRef _widerFOVBuffer;
	opaqueCMSampleBufferRef _narrowerFOVBuffer;
	BWNodeError* _widerFOVError;
	BWNodeError* _narrowerFOVError;
	BWNodeInput* _widerFOVInput;
	BWNodeInput* _narrowerFOVInput;
	BWNodeOutput* _widerFOVOutput;
	BWNodeOutput* _narrowerFOVOutput;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)_clearCaptureRequestState;
-(id)initWithBaseZoomFactors:(id)arg1 ;
-(void)_configureCaptureRequestStateWithStillImageSettings:(id)arg1 ;
-(void)_processWiderAndNarrowerFOVInput;
-(void)_emitBuffersAndErrorsToOutputs;
-(void)dealloc;
@end

