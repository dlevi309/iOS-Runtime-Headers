/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNRequest.h>

@class NSArray;

@interface VNAlignFaceRectangleRequest : VNRequest {

	NSArray* _inputFaceObservations;

}

@property (nonatomic,copy,readonly) NSArray * inputFaceObservations;              //@synthesize inputFaceObservations=_inputFaceObservations - In the implementation block
+(Class)configurationClass;
-(id)initWithFaceObservations:(id)arg1 ;
-(long long)dependencyProcessingOrdinality;
-(NSArray *)inputFaceObservations;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)initWithFaceObservations:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedProcessing:(id)arg3 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)newDefaultRequestInstance;
@end

