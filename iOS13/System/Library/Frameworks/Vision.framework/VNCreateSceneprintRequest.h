/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNImageIdealImageSizeProviding.h>

@class NSString, NSArray;

@interface VNCreateSceneprintRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (assign,nonatomic) BOOL useCenterTileOnly; 
@property (assign,nonatomic) BOOL returnAllResults; 
@property (assign,nonatomic) unsigned long long imageCropAndScaleOption; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * supportedImageSizeSet; 
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(const SCD_Struct_VN2*)revisionAvailability;
+(Class)configurationClass;
+(BOOL)supportsPrivateRevision:(unsigned long long)arg1 ;
+(id)descriptionForPrivateRevision:(unsigned long long)arg1 ;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
-(NSString *)description;
-(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(unsigned long long)imageCropAndScaleOption;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 ;
-(NSArray *)supportedImageSizeSet;
-(BOOL)hasCancellationHook;
-(BOOL)returnAllResults;
-(void)setReturnAllResults:(BOOL)arg1 ;
-(BOOL)useCenterTileOnly;
-(void)setUseCenterTileOnly:(BOOL)arg1 ;
-(id)_detectorTypeForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)_applicableDetectorForRequestRevision:(unsigned long long)arg1 applicableDetectorOptions:(id*)arg2 error:(id*)arg3 ;
-(id)_applicableDetectorAndReturnError:(id*)arg1 ;
@end

