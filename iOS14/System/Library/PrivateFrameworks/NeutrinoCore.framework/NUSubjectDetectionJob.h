/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NURenderJob.h>

@class NSArray, NUSubjectDetectionRequest;

@interface NUSubjectDetectionJob : NURenderJob {

	NSArray* _observations;

}

@property (nonatomic,readonly) NUSubjectDetectionRequest * subjectDetectionRequest; 
@property (nonatomic,copy) NSArray * observations;                                               //@synthesize observations=_observations - In the implementation block
-(BOOL)render:(out id*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(id)result;
-(void)cleanUp;
-(void)setObservations:(NSArray *)arg1 ;
-(NSArray *)observations;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)scalePolicy;
-(id)initWithSubjectDetectionRequest:(id)arg1 ;
-(NUSubjectDetectionRequest *)subjectDetectionRequest;
-(id)subjectsInImage:(id)arg1 error:(out id*)arg2 ;
@end

