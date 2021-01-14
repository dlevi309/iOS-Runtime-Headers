/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorInput.h>

@protocol BWIntelligentDistortionCorrectionProcessorInputDelegate;
@class NSArray;

@interface BWIntelligentDistortionCorrectionProcessorInput : BWStillImageProcessorInput {

	BOOL _processIntelligentDistortionCorrection;
	BOOL _processGeometricDistortionCorrection;
	opaqueCMSampleBufferRef _image;
	BOOL _imageSet;
	unsigned long long _imageBufferType;
	CVBufferRef _lowResPersonSegmentationMask;
	BOOL _lowResPersonSegmentationMaskSet;
	NSArray* _faceDetectionObservations;
	BOOL _faceDetectionObservationsSet;
	id<BWIntelligentDistortionCorrectionProcessorInputDelegate> _delegate;
	BOOL _receivedAllInputs;

}

@property (assign,nonatomic) BOOL receivedAllInputs;                                                            //@synthesize receivedAllInputs=_receivedAllInputs - In the implementation block
@property (nonatomic,retain) id<BWIntelligentDistortionCorrectionProcessorInputDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL processIntelligentDistortionCorrection;                                       //@synthesize processIntelligentDistortionCorrection=_processIntelligentDistortionCorrection - In the implementation block
@property (assign,nonatomic) BOOL processGeometricDistortionCorrection;                                         //@synthesize processGeometricDistortionCorrection=_processGeometricDistortionCorrection - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef image; 
@property (assign,nonatomic) unsigned long long imageBufferType; 
@property (nonatomic,readonly) CVBufferRef lowResPersonSegmentationMask; 
@property (nonatomic,readonly) NSArray * faceDetectionObservations; 
-(BOOL)receivedAllInputs;
-(unsigned long long)imageBufferType;
-(CVBufferRef)lowResPersonSegmentationMask;
-(NSArray *)faceDetectionObservations;
-(BOOL)processGeometricDistortionCorrection;
-(void)setReceivedAllInputs:(BOOL)arg1 ;
-(id<BWIntelligentDistortionCorrectionProcessorInputDelegate>)delegate;
-(opaqueCMSampleBufferRef)image;
-(BOOL)processIntelligentDistortionCorrection;
-(void)setDelegate:(id<BWIntelligentDistortionCorrectionProcessorInputDelegate>)arg1 ;
-(id)description;
-(id)initWithSettings:(id)arg1 portType:(id)arg2 ;
-(void)addImage:(opaqueCMSampleBufferRef)arg1 ;
-(void)addLowResPersonSegmentationMask:(CVBufferRef)arg1 ;
-(void)addFaceDetectionObservations:(id)arg1 ;
-(void)setImageBufferType:(unsigned long long)arg1 ;
-(void)setProcessIntelligentDistortionCorrection:(BOOL)arg1 ;
-(void)setProcessGeometricDistortionCorrection:(BOOL)arg1 ;
-(void)dealloc;
@end

