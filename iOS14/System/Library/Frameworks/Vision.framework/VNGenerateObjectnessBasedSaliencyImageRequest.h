/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNImageIdealImageSizeProviding.h>

@class NSArray, NSString;

@interface VNGenerateObjectnessBasedSaliencyImageRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (readonly) NSArray * supportedImageSizeSet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(const SCD_Struct_VN2*)revisionAvailability;
+(Class)configurationClass;
+(BOOL)supportsPrivateRevision:(unsigned long long)arg1 ;
+(id)descriptionForPrivateRevision:(unsigned long long)arg1 ;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)_detectorLoadedInSession:(id)arg1 forRevision:(unsigned long long)arg2 getAppliedDetectorOptions:(id*)arg3 error:(id*)arg4 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(NSArray *)supportedImageSizeSet;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
-(id)_detectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)_objectnessObservationsForRevision:(unsigned long long)arg1 performedInContext:(id)arg2 error:(id*)arg3 ;
@end

