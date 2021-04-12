/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NURenderJob.h>

@class NSArray, NUSubjectDetectionRequest;

@interface NUSubjectDetectionJob : NURenderJob {

	NSArray* _observations;

}

@property (nonatomic,readonly) NUSubjectDetectionRequest * subjectDetectionRequest; 
@property (nonatomic,copy) NSArray * observations;                                               //@synthesize observations=_observations - In the implementation block
-(id)result;
-(BOOL)render:(out id*)arg1 ;
-(void)setObservations:(NSArray *)arg1 ;
-(NSArray *)observations;
-(id)initWithRequest:(id)arg1 ;
-(void)cleanUp;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)scalePolicy;
-(id)initWithSubjectDetectionRequest:(id)arg1 ;
-(NUSubjectDetectionRequest *)subjectDetectionRequest;
-(id)subjectsInImage:(id)arg1 error:(out id*)arg2 ;
@end

