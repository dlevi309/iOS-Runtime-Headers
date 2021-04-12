/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWStillImageProcessorInput.h>

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
-(void)dealloc;
-(opaqueCMSampleBufferRef)primaryImage;
-(id<BWRedEyeReductionControllerInputDelegate>)inputDelegate;
-(void)setInputDelegate:(id<BWRedEyeReductionControllerInputDelegate>)arg1 ;
-(void)addFrame:(opaqueCMSampleBufferRef)arg1 faceObservations:(id)arg2 ;
-(NSArray *)faceObservations;
-(BOOL)requiresSensorInterfaceRawPropagation;
-(opaqueCMSampleBufferRef)auxImage;
-(id<BWStillImageProcessorControllerDelegate>)processorControllerDelegate;
-(void)setProcessorControllerDelegate:(id<BWStillImageProcessorControllerDelegate>)arg1 ;
-(void)setRequiresSensorInterfaceRawPropagation:(BOOL)arg1 ;
@end

