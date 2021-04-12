/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWInferenceProviderStorage.h>

@class NSMutableDictionary;

@interface BWVisionInferenceStorage : BWInferenceProviderStorage {

	NSMutableDictionary* _requestsByRequirement;

}
+(void)initialize;
-(id)requestForRequirement:(id)arg1 ;
-(void)setRequest:(id)arg1 forRequirement:(id)arg2 ;
-(opaqueCMSampleBufferRef)newSampleBufferSatisfyingRequirement:(id)arg1 withPropagationSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(id)newMetadataDictionarySatisfyingRequirement:(id)arg1 ;
-(void)removeRequest:(id)arg1 ;
-(id)initWithRequirementsNeedingPixelBuffers:(id)arg1 requirementsNeedingPixelBufferPools:(id)arg2 ;
-(void)dealloc;
@end

