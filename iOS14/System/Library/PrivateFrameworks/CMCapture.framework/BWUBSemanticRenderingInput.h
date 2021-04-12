/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWNoiseReductionAndFusionProcessorSemanticRenderingInput.h>

@class NSArray, NSString;

@interface BWUBSemanticRenderingInput : NSObject <BWNoiseReductionAndFusionProcessorSemanticRenderingInput> {

	CVBufferRef _skinMask;
	CVBufferRef _lowResPersonMask;
	NSArray* _faceObservations;
	CVBufferRef _skyMask;

}

@property (nonatomic,readonly) CVBufferRef skinMask;                      //@synthesize skinMask=_skinMask - In the implementation block
@property (nonatomic,readonly) CVBufferRef skyMask;                       //@synthesize skyMask=_skyMask - In the implementation block
@property (nonatomic,readonly) CVBufferRef lowResPersonMask;              //@synthesize lowResPersonMask=_lowResPersonMask - In the implementation block
@property (nonatomic,readonly) NSArray * faceObservations;                //@synthesize faceObservations=_faceObservations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CVBufferRef)skinMask;
-(CVBufferRef)skyMask;
-(id)initWithSkinMask:(CVBufferRef)arg1 skyMask:(CVBufferRef)arg2 lowResPersonMask:(CVBufferRef)arg3 faceObservations:(id)arg4 ;
-(CVBufferRef)lowResPersonMask;
-(NSArray *)faceObservations;
-(void)dealloc;
@end

