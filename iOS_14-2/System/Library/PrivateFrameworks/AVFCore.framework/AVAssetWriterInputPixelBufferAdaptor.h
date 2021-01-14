/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVWeakObservable.h>
#import <AVFCore/AVKeyPathDependencyHost.h>

@class AVAssetWriterInputPixelBufferAdaptorInternal, AVAssetWriterInput, NSDictionary, NSString;

@interface AVAssetWriterInputPixelBufferAdaptor : NSObject <AVWeakObservable, AVKeyPathDependencyHost> {

	AVAssetWriterInputPixelBufferAdaptorInternal* _internal;

}

@property (nonatomic,readonly) AVAssetWriterInput * assetWriterInput; 
@property (nonatomic,readonly) NSDictionary * sourcePixelBufferAttributes; 
@property (nonatomic,readonly) CVPixelBufferPoolRef pixelBufferPool; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assetWriterInputPixelBufferAdaptorWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2 ;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
-(id)init;
-(id)initWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2 ;
-(AVAssetWriterInput *)assetWriterInput;
-(BOOL)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_AV6)arg2 ;
-(NSString *)description;
-(NSDictionary *)sourcePixelBufferAttributes;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(void)dealloc;
@end

