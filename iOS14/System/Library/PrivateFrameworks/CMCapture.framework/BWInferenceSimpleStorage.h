/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWInferenceStorage.h>

@class BWInferenceProviderStorage, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface BWInferenceSimpleStorage : NSObject <BWInferenceStorage> {

	NSMutableDictionary* _pixelBufferByRequirement;
	NSArray* _requirementsNeedingPixelBufferPools;
	NSMutableDictionary* _pixelBufferPoolByRequirement;

}

@property (nonatomic,readonly) BWInferenceProviderStorage * inferenceStorage; 
@property (nonatomic,copy,readonly) NSArray * requirementsNeedingPixelBufferPools;              //@synthesize requirementsNeedingPixelBufferPools=_requirementsNeedingPixelBufferPools - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requirementsNeedingPixelBuffers; 
@property (nonatomic,retain) NSDictionary * inferenceResults; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clear;
-(id)pixelBufferPoolForRequirement:(id)arg1 ;
-(BWInferenceProviderStorage *)inferenceStorage;
-(CVBufferRef)pixelBufferForRequirement:(id)arg1 ;
-(void)setPixelBufferPool:(id)arg1 forRequirement:(id)arg2 ;
-(void)setPixelBuffer:(CVBufferRef)arg1 forRequirement:(id)arg2 ;
-(NSArray *)requirementsNeedingPixelBufferPools;
-(NSArray *)requirementsNeedingPixelBuffers;
-(NSDictionary *)inferenceResults;
-(void)setInferenceResults:(NSDictionary *)arg1 ;
-(id)initWithOutputVideoRequirements:(id)arg1 ;
-(void)dealloc;
@end

