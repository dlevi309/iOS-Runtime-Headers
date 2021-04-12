/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

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
-(void)dealloc;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)_clearCaptureRequestState;
-(id)initWithBaseZoomFactors:(id)arg1 ;
-(void)_configureCaptureRequestStateWithStillImageSettings:(id)arg1 ;
-(void)_processWiderAndNarrowerFOVInput;
-(void)_emitBuffersAndErrorsToOutputs;
@end

