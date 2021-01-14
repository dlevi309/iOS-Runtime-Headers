/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSourceNode.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURL, NSString, NSDictionary;

@interface NUCGImageSourceNode : NUSourceNode {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _loaded;
	NSURL* _URL;
	NSString* _UTI;
	CGImageSourceRef _cgImageSource;
	NSDictionary* _cgImageProperties;
	long long _orientation;
	CGColorSpaceRef _colorSpace;
	long long _alphaInfo;
	long long _componentInfo;
	NSDictionary* _auxiliaryImagesProperties;
	SCD_Struct_NU7 _size;

}

@property (readonly) NSURL * URL;                                           //@synthesize URL=_URL - In the implementation block
@property (readonly) NSString * UTI;                                        //@synthesize UTI=_UTI - In the implementation block
@property (assign) BOOL loaded;                                             //@synthesize loaded=_loaded - In the implementation block
@property (nonatomic,retain) CGImageSourceRef cgImageSource;                //@synthesize cgImageSource=_cgImageSource - In the implementation block
@property (nonatomic,retain) NSDictionary * cgImageProperties;              //@synthesize cgImageProperties=_cgImageProperties - In the implementation block
@property (assign) SCD_Struct_NU7 size;                                     //@synthesize size=_size - In the implementation block
@property (assign) long long orientation;                                   //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) CGColorSpaceRef colorSpace;                    //@synthesize colorSpace=_colorSpace - In the implementation block
@property (assign) long long alphaInfo;                                     //@synthesize alphaInfo=_alphaInfo - In the implementation block
@property (assign) long long componentInfo;                                 //@synthesize componentInfo=_componentInfo - In the implementation block
@property (retain) NSDictionary * auxiliaryImagesProperties;                //@synthesize auxiliaryImagesProperties=_auxiliaryImagesProperties - In the implementation block
+(BOOL)isFusedOvercaptureFromCGImageProperties:(id)arg1 ;
-(id)debugQuickLookObject;
-(BOOL)load:(out id*)arg1 ;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(id)initWithSettings:(id)arg1 ;
-(NSDictionary *)cgImageProperties;
-(BOOL)loaded;
-(SCD_Struct_NU7)size;
-(void)setAlphaInfo:(long long)arg1 ;
-(void)setSize:(SCD_Struct_NU7)arg1 ;
-(BOOL)_load:(out id*)arg1 ;
-(void)setLoaded:(BOOL)arg1 ;
-(NSURL *)URL;
-(long long)orientation;
-(NSString *)UTI;
-(void)_init;
-(void)setCgImageProperties:(NSDictionary *)arg1 ;
-(void)dealloc;
-(void)setOrientation:(long long)arg1 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 identifier:(id)arg2 ;
-(id)initWithURL:(id)arg1 UTI:(id)arg2 identifier:(id)arg3 ;
-(id)initWithURL:(id)arg1 UTI:(id)arg2 settings:(id)arg3 ;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(void)_addDefaultFinalizedSourceOptions:(id)arg1 ;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3 ;
-(id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id*)arg5 ;
-(long long)sourceOrientation;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(SCD_Struct_NU7)pixelSizeWithSourceOptions:(id)arg1 ;
-(BOOL)supportsPipelineState:(id)arg1 error:(out id*)arg2 ;
-(long long)normalizeSubsampleFactor:(long long)arg1 ;
-(id)auxiliaryImagePropertiesForAuxImageType:(long long)arg1 ;
-(id)resolvedAuxiliaryImageNodeForPipelineState:(id)arg1 error:(out id*)arg2 ;
-(BOOL)_setGeometryFromProperties:(id)arg1 error:(out id*)arg2 ;
-(BOOL)_setAuxiliaryImagePropertiesFromCGProperties:(id)arg1 error:(out id*)arg2 ;
-(CGImageSourceRef)cgImageSource;
-(id)_finalizeSourceOptions:(id)arg1 subsampleFactor:(long long)arg2 ;
-(id)_evaluateRawImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(void)setCgImageSource:(CGImageSourceRef)arg1 ;
-(long long)alphaInfo;
-(long long)componentInfo;
-(void)setComponentInfo:(long long)arg1 ;
-(NSDictionary *)auxiliaryImagesProperties;
-(void)setAuxiliaryImagesProperties:(NSDictionary *)arg1 ;
@end
