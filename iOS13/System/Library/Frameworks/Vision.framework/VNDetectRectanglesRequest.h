/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNImageIdealImageSizeProviding.h>

@class NSString, NSArray;

@interface VNDetectRectanglesRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (assign,nonatomic) unsigned long long requiredVersion; 
@property (assign,nonatomic) float minimumAspectRatio; 
@property (assign,nonatomic) float maximumAspectRatio; 
@property (assign,nonatomic) float quadratureTolerance; 
@property (assign,nonatomic) float minimumSize; 
@property (assign,nonatomic) float minimumConfidence; 
@property (assign,nonatomic) unsigned long long maximumObservations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * supportedImageSizeSet; 
+(Class)configurationClass;
-(float)minimumSize;
-(void)setMinimumSize:(float)arg1 ;
-(long long)dependencyProcessingOrdinality;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 ;
-(/*^block*/id)resultsSortingComparator;
-(NSArray *)supportedImageSizeSet;
-(void)setSortedResults:(id)arg1 ;
-(unsigned long long)requiredVersion;
-(void)setRequiredVersion:(unsigned long long)arg1 ;
-(float)minimumAspectRatio;
-(void)setMinimumAspectRatio:(float)arg1 ;
-(float)maximumAspectRatio;
-(void)setMaximumAspectRatio:(float)arg1 ;
-(float)quadratureTolerance;
-(void)setQuadratureTolerance:(float)arg1 ;
-(float)minimumConfidence;
-(void)setMinimumConfidence:(float)arg1 ;
-(unsigned long long)maximumObservations;
-(void)setMaximumObservations:(unsigned long long)arg1 ;
@end

