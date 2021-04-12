/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

@class NSArray;


@protocol BWNoiseReductionAndFusionProcessorSemanticRenderingInput <NSObject>
@property (nonatomic,readonly) CVBufferRef skinMask; 
@property (nonatomic,readonly) CVBufferRef skyMask; 
@property (nonatomic,readonly) CVBufferRef lowResPersonMask; 
@property (nonatomic,readonly) NSArray * faceObservations; 
@required
-(CVBufferRef)skinMask;
-(CVBufferRef)skyMask;
-(id)initWithSkinMask:(CVBufferRef)arg1 skyMask:(CVBufferRef)arg2 lowResPersonMask:(CVBufferRef)arg3 faceObservations:(id)arg4;
-(CVBufferRef)lowResPersonMask;
-(NSArray *)faceObservations;

@end

