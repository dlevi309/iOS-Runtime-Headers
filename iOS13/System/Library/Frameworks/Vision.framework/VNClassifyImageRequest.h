/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>

@class VNClassificationCustomHierarchy;

@interface VNClassifyImageRequest : VNImageBasedRequest

@property (assign,nonatomic) unsigned long long maximumLeafObservations; 
@property (assign,nonatomic) unsigned long long maximumHierarchicalObservations; 
@property (nonatomic,copy,readonly) VNClassificationCustomHierarchy * customHierarchy; 
@property (assign,nonatomic) unsigned long long imageCropAndScaleOption; 
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(const SCD_Struct_VN2*)revisionAvailability;
+(id)knownClassificationsForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(Class)configurationClass;
-(id)description;
-(void)setRevision:(unsigned long long)arg1 ;
-(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(unsigned long long)imageCropAndScaleOption;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
-(id)_applicableDetectorAndOptions:(id*)arg1 error:(id*)arg2 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 ;
-(/*^block*/id)resultsSortingComparator;
-(id)supportedImageSizeSet;
-(VNClassificationCustomHierarchy *)customHierarchy;
-(unsigned long long)maximumLeafObservations;
-(void)setMaximumLeafObservations:(unsigned long long)arg1 ;
-(unsigned long long)maximumHierarchicalObservations;
-(void)setMaximumHierarchicalObservations:(unsigned long long)arg1 ;
-(void)_setCustomHierarchy:(id)arg1 ;
-(BOOL)defineCustomHierarchy:(id)arg1 error:(id*)arg2 ;
-(id)defineCustomHierarchyWithRelationships:(id)arg1 error:(id*)arg2 ;
@end

