/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNStatefulRequest.h>

@class VNTrajectoryProcessor, NSArray;

@interface VNDetectTrajectoriesRequest : VNStatefulRequest {

	VNTrajectoryProcessor* _trajectoryProcessor;
	float _objectMaximumNormalizedRadius;

}

@property (readonly) long long trajectoryLength; 
@property (assign,nonatomic) float objectMinimumNormalizedRadius; 
@property (assign,nonatomic) float minimumObjectSize; 
@property (assign,nonatomic) float objectMaximumNormalizedRadius;              //@synthesize objectMaximumNormalizedRadius=_objectMaximumNormalizedRadius - In the implementation block
@property (assign,nonatomic) float maximumObjectSize; 
@property (copy,readonly) NSArray * results; 
+(Class)configurationClass;
+(BOOL)setsTimeRangeOnResults;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
-(id)newDefaultRequestInstance;
-(long long)trajectoryLength;
-(float)objectMinimumNormalizedRadius;
-(void)setObjectMinimumNormalizedRadius:(float)arg1 ;
-(float)objectMaximumNormalizedRadius;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(void)setObjectMaximumNormalizedRadius:(float)arg1 ;
-(id)initWithFrameAnalysisSpacing:(SCD_Struct_VN21)arg1 trajectoryLength:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setobjectMaximumNormalizedRadius:(float)arg1 ;
-(float)minimumObjectSize;
-(void)setMinimumObjectSize:(float)arg1 ;
-(float)maximumObjectSize;
-(void)setMaximumObjectSize:(float)arg1 ;
@end

