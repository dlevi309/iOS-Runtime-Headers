/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWInferenceProviderStorage.h>

@class NSDictionary, NSMapTable, NSMutableSet;

@interface BWEspressoInferenceStorage : BWInferenceProviderStorage {

	NSDictionary* _bindingNameByRequirement;
	NSMapTable* _tensorByRequirement;
	NSMutableSet* _requirementsUsingTensors;
	NSMutableSet* _requirementsUsingPixelBuffers;

}
+(void)initialize;
-(void)clear;
-(SCD_Struct_BW31*)tensorForRequirement:(id)arg1 ;
-(id)initWithBindingNameByRequirement:(id)arg1 requirementsNeedingPixelBuffers:(id)arg2 requirementsNeedingPixelBufferPools:(id)arg3 requirementsNeedingTensors:(id)arg4 ;
-(id)bindingNameForRequirement:(id)arg1 ;
-(void)addTensorInUseRequirement:(id)arg1 ;
-(opaqueCMSampleBufferRef)newSampleBufferSatisfyingRequirement:(id)arg1 withPropagationSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(id)newMetadataDictionarySatisfyingRequirement:(id)arg1 ;
-(void)addPixelBufferInUseRequirement:(id)arg1 ;
-(void)dealloc;
@end

