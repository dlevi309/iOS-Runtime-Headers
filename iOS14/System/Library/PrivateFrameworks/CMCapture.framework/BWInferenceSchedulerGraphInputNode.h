/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWInferenceExtractable.h>
#import <libobjc.A.dylib/BWInferenceJobProvider.h>

@class NSSet, NSString;

@interface BWInferenceSchedulerGraphInputNode : NSObject <BWInferenceExtractable, BWInferenceJobProvider> {

	NSSet* _videoPropagatedToStorage;

}

@property (nonatomic,readonly) id<BWInferenceExecutable> executable; 
@property (nonatomic,readonly) id<BWInferenceSubmittable> submittable; 
@property (nonatomic,readonly) id<BWInferenceExtractable> extractable; 
@property (nonatomic,readonly) id<BWInferencePropagatable> propagatable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)newStorage;
-(id<BWInferenceSubmittable>)submittable;
-(id<BWInferenceExtractable>)extractable;
-(id<BWInferencePropagatable>)propagatable;
-(int)extractFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingVideoRequirements:(id)arg2 metadataRequirements:(id)arg3 toStorage:(id)arg4 ;
-(int)extractFromStorage:(id)arg1 usingVideoRequirements:(id)arg2 metadataRequirements:(id)arg3 toSampleBuffer:(opaqueCMSampleBufferRef)arg4 ;
-(id<BWInferenceExecutable>)executable;
-(NSString *)description;
-(id)initWithVideoPropagatedToStorage:(id)arg1 ;
-(int)prepare;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

