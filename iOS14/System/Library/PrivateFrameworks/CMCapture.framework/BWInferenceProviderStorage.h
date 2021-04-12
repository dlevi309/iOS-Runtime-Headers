/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWInferenceStorage.h>

@class NSArray, NSMutableDictionary, NSDictionary, NSString;

@interface BWInferenceProviderStorage : NSObject <BWInferenceStorage> {

	NSArray* _requirementsNeedingPixelBuffers;
	NSMutableDictionary* _pixelBufferByRequirement;
	NSArray* _requirementsNeedingPixelBufferPools;
	NSMutableDictionary* _pixelBufferPoolByRequirement;
	NSDictionary* _inferenceResults;

}

@property (nonatomic,readonly) BWInferenceProviderStorage * inferenceStorage; 
@property (nonatomic,copy,readonly) NSArray * requirementsNeedingPixelBufferPools;              //@synthesize requirementsNeedingPixelBufferPools=_requirementsNeedingPixelBufferPools - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requirementsNeedingPixelBuffers;                  //@synthesize requirementsNeedingPixelBuffers=_requirementsNeedingPixelBuffers - In the implementation block
@property (nonatomic,retain) NSDictionary * inferenceResults;                                   //@synthesize inferenceResults=_inferenceResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)clear;
-(opaqueCMSampleBufferRef)newSampleBufferSatisfyingCloneRequirement:(id)arg1 ;
-(opaqueCMSampleBufferRef)newSampleBufferSatisfyingRequirement:(id)arg1 withPropagationSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(id)newMetadataDictionarySatisfyingRequirement:(id)arg1 ;
-(id)initWithRequirementsNeedingPixelBuffers:(id)arg1 requirementsNeedingPixelBufferPools:(id)arg2 ;
-(id)pixelBufferPoolForRequirement:(id)arg1 ;
-(BWInferenceProviderStorage *)inferenceStorage;
-(CVBufferRef)pixelBufferForRequirement:(id)arg1 ;
-(void)setPixelBufferPool:(id)arg1 forRequirement:(id)arg2 ;
-(void)setPixelBuffer:(CVBufferRef)arg1 forRequirement:(id)arg2 ;
-(NSArray *)requirementsNeedingPixelBufferPools;
-(NSArray *)requirementsNeedingPixelBuffers;
-(NSDictionary *)inferenceResults;
-(void)setInferenceResults:(NSDictionary *)arg1 ;
-(void)dealloc;
@end

