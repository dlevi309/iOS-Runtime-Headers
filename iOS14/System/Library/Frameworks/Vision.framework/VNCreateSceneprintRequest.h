/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNImageIdealImageSizeProviding.h>

@class NSArray, NSString;

@interface VNCreateSceneprintRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (assign,nonatomic) BOOL useCenterTileOnly; 
@property (assign,nonatomic) BOOL returnAllResults; 
@property (assign,nonatomic) unsigned long long imageCropAndScaleOption; 
@property (readonly) NSArray * supportedImageSizeSet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(const SCD_Struct_VN2*)revisionAvailability;
+(Class)configurationClass;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
+(BOOL)supportsPrivateRevision:(unsigned long long)arg1 ;
+(id)descriptionForPrivateRevision:(unsigned long long)arg1 ;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(NSString *)description;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
-(BOOL)hasCancellationHook;
-(BOOL)useCenterTileOnly;
-(void)setUseCenterTileOnly:(BOOL)arg1 ;
-(id)_detectorTypeForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)_applicableDetectorForRequestRevision:(unsigned long long)arg1 applicableDetectorOptions:(id*)arg2 loadedInSession:(id)arg3 error:(id*)arg4 ;
-(id)_applicableDetectorLoadedInSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)imageCropAndScaleOption;
-(NSArray *)supportedImageSizeSet;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
-(BOOL)returnAllResults;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(void)setReturnAllResults:(BOOL)arg1 ;
@end

