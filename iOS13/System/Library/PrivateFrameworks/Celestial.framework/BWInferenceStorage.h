/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

@class BWInferenceProviderStorage, NSArray, NSDictionary;


@protocol BWInferenceStorage <NSObject>
@property (nonatomic,readonly) BWInferenceProviderStorage * inferenceStorage; 
@property (nonatomic,copy,readonly) NSArray * requirementsNeedingPixelBufferPools; 
@property (nonatomic,copy,readonly) NSArray * requirementsNeedingPixelBuffers; 
@property (nonatomic,retain) NSDictionary * inferenceResults; 
@required
-(void)clear;
-(CVBufferRef)pixelBufferForRequirement:(id)arg1;
-(id)pixelBufferPoolForRequirement:(id)arg1;
-(void)setPixelBuffer:(CVBufferRef)arg1 forRequirement:(id)arg2;
-(void)setPixelBufferPool:(id)arg1 forRequirement:(id)arg2;
-(BWInferenceProviderStorage *)inferenceStorage;
-(NSArray *)requirementsNeedingPixelBufferPools;
-(NSArray *)requirementsNeedingPixelBuffers;
-(NSDictionary *)inferenceResults;
-(void)setInferenceResults:(id)arg1;

@end

