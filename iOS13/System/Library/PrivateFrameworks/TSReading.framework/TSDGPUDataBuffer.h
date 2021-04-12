/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDMTLDataBuffer.h>

@protocol MTLBuffer, MTLDevice;
@class NSMutableArray, NSMutableDictionary, TSDGLShader, NSArray, NSString;

@interface TSDGPUDataBuffer : NSObject <TSDMTLDataBuffer> {

	unsigned long long _currentBufferIndex;
	NSMutableArray* _arrayBuffers;
	NSMutableDictionary* _attributeToArrayBuffersDictionary;
	unsigned long long _elementArrayCount;
	unsigned short* _gLElementData;
	BOOL _gLElementDataBufferWasSetup;
	unsigned _gLElementDataBuffer;
	id<MTLBuffer> _metalElementData;
	CGSize _gLElementMeshSize;
	unsigned long long _gLElementQuadParticleCount;
	BOOL _conformsToMetalProtocol;
	id<MTLDevice> _device;
	unsigned _gLVertexArrayObjects[2];
	BOOL _isUpdatingRawDataBuffer;
	BOOL _didTeardown;
	BOOL _isEnabled;
	TSDGLShader* _enabledShader;
	BOOL _isDynamicallyBuffered;
	unsigned _drawMode;
	unsigned long long _vertexCount;
	NSArray* _vertexAttributes;
	unsigned long long _metalDrawMode;
	unsigned long long _positionAttributeIndex;
	unsigned long long _texCoordAttributeIndex;
	unsigned long long _centerAttributeIndex;

}

@property (assign,nonatomic) unsigned long long metalDrawMode;               //@synthesize metalDrawMode=_metalDrawMode - In the implementation block
@property (readonly) unsigned long long positionAttributeIndex;              //@synthesize positionAttributeIndex=_positionAttributeIndex - In the implementation block
@property (readonly) unsigned long long texCoordAttributeIndex;              //@synthesize texCoordAttributeIndex=_texCoordAttributeIndex - In the implementation block
@property (readonly) unsigned long long centerAttributeIndex;                //@synthesize centerAttributeIndex=_centerAttributeIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long vertexCount;                         //@synthesize vertexCount=_vertexCount - In the implementation block
@property (readonly) NSArray * vertexAttributes;                             //@synthesize vertexAttributes=_vertexAttributes - In the implementation block
@property (assign,nonatomic) unsigned drawMode;                              //@synthesize drawMode=_drawMode - In the implementation block
@property (readonly) BOOL isDynamicallyBuffered;                             //@synthesize isDynamicallyBuffered=_isDynamicallyBuffered - In the implementation block
+(id)newDataBufferWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 device:(id)arg4 ;
+(id)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 device:(id)arg4 ;
+(id)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 textureFlipped:(BOOL)arg4 device:(id)arg5 ;
+(id)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 textureFlipped:(BOOL)arg4 includeCenterAttribute:(BOOL)arg5 device:(id)arg6 ;
+(id)newDataBufferWithVertexAttributes:(id)arg1 meshSize:(CGSize)arg2 device:(id)arg3 ;
+(id)newDataBufferWithVertexAttributes:(id)arg1 quadParticleCount:(unsigned long long)arg2 device:(id)arg3 ;
+(id)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 device:(id)arg3 ;
+(id)newDataBufferWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 textureFlipped:(BOOL)arg3 device:(id)arg4 ;
-(void)dealloc;
-(NSString *)description;
-(void)teardown;
-(void)setDrawMode:(unsigned)arg1 ;
-(unsigned)drawMode;
-(unsigned long long)vertexCount;
-(NSArray *)vertexAttributes;
-(void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(SCD_Struct_TS78)GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setGLPoint2D:(SCD_Struct_TS78)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(SCD_Struct_TS79)GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setGLPoint3D:(SCD_Struct_TS79)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(SCD_Struct_TS80)GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setGLPoint4D:(SCD_Struct_TS80)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setGLushort:(unsigned short)arg1 forIndexElement:(unsigned long long)arg2 ;
-(id)initWithVertexRect:(CGRect)arg1 textureRect:(CGRect)arg2 meshSize:(CGSize)arg3 textureFlipped:(BOOL)arg4 includeCenterAttribute:(BOOL)arg5 ;
-(void)p_setupGLElementArrayBufferIfNecessary;
-(BOOL)p_setAttributeUpdateData:(SCD_Struct_TS81*)arg1 fromAttribute:(id)arg2 ;
-(unsigned short)GLushortForIndexElement:(unsigned long long)arg1 ;
-(void)drawWithShader:(id)arg1 ;
-(void)setDataForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 fromAttribute:(id)arg3 dataBuffer:(id)arg4 index:(unsigned long long)arg5 ;
-(id)vertexAttributeNamed:(id)arg1 ;
-(void)updateDataBufferAttributes:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)setMetalDrawMode:(unsigned long long)arg1 ;
-(void)p_setupElementArrayBufferIfNecessary;
-(id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 bufferCount:(unsigned long long)arg4 ;
-(unsigned long long)metalDrawMode;
-(void)enableGLElementArrayBuffer;
-(void)drawWithShader:(id)arg1 deactivateShaderWhenDone:(BOOL)arg2 advanceDynamicBuffer:(BOOL)arg3 ;
-(void)drawWithShader:(id)arg1 range:(NSRange)arg2 deactivateShaderWhenDone:(BOOL)arg3 advanceDynamicBuffer:(BOOL)arg4 ;
-(void)enableDataBufferWithShader:(id)arg1 ;
-(void)disableDataBufferWithShader:(id)arg1 ;
-(BOOL)isDynamicallyBuffered;
-(void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 range:(NSRange)arg3 advanceDynamicBuffer:(BOOL)arg4 ;
-(void)enableDataBuffer;
-(void)encodeWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)updateMetalDataBufferAttributes:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithVertexAttributes:(id)arg1 meshSize:(CGSize)arg2 bufferCount:(unsigned long long)arg3 ;
-(void)disableWithDevice:(id)arg1 ;
-(void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 advanceDynamicBuffer:(BOOL)arg3 ;
-(void)updateDataBufferAttributesWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)positionAttributeIndex;
-(unsigned long long)texCoordAttributeIndex;
-(unsigned long long)centerAttributeIndex;
-(void)disableGLElementArrayBuffer;
-(void)drawWithShader:(id)arg1 advanceDynamicBuffer:(BOOL)arg2 ;
-(void)drawWithShader:(id)arg1 deactivateShaderWhenDone:(BOOL)arg2 ;
-(void)drawWithShader:(id)arg1 range:(NSRange)arg2 deactivateShaderWhenDone:(BOOL)arg3 ;
@end

