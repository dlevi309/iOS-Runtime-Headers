/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSourceNode.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURL, AVAsset, NSArray, NSDictionary;

@interface NUVideoSourceNode : NUSourceNode {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _loaded;
	NSURL* _URL;
	AVAsset* _asset;
	SCD_Struct_NU6 _duration;
	SCD_Struct_NU7 _size;
	SCD_Struct_NU8 _cleanAperture;
	long long _orientation;
	NSArray* _metadata;
	NSDictionary* _colorProperties;
	SCD_Struct_NU6 _livePhotoKeyFrameTime;

}

@property (readonly) SCD_Struct_NU8 cleanAperture; 
@property (readonly) SCD_Struct_NU6 duration; 
@property (readonly) BOOL isHDR; 
-(BOOL)load:(out id*)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(BOOL)_load:(out id*)arg1 ;
-(id)asset:(out id*)arg1 ;
-(id)initWithURL:(id)arg1 identifier:(id)arg2 ;
-(BOOL)isHDR;
-(SCD_Struct_NU6)duration;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3 ;
-(id)sourceOptionsForSettings:(id)arg1 error:(out id*)arg2 ;
-(long long)sourceOrientation;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(SCD_Struct_NU7)pixelSizeWithSourceOptions:(id)arg1 ;
-(SCD_Struct_NU8)cleanAperture;
-(id)_evaluateVideo:(out id*)arg1 ;
-(id)_evaluateVideoCompositionWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(BOOL)supportsPipelineState:(id)arg1 error:(out id*)arg2 ;
-(id)_settingsForPipelineState:(id)arg1 ownedFrame:(BOOL)arg2 ;
-(id)_evaluateVideoPropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(BOOL)requiresVideoComposition;
-(BOOL)requiresAudioMix;
@end

