/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@class NSMutableDictionary, NSMapTable, NSThread, NUGLVertexArray, NUGLPipeline, NUGLObjectPool, EAGLContext, NSString, NSArray;

@interface NUGLContext : NSObject {

	NSMutableDictionary* _state;
	NSMapTable* _bindings;
	NSThread* _thread;
	Context* _gl;
	NUGLVertexArray* _unitQuad;
	NUGLPipeline* _textureDrawingPipeline;
	NUGLObjectPool* _sharedObjectPool;
	NUGLObjectPool* _privateObjectPool;

}

@property (nonatomic,readonly) NUGLObjectPool * sharedObjectPool;               //@synthesize sharedObjectPool=_sharedObjectPool - In the implementation block
@property (nonatomic,readonly) NUGLObjectPool * privateObjectPool;              //@synthesize privateObjectPool=_privateObjectPool - In the implementation block
@property (assign,nonatomic) long long virtualScreen; 
@property (nonatomic,readonly) EAGLContext * EAGLContext; 
@property (nonatomic,readonly) NSString * vendorString; 
@property (nonatomic,readonly) NSString * rendererString; 
@property (nonatomic,readonly) NSString * versionString; 
@property (nonatomic,readonly) NSArray * extensions; 
+(void)execute:(/*^block*/id)arg1 ;
+(id)errorString:(unsigned)arg1 ;
+(id)sharedContext;
+(id)sourceWithLineNumbersFromSourceArray:(id)arg1 ;
+(unsigned)_textureType:(id)arg1 ;
+(void)executeOnDevice:(id)arg1 block:(/*^block*/id)arg2 ;
+(void)deleteFramebuffer:(id)arg1 ;
+(void)deleteRenderbuffer:(id)arg1 ;
+(void)deleteTexture:(id)arg1 ;
+(void)deleteBuffer:(id)arg1 ;
+(void)deleteShader:(id)arg1 ;
+(void)splitSource:(id)arg1 intoLines:(id)arg2 ;
+(id)addLineNumbersToLines:(id)arg1 ;
+(void)deleteProgram:(id)arg1 ;
+(void)deletePipeline:(id)arg1 ;
+(void)deleteVertexArray:(id)arg1 ;
+(id)enumString:(unsigned)arg1 ;
-(void)execute:(/*^block*/id)arg1 ;
-(void)setViewport:(SCD_Struct_NU2)arg1 ;
-(void)finish;
-(NSString *)versionString;
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(NSArray *)extensions;
-(id)description;
-(BOOL)isCurrent;
-(void)dealloc;
-(EAGLContext *)EAGLContext;
-(NSString *)vendorString;
-(NSString *)rendererString;
-(id)_pushObject:(id)arg1 forState:(unsigned)arg2 ;
-(id)_currentObjectForState:(unsigned)arg1 ;
-(id)_popObject:(id)arg1 forState:(unsigned)arg2 ;
-(void)_bindObject:(id)arg1 target:(unsigned)arg2 ;
-(unsigned)_bindingForObject:(id)arg1 ;
-(id)_unbindObject:(id)arg1 target:(unsigned)arg2 ;
-(void)clearWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(void)drawTexture:(id)arg1 fromRect:(SCD_Struct_NU2)arg2 toRect:(SCD_Struct_NU2)arg3 ;
-(void)drawTexture:(id)arg1 inRect:(SCD_Struct_NU2)arg2 atPoint:(SCD_Struct_NU1)arg3 ;
-(id)simpleTextureDrawingPipeline;
-(id)simpleQuadVertexArray;
-(long long)virtualScreen;
-(void)setVirtualScreen:(long long)arg1 ;
-(void)generateFramebuffer:(id)arg1 ;
-(unsigned)_generateFramebuffer:(id)arg1 ;
-(void)_deleteFramebuffer:(unsigned)arg1 ;
-(void)bindFramebuffer:(id)arg1 ;
-(void)unbindFramebuffer:(id)arg1 ;
-(BOOL)checkFramebufferComplete:(id)arg1 ;
-(void)generateRenderbuffer:(id)arg1 ;
-(unsigned)_generateRenderbuffer:(id)arg1 ;
-(void)_deleteRenderbuffer:(unsigned)arg1 ;
-(void)bindRenderbuffer:(id)arg1 ;
-(void)unbindRenderbuffer:(id)arg1 ;
-(void)setRenderbufferStorageSize:(SCD_Struct_NU1)arg1 format:(id)arg2 ;
-(unsigned)_renderbufferFormatForPixelFormat:(id)arg1 ;
-(void)attachRenderbuffer:(id)arg1 toFramebuffer:(id)arg2 attachment:(unsigned)arg3 ;
-(void)detachRenderbuffer:(id)arg1 fromFramebuffer:(id)arg2 attachment:(unsigned)arg3 ;
-(SCD_Struct_NU1)renderbufferStorageSize;
-(id)renderbufferStorageFormat;
-(void)setRenderbufferStorageFromDrawable:(id)arg1 ;
-(void)presentRenderbuffer;
-(void)generateTexture:(id)arg1 ;
-(unsigned)_generateTexture:(id)arg1 ofType:(unsigned)arg2 ;
-(void)_deleteTexture:(unsigned)arg1 ;
-(void)bindTexture:(id)arg1 ;
-(void)unbindTexture:(id)arg1 ;
-(void)bindTexture:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)unbindTexture:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)bindSampler:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)unbindSampler:(id)arg1 atIndex:(unsigned)arg2 ;
-(unsigned)_activeTextureUnit;
-(void)_setActiveTextureUnit:(unsigned)arg1 ;
-(void)setTextureStorageSize:(SCD_Struct_NU1)arg1 format:(id)arg2 ;
-(void)setTextureStorageFromIOSurface:(id)arg1 ;
-(int)_internalTextureFormatForPixelFormat:(id)arg1 ;
-(int)_internalTextureFormatForPixelFormat:(id)arg1 format:(unsigned*)arg2 type:(unsigned*)arg3 ;
-(id)_pixelFormatForInternalFormat:(unsigned)arg1 ;
-(void)attachTexture:(id)arg1 toFramebuffer:(id)arg2 attachment:(unsigned)arg3 ;
-(void)detachTexture:(id)arg1 fromFramebuffer:(id)arg2 attachment:(unsigned)arg3 ;
-(void)updateTexture:(id)arg1 inRect:(SCD_Struct_NU2)arg2 fromBuffer:(id)arg3 atPoint:(SCD_Struct_NU1)arg4 ;
-(void)copyRect:(SCD_Struct_NU2)arg1 intoTexture:(id)arg2 atPoint:(SCD_Struct_NU1)arg3 ;
-(void)copyRect:(SCD_Struct_NU2)arg1 intoBuffer:(id)arg2 atPoint:(SCD_Struct_NU1)arg3 ;
-(int)_pixelAlignmentFromBuffer:(id)arg1 ;
-(int)_pixelRowLengthFromBuffer:(id)arg1 alignment:(int)arg2 ;
-(void)generateBuffer:(id)arg1 ;
-(unsigned)_generateBuffer:(id)arg1 ;
-(void)_deleteBuffer:(unsigned)arg1 ;
-(void)bindBuffer:(id)arg1 ;
-(void)unbindBuffer:(id)arg1 ;
-(void)allocateBufferStorage:(id)arg1 ;
-(void*)mapBuffer:(id)arg1 range:(NSRange)arg2 options:(unsigned)arg3 ;
-(void)unmapBuffer:(id)arg1 ;
-(void)generateShader:(id)arg1 ;
-(unsigned)_generateShader:(unsigned)arg1 pool:(id)arg2 ;
-(void)_deleteShader:(unsigned)arg1 ;
-(BOOL)compileShader:(id)arg1 error:(out id*)arg2 ;
-(void)generateProgram:(id)arg1 ;
-(unsigned)_generateProgram:(id)arg1 ;
-(void)_deleteProgram:(unsigned)arg1 ;
-(BOOL)linkProgram:(id)arg1 error:(out id*)arg2 ;
-(id)getProgramUniforms:(id)arg1 ;
-(id)getProgramAttributes:(id)arg1 ;
-(void)setProgramUniform:(id)arg1 name:(id)arg2 value:(id)arg3 ;
-(void)setProgramUniform:(id)arg1 location:(int)arg2 value:(id)arg3 ;
-(void)generatePipeline:(id)arg1 ;
-(unsigned)_generatePipeline:(id)arg1 ;
-(void)_deletePipeline:(unsigned)arg1 ;
-(void)bindPipeline:(id)arg1 ;
-(void)unbindPipeline:(id)arg1 ;
-(void)addProgram:(id)arg1 toPipeline:(id)arg2 ;
-(void)removeProgram:(id)arg1 fromPipeline:(id)arg2 ;
-(BOOL)validatePipeline:(id)arg1 error:(out id*)arg2 ;
-(void)generateVertexArray:(id)arg1 ;
-(unsigned)_generateVertexArray:(id)arg1 ;
-(void)_deleteVertexArray:(unsigned)arg1 ;
-(void)bindVertexArray:(id)arg1 ;
-(void)unbindVertexArray:(id)arg1 ;
-(void)enableVertexArrayAtIndex:(unsigned long long)arg1 ;
-(void)disableVertexArrayAtIndex:(unsigned long long)arg1 ;
-(void)setVertexArrayAttribute:(id)arg1 atIndex:(unsigned long long)arg2 offset:(int)arg3 stride:(int)arg4 ;
-(void)drawVertexArray:(unsigned)arg1 range:(NSRange)arg2 ;
-(void)purgeObjectPool:(id)arg1 ;
-(void)_purgeObjectPool:(id)arg1 ;
-(void)_purgeObjectsOfType:(unsigned)arg1 fromPool:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(NUGLObjectPool *)sharedObjectPool;
-(NUGLObjectPool *)privateObjectPool;
@end
