/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWInferenceProviderStorage.h>

@class NSMutableDictionary;

@interface BWVisionInferenceStorage : BWInferenceProviderStorage {

	NSMutableDictionary* _requestsByRequirement;

}
+(void)initialize;
-(void)dealloc;
-(id)initWithRequirementsNeedingPixelBuffers:(id)arg1 requirementsNeedingPixelBufferPools:(id)arg2 ;
-(id)newMetadataDictionarySatisfyingRequirement:(id)arg1 ;
-(opaqueCMSampleBufferRef)newSampleBufferSatisfyingRequirement:(id)arg1 withPropagationSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)setRequest:(id)arg1 forRequirement:(id)arg2 ;
-(id)requestForRequirement:(id)arg1 ;
@end

