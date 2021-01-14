/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSArray, NSMutableArray;

@interface BWStillImageMultiCameraDoserNode : BWNode {

	NSArray* _portTypes;
	long long _currentSettingsID;
	NSMutableArray* _inputIndicesForWhichDosingIsPerformed;
	NSMutableArray* _stashedObjectsByInputIndex;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(id)_outputForNodeInputIndex:(unsigned long long)arg1 ;
-(void)_emitStashedObjectsIfReady;
-(unsigned long long)outputIndexForPortType:(id)arg1 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(id)initWithPortTypes:(id)arg1 ;
-(void)_clearCaptureRequestState;
-(void)_configureCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 ;
-(void)dealloc;
@end

