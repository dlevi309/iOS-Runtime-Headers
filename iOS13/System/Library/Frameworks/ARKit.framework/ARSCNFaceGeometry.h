/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <SceneKit/SCNGeometry.h>

@protocol MTLBuffer;
@interface ARSCNFaceGeometry : SCNGeometry {

	id<MTLBuffer> _vertexBuffer;
	id<MTLBuffer> _normalBuffer;
	id<MTLBuffer> _textureBuffer;

}

@property (nonatomic,retain) id<MTLBuffer> vertexBuffer;               //@synthesize vertexBuffer=_vertexBuffer - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> normalBuffer;               //@synthesize normalBuffer=_normalBuffer - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> textureBuffer;              //@synthesize textureBuffer=_textureBuffer - In the implementation block
+(id)faceGeometryWithDevice:(id)arg1 eyesFilled:(BOOL)arg2 mouthFilled:(BOOL)arg3 ;
+(id)faceGeometryWithDevice:(id)arg1 ;
+(id)faceGeometryWithDevice:(id)arg1 fillMesh:(BOOL)arg2 ;
-(id<MTLBuffer>)vertexBuffer;
-(void)setVertexBuffer:(id<MTLBuffer>)arg1 ;
-(void)setNormalBuffer:(id<MTLBuffer>)arg1 ;
-(void)setTextureBuffer:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)normalBuffer;
-(void)updateFromFaceGeometry:(id)arg1 ;
-(id<MTLBuffer>)textureBuffer;
@end

