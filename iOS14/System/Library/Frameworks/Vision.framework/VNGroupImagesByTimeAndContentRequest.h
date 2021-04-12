/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
+(BOOL)setsTimeRangeOnResults;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(NSArray *)inputImageprints;
-(void)setInputImageprints:(NSArray *)arg1 ;
-(id)initWithImageprintObservations:(id)arg1 clusteringDistanceThreshold:(float)arg2 ;
-(id)initWithImageprintObservations:(id)arg1 clusteringDistanceThreshold:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(float)clusteringDistanceThreshold;
-(void)setClusteringDistanceThreshold:(float)arg1 ;
-(BOOL)allowsCachingOfResults;
-(BOOL)internalPerformInContext:(id)arg1 error:(id*)arg2 ;
-(/*^block*/id)resultsSortingComparator;
-(void)applyConfigurationOfRequest:(id)arg1 ;
@end

