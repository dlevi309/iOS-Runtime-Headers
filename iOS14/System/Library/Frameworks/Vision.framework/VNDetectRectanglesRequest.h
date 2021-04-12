/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNImageIdealImageSizeProviding.h>

@class NSArray, NSString;

@interface VNDetectRectanglesRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (assign,nonatomic) unsigned long long requiredVersion; 
@property (assign,nonatomic) float minimumAspectRatio; 
@property (assign,nonatomic) float maximumAspectRatio; 
@property (assign,nonatomic) float quadratureTolerance; 
@property (assign,nonatomic) float minimumSize; 
@property (assign,nonatomic) float minimumConfidence; 
@property (assign,nonatomic) unsigned long long maximumObservations; 
@property (readonly) NSArray * supportedImageSizeSet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)configurationClass;
-(void)setMinimumConfidence:(float)arg1 ;
-(long long)dependencyProcessingOrdinality;
-(void)setMinimumSize:(float)arg1 ;
-(void)setRequiredVersion:(unsigned long long)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)setMinimumAspectRatio:(float)arg1 ;
-(void)setMaximumAspectRatio:(float)arg1 ;
-(float)minimumSize;
-(void)setQuadratureTolerance:(float)arg1 ;
-(float)minimumAspectRatio;
-(float)maximumAspectRatio;
-(float)quadratureTolerance;
-(void)setMaximumObservations:(unsigned long long)arg1 ;
-(float)minimumConfidence;
-(void)setSortedResults:(id)arg1 ;
-(unsigned long long)maximumObservations;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(NSArray *)supportedImageSizeSet;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
-(/*^block*/id)resultsSortingComparator;
-(unsigned long long)requiredVersion;
-(void)applyConfigurationOfRequest:(id)arg1 ;
@end

