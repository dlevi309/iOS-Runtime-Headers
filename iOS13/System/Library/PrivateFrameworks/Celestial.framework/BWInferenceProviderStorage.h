/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWInferenceStorage.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface BWInferenceProviderStorage : NSObject <BWInferenceStorage> {

	NSArray* _requirementsNeedingPixelBuffers;
	NSMutableDictionary* _pixelBufferByRequirement;
	NSArray* _requirementsNeedingPixelBufferPools;
	NSMutableDictionary* _pixelBufferPoolByRequirement;
	NSDictionary* _inferenceResults;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BWInferenceProviderStorage * inferenceStorage; 
@property (nonatomic,copy,readonly) NSArray * requirementsNeedingPixelBufferPools;              //@synthesize requirementsNeedingPixelBufferPools=_requirementsNeedingPixelBufferPools - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requirementsNeedingPixelBuffers;                  //@synthesize requirementsNeedingPixelBuffers=_requirementsNeedingPixelBuffers - In the implementation block
@property (nonatomic,retain) NSDictionary * inferenceResults;                                   //@synthesize inferenceResults=_inferenceResults - In the implementation block
+(void)initialize;
-(void)dealloc;
-(void)clear;
-(id)initWithRequirementsNeedingPixelBuffers:(id)arg1 requirementsNeedingPixelBufferPools:(id)arg2 ;
-(CVBufferRef)pixelBufferForRequirement:(id)arg1 ;
-(id)newMetadataDictionarySatisfyingRequirement:(id)arg1 ;
-(opaqueCMSampleBufferRef)newSampleBufferSatisfyingRequirement:(id)arg1 withPropagationSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(opaqueCMSampleBufferRef)newSampleBufferSatisfyingCloneRequirement:(id)arg1 ;
-(id)pixelBufferPoolForRequirement:(id)arg1 ;
-(void)setPixelBuffer:(CVBufferRef)arg1 forRequirement:(id)arg2 ;
-(void)setPixelBufferPool:(id)arg1 forRequirement:(id)arg2 ;
-(BWInferenceProviderStorage *)inferenceStorage;
-(NSArray *)requirementsNeedingPixelBufferPools;
-(NSArray *)requirementsNeedingPixelBuffers;
-(NSDictionary *)inferenceResults;
-(void)setInferenceResults:(NSDictionary *)arg1 ;
@end

