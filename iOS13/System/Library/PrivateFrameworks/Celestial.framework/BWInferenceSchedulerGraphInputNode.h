/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWInferenceExtractable.h>
#import <libobjc.A.dylib/BWInferenceJobProvider.h>

@class NSSet, NSString;

@interface BWInferenceSchedulerGraphInputNode : NSObject <BWInferenceExtractable, BWInferenceJobProvider> {

	NSSet* _videoPropagatedToStorage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<BWInferenceExecutable> executable; 
@property (nonatomic,readonly) id<BWInferenceSubmittable> submittable; 
@property (nonatomic,readonly) id<BWInferenceExtractable> extractable; 
@property (nonatomic,readonly) id<BWInferencePropagatable> propagatable; 
+(void)initialize;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)prepare;
-(id)newStorage;
-(id<BWInferenceExecutable>)executable;
-(id<BWInferenceSubmittable>)submittable;
-(id<BWInferenceExtractable>)extractable;
-(id<BWInferencePropagatable>)propagatable;
-(int)extractFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingVideoRequirements:(id)arg2 metadataRequirements:(id)arg3 toStorage:(id)arg4 ;
-(int)extractFromStorage:(id)arg1 usingVideoRequirements:(id)arg2 metadataRequirements:(id)arg3 toSampleBuffer:(opaqueCMSampleBufferRef)arg4 ;
-(id)initWithVideoPropagatedToStorage:(id)arg1 ;
@end

