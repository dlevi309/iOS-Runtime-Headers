/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@interface BWDepthRotatorNode : BWNode {

	opaqueCMFormatDescriptionRef _outputDepthFormatDescription;
	opaqueCMFormatDescriptionRef _outputDYFormatDescription;
	unsigned _inputDepthFormat;
	SCD_Struct_BW2 _inputDepthDimensions;
	int _rotationDegrees;
	long long _bufferSerialNumber;
	BOOL _separateDepthComponentsEnabled;
	BOOL _depthProvidedAsAttachedMedia;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(id)nodeSubType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)_setupDepthMediaConfigurationForOutput:(id)arg1 attachedMediaKey:(id)arg2 ;
-(void)_updateDepthOutputFormatRequirementsForInputFormat:(id)arg1 pixelFormat:(unsigned)arg2 attachedMediaKey:(id)arg3 ;
-(id)initWithRotationDegrees:(int)arg1 separateDepthComponentsEnabled:(BOOL)arg2 depthProvidedAsAttachedMedia:(BOOL)arg3 ;
-(void)dealloc;
@end

