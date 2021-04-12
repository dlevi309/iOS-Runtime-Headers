/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@interface _MTLIndirectDrawIndexedArguments : NSObject {

	unsigned long long _primitiveType;
	unsigned long long _indexCount;
	unsigned long long _indexType;
	void* _indexBufferVirtualAddress;
	unsigned long long _indexBufferOffset;
	unsigned long long _instanceCount;
	unsigned long long _baseVertex;
	unsigned long long _baseInstance;

}

@property (assign,nonatomic) unsigned long long primitiveType;                  //@synthesize primitiveType=_primitiveType - In the implementation block
@property (assign,nonatomic) unsigned long long indexCount;                     //@synthesize indexCount=_indexCount - In the implementation block
@property (assign,nonatomic) unsigned long long indexType;                      //@synthesize indexType=_indexType - In the implementation block
@property (assign,nonatomic) void* indexBufferVirtualAddress;                   //@synthesize indexBufferVirtualAddress=_indexBufferVirtualAddress - In the implementation block
@property (assign,nonatomic) unsigned long long indexBufferOffset;              //@synthesize indexBufferOffset=_indexBufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long instanceCount;                  //@synthesize instanceCount=_instanceCount - In the implementation block
@property (assign,nonatomic) unsigned long long baseVertex;                     //@synthesize baseVertex=_baseVertex - In the implementation block
@property (assign,nonatomic) unsigned long long baseInstance;                   //@synthesize baseInstance=_baseInstance - In the implementation block
-(unsigned long long)indexType;
-(void)setIndexType:(unsigned long long)arg1 ;
-(unsigned long long)primitiveType;
-(void)setInstanceCount:(unsigned long long)arg1 ;
-(unsigned long long)instanceCount;
-(unsigned long long)indexCount;
-(void)setIndexCount:(unsigned long long)arg1 ;
-(void)setPrimitiveType:(unsigned long long)arg1 ;
-(unsigned long long)baseInstance;
-(void)setBaseInstance:(unsigned long long)arg1 ;
-(void*)indexBufferVirtualAddress;
-(void)setIndexBufferVirtualAddress:(void*)arg1 ;
-(unsigned long long)indexBufferOffset;
-(void)setIndexBufferOffset:(unsigned long long)arg1 ;
-(unsigned long long)baseVertex;
-(void)setBaseVertex:(unsigned long long)arg1 ;
@end

