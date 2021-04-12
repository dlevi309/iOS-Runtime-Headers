/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNMTLBuffer;

@interface SCNMTLMeshElement : NSObject {

	unsigned long long _primitiveType;
	long long _indexCount;
	unsigned long long _instanceCount;
	long long _sharedIndexBufferOffset;
	SCNMTLBuffer* _indexBuffer;
	unsigned long long _indexType;
	long long _effectiveIndexOffset;
	long long _effectiveIndexCount;

}

@property (assign,nonatomic) long long indexCount;                           //@synthesize indexCount=_indexCount - In the implementation block
@property (assign,nonatomic) unsigned long long instanceCount;               //@synthesize instanceCount=_instanceCount - In the implementation block
@property (assign,nonatomic) long long sharedIndexBufferOffset;              //@synthesize sharedIndexBufferOffset=_sharedIndexBufferOffset - In the implementation block
@property (nonatomic,retain) SCNMTLBuffer * indexBuffer;                     //@synthesize indexBuffer=_indexBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long indexType;                   //@synthesize indexType=_indexType - In the implementation block
@property (assign,nonatomic) unsigned long long primitiveType;               //@synthesize primitiveType=_primitiveType - In the implementation block
@property (nonatomic,readonly) long long primitiveCount; 
@property (nonatomic,readonly) long long effectiveIndexOffset;               //@synthesize effectiveIndexOffset=_effectiveIndexOffset - In the implementation block
@property (nonatomic,readonly) long long effectiveIndexCount;                //@synthesize effectiveIndexCount=_effectiveIndexCount - In the implementation block
-(long long)primitiveCount;
-(void)setIndexBuffer:(SCNMTLBuffer *)arg1 ;
-(unsigned long long)instanceCount;
-(unsigned long long)primitiveType;
-(long long)indexCount;
-(SCNMTLBuffer *)indexBuffer;
-(id)description;
-(void)setIndexType:(unsigned long long)arg1 ;
-(unsigned long long)indexType;
-(void)setPrimitiveType:(unsigned long long)arg1 ;
-(void)setIndexCount:(long long)arg1 ;
-(void)setInstanceCount:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setPrimitiveRange:(SCD_Struct_SC83)arg1 ;
-(void)setSharedIndexBufferOffset:(long long)arg1 ;
-(void)setupWithElement:(_C3DMeshElement*)arg1 ;
-(long long)effectiveIndexCount;
-(long long)effectiveIndexOffset;
-(long long)sharedIndexBufferOffset;
@end

