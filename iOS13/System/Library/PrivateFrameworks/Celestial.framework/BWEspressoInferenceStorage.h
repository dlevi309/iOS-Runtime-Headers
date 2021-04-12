/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWInferenceProviderStorage.h>

@class NSDictionary, NSMapTable, NSMutableSet;

@interface BWEspressoInferenceStorage : BWInferenceProviderStorage {

	NSDictionary* _bindingNameByRequirement;
	NSMapTable* _tensorByRequirement;
	NSMutableSet* _requirementsUsingTensors;
	NSMutableSet* _requirementsUsingPixelBuffers;

}
+(void)initialize;
-(void)dealloc;
-(void)clear;
-(id)newMetadataDictionarySatisfyingRequirement:(id)arg1 ;
-(opaqueCMSampleBufferRef)newSampleBufferSatisfyingRequirement:(id)arg1 withPropagationSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(SCD_Struct_BW39*)tensorForRequirement:(id)arg1 ;
-(id)initWithBindingNameByRequirement:(id)arg1 requirementsNeedingPixelBuffers:(id)arg2 requirementsNeedingPixelBufferPools:(id)arg3 requirementsNeedingTensors:(id)arg4 ;
-(id)bindingNameForRequirement:(id)arg1 ;
-(void)addTensorInUseRequirement:(id)arg1 ;
-(void)addPixelBufferInUseRequirement:(id)arg1 ;
@end

