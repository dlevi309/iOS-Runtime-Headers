/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNRequest.h>

@class NSArray;

@interface VNAlignFaceRectangleRequest : VNRequest {

	NSArray* _inputFaceObservations;

}

@property (nonatomic,copy,readonly) NSArray * inputFaceObservations;              //@synthesize inputFaceObservations=_inputFaceObservations - In the implementation block
+(Class)configurationClass;
-(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)newDefaultRequestInstance;
-(NSArray *)inputFaceObservations;
-(id)initWithFaceObservations:(id)arg1 ;
-(id)initWithFaceObservations:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedProcessing:(id)arg3 ;
@end

