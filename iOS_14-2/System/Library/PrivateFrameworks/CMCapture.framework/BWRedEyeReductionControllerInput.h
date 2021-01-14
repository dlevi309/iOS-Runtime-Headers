/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorInput.h>

@protocol BWRedEyeReductionControllerInputDelegate, BWStillImageProcessorControllerDelegate;
@class NSArray;

@interface BWRedEyeReductionControllerInput : BWStillImageProcessorInput {

	id<BWRedEyeReductionControllerInputDelegate> _inputDelegate;
	id<BWStillImageProcessorControllerDelegate> _processorControllerDelegate;
	opaqueCMSampleBufferRef _primaryImage;
	opaqueCMSampleBufferRef _auxImage;
	NSArray* _faceObservations;
	BOOL _requiresSensorInterfaceRawPropagation;

}

@property (nonatomic,retain) id<BWRedEyeReductionControllerInputDelegate> inputDelegate;                           //@synthesize inputDelegate=_inputDelegate - In the implementation block
@property (nonatomic,retain) id<BWStillImageProcessorControllerDelegate> processorControllerDelegate;              //@synthesize processorControllerDelegate=_processorControllerDelegate - In the implementation block
@property (assign,nonatomic) BOOL requiresSensorInterfaceRawPropagation;                                           //@synthesize requiresSensorInterfaceRawPropagation=_requiresSensorInterfaceRawPropagation - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef primaryImage;                                               //@synthesize primaryImage=_primaryImage - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef auxImage;                                                   //@synthesize auxImage=_auxImage - In the implementation block
@property (nonatomic,readonly) NSArray * faceObservations;                                                         //@synthesize faceObservations=_faceObservations - In the implementation block
+(BOOL)requiresInferencesFromFrame:(opaqueCMSampleBufferRef)arg1 ;
-(id<BWRedEyeReductionControllerInputDelegate>)inputDelegate;
-(void)setInputDelegate:(id<BWRedEyeReductionControllerInputDelegate>)arg1 ;
-(opaqueCMSampleBufferRef)auxImage;
-(NSArray *)faceObservations;
-(void)addFrame:(opaqueCMSampleBufferRef)arg1 faceObservations:(id)arg2 ;
-(BOOL)requiresSensorInterfaceRawPropagation;
-(id<BWStillImageProcessorControllerDelegate>)processorControllerDelegate;
-(void)setProcessorControllerDelegate:(id<BWStillImageProcessorControllerDelegate>)arg1 ;
-(void)setRequiresSensorInterfaceRawPropagation:(BOOL)arg1 ;
-(opaqueCMSampleBufferRef)primaryImage;
-(void)dealloc;
@end

