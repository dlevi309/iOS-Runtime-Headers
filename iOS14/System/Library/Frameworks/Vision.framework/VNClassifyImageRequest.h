/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNImageIdealImageSizeProviding.h>

@class VNClassificationCustomHierarchy, NSArray, NSString;

@interface VNClassifyImageRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (assign,nonatomic) unsigned long long maximumLeafObservations; 
@property (assign,nonatomic) unsigned long long maximumHierarchicalObservations; 
@property (nonatomic,copy,readonly) VNClassificationCustomHierarchy * customHierarchy; 
@property (assign,nonatomic) unsigned long long imageCropAndScaleOption; 
@property (readonly) NSArray * supportedImageSizeSet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(const SCD_Struct_VN2*)revisionAvailability;
+(Class)configurationClass;
+(id)knownClassificationsForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)maximumLeafObservations;
-(void)setMaximumLeafObservations:(unsigned long long)arg1 ;
-(unsigned long long)maximumHierarchicalObservations;
-(void)setMaximumHierarchicalObservations:(unsigned long long)arg1 ;
-(void)setRevision:(unsigned long long)arg1 ;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(NSString *)description;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)imageCropAndScaleOption;
-(NSArray *)supportedImageSizeSet;
-(id)_applicableDetectorAndOptions:(id*)arg1 loadedInSession:(id)arg2 error:(id*)arg3 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
-(/*^block*/id)resultsSortingComparator;
-(VNClassificationCustomHierarchy *)customHierarchy;
-(void)_setCustomHierarchy:(id)arg1 ;
-(BOOL)defineCustomHierarchy:(id)arg1 error:(id*)arg2 ;
-(id)defineCustomHierarchyWithRelationships:(id)arg1 error:(id*)arg2 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
@end

