/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSString, FigVideoDefringingProcessor, BWLimitedGMErrorLogger;

@interface BWVideoDefringingNode : BWNode {

	BOOL _isSlomo;
	BOOL _propagateSynchronizedSlaveFrame;
	NSString* _sensorIDString;
	NSString* _portType;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	NSString* _cameraToDefringe;
	FigVideoDefringingProcessor* _videoDefringingProcessor;
	BWLimitedGMErrorLogger* _limitedGMErrorLogger;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(id)nodeSubType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(id)initWithSensorIDString:(id)arg1 portType:(id)arg2 propagateSynchronizedSlaveFrame:(BOOL)arg3 isSlomo:(BOOL)arg4 ;
-(int)_loadAndConfigureVideoDefringingBundle;
-(id)_processorOptions;
-(void)dealloc;
@end

