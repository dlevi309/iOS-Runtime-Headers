/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNRequest.h>

@class NSArray;

@interface VNGroupImagesByTimeAndContentRequest : VNRequest {

	NSArray* _inputImageprints;
	float _clusteringDistanceThreshold;

}

@property (nonatomic,copy) NSArray * inputImageprints;                       //@synthesize inputImageprints=_inputImageprints - In the implementation block
@property (assign,nonatomic) float clusteringDistanceThreshold;              //@synthesize clusteringDistanceThreshold=_clusteringDistanceThreshold - In the implementation block
+(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
-(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(BOOL)allowsCachingOfResults;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(BOOL)internalPerformInContext:(id)arg1 error:(id*)arg2 ;
-(/*^block*/id)resultsSortingComparator;
-(id)initWithImageprintObservations:(id)arg1 clusteringDistanceThreshold:(float)arg2 ;
-(id)initWithImageprintObservations:(id)arg1 clusteringDistanceThreshold:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSArray *)inputImageprints;
-(void)setInputImageprints:(NSArray *)arg1 ;
-(float)clusteringDistanceThreshold;
-(void)setClusteringDistanceThreshold:(float)arg1 ;
@end

