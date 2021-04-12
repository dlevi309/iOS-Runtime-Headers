/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@protocol MTLCommandQueue;
@class NSString, FigMetalContext, FigMetalHistogram, NSDictionary;

@interface BWMeteorHeadroomNode : BWNode {

	NSString* _lastCaptureRequestIdentifier;
	float _lastMeteorHeadroom;
	float _gainMapMainImageDownscalingFactor;
	int _headroomProcessingType;
	FigMetalContext* _metalContext;
	id<MTLCommandQueue> _metalCommandQueue;
	FigMetalHistogram* _histogram;
	NSDictionary* _meteorHeadroomParametersByPortType;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setGainMapMainImageDownscalingFactor:(float)arg1 ;
-(int)headroomProcessingType;
-(id)initWithNodeConfiguration:(id)arg1 sensorConfigurationsByPortType:(id)arg2 ;
-(void)setHeadroomProcessingType:(int)arg1 ;
-(float)gainMapMainImageDownscalingFactor;
-(void)dealloc;
@end

