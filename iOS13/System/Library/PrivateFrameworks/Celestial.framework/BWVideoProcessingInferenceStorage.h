/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/BWInferenceProviderStorage.h>

@class NSMutableDictionary;

@interface BWVideoProcessingInferenceStorage : BWInferenceProviderStorage {

	NSMutableDictionary* _metadataDictionaryForRequirement;

}
-(void)dealloc;
-(id)initWithRequirementsNeedingPixelBuffers:(id)arg1 requirementsNeedingPixelBufferPools:(id)arg2 ;
-(void)setDictionary:(id)arg1 forMetadataRequirement:(id)arg2 ;
-(id)newMetadataDictionarySatisfyingRequirement:(id)arg1 ;
@end

