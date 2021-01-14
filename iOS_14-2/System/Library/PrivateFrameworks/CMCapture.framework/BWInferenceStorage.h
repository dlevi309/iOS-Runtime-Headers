/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

@class BWInferenceProviderStorage, NSArray, NSDictionary;


@protocol BWInferenceStorage <NSObject>
@property (nonatomic,readonly) BWInferenceProviderStorage * inferenceStorage; 
@property (nonatomic,copy,readonly) NSArray * requirementsNeedingPixelBufferPools; 
@property (nonatomic,copy,readonly) NSArray * requirementsNeedingPixelBuffers; 
@property (nonatomic,retain) NSDictionary * inferenceResults; 
@required
-(void)clear;
-(id)pixelBufferPoolForRequirement:(id)arg1;
-(BWInferenceProviderStorage *)inferenceStorage;
-(CVBufferRef)pixelBufferForRequirement:(id)arg1;
-(void)setPixelBufferPool:(id)arg1 forRequirement:(id)arg2;
-(void)setPixelBuffer:(CVBufferRef)arg1 forRequirement:(id)arg2;
-(NSArray *)requirementsNeedingPixelBufferPools;
-(NSArray *)requirementsNeedingPixelBuffers;
-(NSDictionary *)inferenceResults;
-(void)setInferenceResults:(id)arg1;

@end

