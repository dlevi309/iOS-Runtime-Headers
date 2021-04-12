/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@interface BWDepthRotatorNode : BWNode {

	opaqueCMFormatDescriptionRef _outputDepthFormatDescription;
	opaqueCMFormatDescriptionRef _outputDYFormatDescription;
	unsigned _inputDepthFormat;
	SCD_Struct_BW19 _inputDepthDimensions;
	int _rotationDegrees;
	long long _bufferSerialNumber;
	BOOL _separateDepthComponentsEnabled;
	BOOL _depthProvidedAsAttachedMedia;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)_setupDepthMediaConfigurationForOutput:(id)arg1 attachedMediaKey:(id)arg2 ;
-(void)_updateDepthOutputFormatRequirementsForInputFormat:(id)arg1 pixelFormat:(unsigned)arg2 attachedMediaKey:(id)arg3 ;
-(id)initWithRotationDegrees:(int)arg1 separateDepthComponentsEnabled:(BOOL)arg2 depthProvidedAsAttachedMedia:(BOOL)arg3 ;
@end

