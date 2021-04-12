/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>
#import <libobjc.A.dylib/BWNodeBackPressureSource.h>

@protocol OS_dispatch_semaphore;
@class NSDictionary, FigStreamingStereoStitchingProcessor, NSMutableDictionary, NSObject, NSString;

@interface BWVideoStitcherNode : BWNode <BWNodeBackPressureSource> {

	NSDictionary* _sensorIDDictionaryByPortType;
	FigStreamingStereoStitchingProcessor* _stereoStitchingProcessor;
	NSMutableDictionary* _stereoStitchingOptions;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	NSObject*<OS_dispatch_semaphore> _emitSampleBufferSemaphore;
	Class _stitchingOutputClass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> emitSampleBufferSemaphore; 
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)_setupAttachedMediaConfigurationForOutput:(id)arg1 attachedMediaKey:(id)arg2 ;
-(void)_setupDepthMediaConfigurationForInput:(id)arg1 attachedMediaKey:(id)arg2 ;
-(int)_loadAndConfigureVideoStitchingBundle;
-(id)_processorOptions;
-(NSObject*<OS_dispatch_semaphore>)emitSampleBufferSemaphore;
-(void)setEmitSampleBufferSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)initWithSensorIDDictionaryByPortType:(id)arg1 expectDepth:(BOOL)arg2 ;
@end

