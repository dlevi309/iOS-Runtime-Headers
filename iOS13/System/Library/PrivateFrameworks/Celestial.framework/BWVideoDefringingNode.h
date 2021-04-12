/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

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
-(void)dealloc;
-(id)nodeType;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(id)_processorOptions;
-(id)initWithSensorIDString:(id)arg1 portType:(id)arg2 propagateSynchronizedSlaveFrame:(BOOL)arg3 isSlomo:(BOOL)arg4 ;
-(int)_loadAndConfigureVideoDefringingBundle;
@end

