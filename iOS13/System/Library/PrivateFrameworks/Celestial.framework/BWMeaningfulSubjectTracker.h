/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class BWMeaningfulSubjectDetectionContext, NSMutableSet, NSMutableDictionary, BWPixelBufferPool, FigM2MController;

@interface BWMeaningfulSubjectTracker : NSObject {

	BOOL _msrScalingEnabled;
	BOOL _dumpEnabled;
	unsigned _numberOfFramesSinceDetection;
	unsigned _numberOfFramesBetweenDetections;
	CGRect _coordinateSpaceForDetectedObjects;
	BWMeaningfulSubjectDetectionContext* _detectionContext;
	NSMutableSet* _inactiveAssociationObjectIdentifiers;
	NSMutableSet* _inactiveContexts;
	NSMutableDictionary* _activeContextsByAssociationObjectIdentifier;
	BWPixelBufferPool* _detectionPool;
	BWPixelBufferPool* _intermediatePool;
	BWPixelBufferPool* _examplePool;
	BWPixelBufferPool* _trackingPool;
	void* _neuralEngineContext;
	FigM2MController* _surfaceAcceleratorController;
	SCD_Struct_BW80 _mostRecentDetectionResult;
	SCD_Struct_BW26 _mostRecentDetectionResultAsTrackingResult;
	SCD_Struct_BW26 _mostRecentTrackingResult;
	SCD_Struct_BW81 _associationParams;
	SCD_Struct_BW83 _mostRecentAssociationResult;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)terminate;
-(id)processPixelBuffer:(CVBufferRef)arg1 ;
-(int)_detectObjectsInPixelBuffer:(CVBufferRef)arg1 usingContext:(id)arg2 detectionPixelBuffer:(CVBufferRef)arg3 bgraInputPixelBuffer:(CVBufferRef)arg4 ;
-(void)_deactivateTrackingContext:(id)arg1 forObjectIdentifier:(id)arg2 ;
-(CVBufferRef)newTrackingIntermediatePixelBufferFromPixelBuffer:(CVBufferRef)arg1 estimatedMeanColor:(2*)arg2 ;
-(int)_initializeTrackingOfObject:(SCD_Struct_BW84*)arg1 inPixelBuffer:(CVBufferRef)arg2 usingContext:(id)arg3 examplePixelBuffer:(CVBufferRef)arg4 trackingPixelBuffer:(CVBufferRef)arg5 intermediatePixelBuffer:(CVBufferRef)arg6 estimatedMeanColor:(CVBufferRef)arg7 ;
-(int)_continueTrackingObject:(SCD_Struct_BW84*)arg1 inPixelBuffer:(CVBufferRef)arg2 usingContext:(id)arg3 examplePixelBuffer:(CVBufferRef)arg4 trackingPixelBuffer:(CVBufferRef)arg5 intermediatePixelBuffer:(CVBufferRef)arg6 estimatedMeanColor:(CVBufferRef)arg7 bgraInputPixelBuffer:(SCD_Struct_BW85*)arg8 ;
-(void)_prepareContext:(id)arg1 withExamplePixelBuffer:(CVBufferRef)arg2 trackingPixelBuffer:(CVBufferRef)arg3 ;
-(void)_translateRegionOfInterest:(TtTrkCropRoi*)arg1 inPixelBuffer:(CVBufferRef)arg2 toSourcePixelBuffer:(CVBufferRef)arg3 destinationPixelBuffer:(CVBufferRef)arg4 outSourceRect:(CGRect*)arg5 outDestinationRect:(CGRect*)arg6 ;
-(void)prepareWithInputPixelBufferAttributes:(id)arg1 ;
-(CVBufferRef)newInputPixelBufferFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

