/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@interface _MTLIndirectDrawArguments : NSObject {

	unsigned long long _primitiveType;
	unsigned long long _vertexStart;
	unsigned long long _vertexCount;
	unsigned long long _instanceCount;
	unsigned long long _baseInstance;

}

@property (assign,nonatomic) unsigned long long primitiveType;              //@synthesize primitiveType=_primitiveType - In the implementation block
@property (assign,nonatomic) unsigned long long vertexStart;                //@synthesize vertexStart=_vertexStart - In the implementation block
@property (assign,nonatomic) unsigned long long vertexCount;                //@synthesize vertexCount=_vertexCount - In the implementation block
@property (assign,nonatomic) unsigned long long instanceCount;              //@synthesize instanceCount=_instanceCount - In the implementation block
@property (assign,nonatomic) unsigned long long baseInstance;               //@synthesize baseInstance=_baseInstance - In the implementation block
-(unsigned long long)vertexCount;
-(unsigned long long)instanceCount;
-(unsigned long long)primitiveType;
-(unsigned long long)vertexStart;
-(unsigned long long)baseInstance;
-(void)setPrimitiveType:(unsigned long long)arg1 ;
-(void)setVertexStart:(unsigned long long)arg1 ;
-(void)setVertexCount:(unsigned long long)arg1 ;
-(void)setBaseInstance:(unsigned long long)arg1 ;
-(void)setInstanceCount:(unsigned long long)arg1 ;
@end

