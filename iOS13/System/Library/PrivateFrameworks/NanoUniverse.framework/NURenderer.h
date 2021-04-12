/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
*/

#import <NanoUniverse/NanoUniverse-Structs.h>
#import <libobjc.A.dylib/NURenderer.h>

@protocol NURenderer <NSObject>
@required
-(id)renderImage:(id)arg1 rect:(SCD_Struct_NU4)arg2 toDestination:(id)arg3 atPoint:(SCD_Struct_NU3)arg4 error:(out id*)arg5;

@end


@protocol OS_dispatch_queue;
@class NSObject, CIContext, NSString;

@interface NURenderer : NSObject <NURenderer> {

	NSObject*<OS_dispatch_queue> _queue;
	CIContext* _context;

}

@property (nonatomic,readonly) CIContext * context;                 //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGColorSpaceRef)workingColorSpace;
+(int)workingFormat;
+(id)_renderContextOptionsWithOptions:(id)arg1 nameSuffix:(id)arg2 ;
+(id)rendererWithGLContext:(id)arg1 options:(id)arg2 ;
+(id)rendererWithMetalDevice:(id)arg1 options:(id)arg2 ;
+(id)defaultRenderContextOptions;
+(BOOL)defaultUseHalfFloat;
+(BOOL)allowClampToAlpha;
-(id)init;
-(NSString *)description;
-(NSString *)name;
-(CIContext *)context;
-(id)initWithCIContext:(id)arg1 ;
-(id)imageForSurface:(id)arg1 options:(id)arg2 owner:(id)arg3 ;
-(id)renderDestinationForSurface:(id)arg1 owner:(id)arg2 ;
-(id)renderImage:(id)arg1 rect:(SCD_Struct_NU4)arg2 toDestination:(id)arg3 atPoint:(SCD_Struct_NU3)arg4 error:(out id*)arg5 ;
@end

