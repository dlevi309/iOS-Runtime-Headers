/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDGLDataBufferAccessor.h>

@class NSMutableArray, NSMutableDictionary, NSArray, NSString;

@interface TSDGLDataArrayBuffer : NSObject <TSDGLDataBufferAccessor> {

	NSMutableArray* _vertexAttributes;
	unsigned long long mVertexCount;
	unsigned long long _dataTypeSizeInBytes;
	unsigned _bufferUsage;
	BOOL _usesMetalBuffer;
	long long* mNeedsUpdateFirstIndex;
	long long* mNeedsUpdateLastIndex;
	char* mGLData;
	BOOL mGLDataBufferHasBeenSetup;
	unsigned* mGLDataBuffers;
	NSMutableDictionary* mAttributeOffsetsDictionary;
	NSArray* _metalDataBuffers;
	unsigned long long _bufferIndex;
	unsigned long long _GLDataBufferEntrySize;
	unsigned long long _bufferCount;
	unsigned long long _currentBufferIndex;

}

@property (nonatomic,readonly) BOOL hasUpdatedData; 
@property (getter=LDataBufferEntrySize,nonatomic,readonly) unsigned long long GLDataBufferEntrySize;              //@synthesize GLDataBufferEntrySize=_GLDataBufferEntrySize - In the implementation block
@property (nonatomic,readonly) unsigned long long bufferCount;                                                    //@synthesize bufferCount=_bufferCount - In the implementation block
@property (assign,nonatomic) unsigned long long currentBufferIndex;                                               //@synthesize currentBufferIndex=_currentBufferIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(char*)dataPointer;
-(unsigned long long)vertexCount;
-(unsigned long long)bufferCount;
-(unsigned long long)GLDataBufferEntrySize;
-(void)p_setupGLDataBufferIfNecessary;
-(BOOL)hasUpdatedData;
-(unsigned long long)currentBufferIndex;
-(void)addIndexRangeNeedsUpdate:(NSRange)arg1 ;
-(void)addIndexNeedsUpdate:(long long)arg1 ;
-(void)updateDataBufferIfNecessary;
-(void)setCurrentBufferIndex:(unsigned long long)arg1 ;
-(void)p_setupMetalDataBufferIfNecessaryWithDevice:(id)arg1 ;
-(unsigned long long)p_bufferOffsetOfAttribute:(id)arg1 atIndex:(unsigned long long)arg2 component:(unsigned long long)arg3 ;
-(void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(SCD_Struct_TS78)GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setGLPoint2D:(SCD_Struct_TS78)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(SCD_Struct_TS79)GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setGLPoint3D:(SCD_Struct_TS79)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(SCD_Struct_TS80)GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setGLPoint4D:(SCD_Struct_TS80)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 bufferCount:(unsigned long long)arg3 ;
-(void)addAllIndexesNeedUpdate;
-(void)enableVertexAttributeArrayBuffersWithShader:(id)arg1 ;
-(void)disableVertexAttributeArrayBuffersWithShader:(id)arg1 ;
-(void)swapGLDataBuffers;
-(char*)GLDataPointer;
-(void)enableArrayBufferWithDevice:(id)arg1 ;
-(void)encodeArrayBufferWithEncoder:(id)arg1 atIndex:(long long)arg2 ;
-(void)swapGPUDataBuffers;
@end

