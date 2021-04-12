/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNImageIdealImageSizeProviding.h>

@class NSArray, VNSceneObservation, VNClassificationCustomHierarchy, NSString;

@interface VNSceneClassificationRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (nonatomic,retain,readonly) VNSceneObservation * sceneObservation; 
@property (assign,nonatomic) unsigned long long maximumLeafObservations; 
@property (assign,nonatomic) unsigned long long maximumHierarchicalObservations; 
@property (nonatomic,copy,readonly) VNClassificationCustomHierarchy * customHierarchy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * supportedImageSizeSet; 
+(const SCD_Struct_VN2*)revisionAvailability;
+(Class)configurationClass;
+(id)_imageAnalyzerMultiDetectorForRevision:(unsigned long long)arg1 detectionLevel:(unsigned long long)arg2 processingDevice:(id)arg3 requestBackingStore:(unsigned long long)arg4 appliedDetectorOptions:(id*)arg5 error:(id*)arg6 ;
+(id)_sceneClassifierForRevision:(unsigned long long)arg1 requestBackingStore:(unsigned long long)arg2 appliedDetectorOptions:(id*)arg3 error:(id*)arg4 ;
+(id)_knownVNSceneClassifierLabelsForRevision:(unsigned long long)arg1 requestBackingStore:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)_knownVNImageAnalyzerMultiDetectorSceneClassificationObservationsForRevision:(unsigned long long)arg1 requestBackingStore:(unsigned long long)arg2 error:(id*)arg3 ;
+(const SCD_Struct_VN23*)dependentRequestCompatability;
+(id)knownSceneClassifications;
+(id)knownSceneClassificationsForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)setRevision:(unsigned long long)arg1 ;
-(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(id)_applicableDetectorAndOptions:(id*)arg1 error:(id*)arg2 ;
-(/*^block*/id)resultsSortingComparator;
-(NSArray *)supportedImageSizeSet;
-(VNSceneObservation *)sceneObservation;
-(void)setSceneObservation:(VNSceneObservation *)arg1 ;
-(VNClassificationCustomHierarchy *)customHierarchy;
-(unsigned long long)maximumLeafObservations;
-(void)setMaximumLeafObservations:(unsigned long long)arg1 ;
-(unsigned long long)maximumHierarchicalObservations;
-(void)setMaximumHierarchicalObservations:(unsigned long long)arg1 ;
-(id)initWithSceneObservation:(id)arg1 ;
-(id)initWithSceneObservation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_errorForUnimplementedSelector:(SEL)arg1 forRevision:(unsigned long long)arg2 ;
-(id)_classificationOperationPointsAndReturnError:(id*)arg1 ;
-(void)_setCustomHierarchy:(id)arg1 ;
-(BOOL)defineCustomHierarchy:(id)arg1 error:(id*)arg2 ;
-(id)defineCustomHierarchyWithRelationships:(id)arg1 error:(id*)arg2 ;
@end

