/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWInferenceStorage.h>

@class NSMutableDictionary, NSArray, NSString, BWInferenceProviderStorage, NSDictionary;

@interface BWInferenceSimpleStorage : NSObject <BWInferenceStorage> {

	NSMutableDictionary* _pixelBufferByRequirement;
	NSArray* _requirementsNeedingPixelBufferPools;
	NSMutableDictionary* _pixelBufferPoolByRequirement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BWInferenceProviderStorage * inferenceStorage; 
@property (nonatomic,copy,readonly) NSArray * requirementsNeedingPixelBufferPools;              //@synthesize requirementsNeedingPixelBufferPools=_requirementsNeedingPixelBufferPools - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requirementsNeedingPixelBuffers; 
@property (nonatomic,retain) NSDictionary * inferenceResults; 
-(void)dealloc;
-(void)clear;
-(CVBufferRef)pixelBufferForRequirement:(id)arg1 ;
-(id)pixelBufferPoolForRequirement:(id)arg1 ;
-(void)setPixelBuffer:(CVBufferRef)arg1 forRequirement:(id)arg2 ;
-(id)initWithOutputVideoRequirements:(id)arg1 ;
-(void)setPixelBufferPool:(id)arg1 forRequirement:(id)arg2 ;
-(BWInferenceProviderStorage *)inferenceStorage;
-(NSArray *)requirementsNeedingPixelBufferPools;
-(NSArray *)requirementsNeedingPixelBuffers;
-(NSDictionary *)inferenceResults;
-(void)setInferenceResults:(NSDictionary *)arg1 ;
@end

