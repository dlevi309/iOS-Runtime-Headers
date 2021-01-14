/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNImageBasedRequest.h>

@class VNCoreMLModel;

@interface VNCoreMLRequest : VNImageBasedRequest {

	VNCoreMLModel* _model;

}

@property (nonatomic,readonly) VNCoreMLModel * model;                                 //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) unsigned long long imageCropAndScaleOption; 
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(Class)configurationClass;
-(VNCoreMLModel *)model;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)description;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)allowsCachingOfResults;
-(unsigned long long)imageCropAndScaleOption;
-(id)initWithModel:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)sequencedRequestPreviousObservationsKey;
-(id)newDefaultRequestInstance;
-(id)initWithModel:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
@end

