/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNImageBasedRequest.h>
#import <libobjc.A.dylib/VNImageIdealImageSizeProviding.h>

@class NSArray, NSString;

@interface VNRecognizeObjectsRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (assign) unsigned long long imageCropAndScaleOption; 
@property (assign) BOOL useImageAnalyzerScaling; 
@property (assign) float modelMinimumDetectionConfidence; 
@property (assign) float modelNonMaximumSuppressionThreshold; 
@property (readonly) NSArray * supportedImageSizeSet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(Class)configurationClass;
+(BOOL)supportsPrivateRevision:(unsigned long long)arg1 ;
+(id)knownObjectIdentifiersRecognizedByRequestRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(id)descriptionForPrivateRevision:(unsigned long long)arg1 ;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
-(BOOL)useImageAnalyzerScaling;
-(void)setUseImageAnalyzerScaling:(BOOL)arg1 ;
-(float)modelMinimumDetectionConfidence;
-(void)setModelMinimumDetectionConfidence:(float)arg1 ;
-(float)modelNonMaximumSuppressionThreshold;
-(void)setModelNonMaximumSuppressionThreshold:(float)arg1 ;
-(id)_recognizedObjectsIdentifiersAndReturnError:(id*)arg1 ;
-(id)_applicableDetectorAndGetConfigurationOptions:(id*)arg1 loadedInSession:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)imageCropAndScaleOption;
-(NSArray *)supportedImageSizeSet;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
-(/*^block*/id)resultsSortingComparator;
@end

