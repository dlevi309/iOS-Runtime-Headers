/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
*/

#import <NeutrinoKit/NeutrinoKit-Structs.h>
#import <NeutrinoKit/NUGLLayer.h>

@protocol NUTextureImage;
@class NUGLPipeline, NUGLVertexArray, NUImageGeometry;

@interface NUImageLayer : NUGLLayer {

	NUGLPipeline* _pipeline;
	NUGLVertexArray* _vertices;
	BOOL _debugTextureDrawing;
	CGColorRef _debugColor;
	id<NUTextureImage> __image;
	NUImageGeometry* __geometry;

}

@property (retain) id<NUTextureImage> _image;                //@synthesize _image=__image - In the implementation block
@property (retain) NUImageGeometry * _geometry;              //@synthesize _geometry=__geometry - In the implementation block
@property (retain) id<NUTextureImage> image; 
@property (retain) NUImageGeometry * geometry; 
@property (retain) CGColorRef debugColor;                    //@synthesize debugColor=_debugColor - In the implementation block
+(id)vertexLayout;
+(id)fragmentShaderProgram;
+(id)vertexShaderProgram;
-(id)init;
-(void)reset:(id)arg1 ;
-(id<NUTextureImage>)image;
-(void)setImage:(id<NUTextureImage>)arg1 ;
-(id<NUTextureImage>)_image;
-(NUImageGeometry *)geometry;
-(void)setGeometry:(NUImageGeometry *)arg1 ;
-(NUImageGeometry *)_geometry;
-(void)draw:(id)arg1 ;
-(CGColorRef)debugColor;
-(void)clearBackground:(CGColorRef)arg1 context:(id)arg2 ;
-(void)drawImage:(id)arg1 region:(id)arg2 context:(id)arg3 ;
-(void)drawTexture:(id)arg1 inRect:(SCD_Struct_NU3)arg2 atPoint:(SCD_Struct_NU1)arg3 context:(id)arg4 ;
-(void)setDebugColor:(CGColorRef)arg1 ;
-(void)set_image:(id<NUTextureImage>)arg1 ;
-(void)set_geometry:(NUImageGeometry *)arg1 ;
@end

