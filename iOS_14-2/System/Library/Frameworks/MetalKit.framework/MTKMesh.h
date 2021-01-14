/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
*/


@class NSMutableArray, MDLVertexDescriptor, NSString, NSArray;

@interface MTKMesh : NSObject {

	NSMutableArray* _submeshes;
	NSMutableArray* _vertexBuffers;
	MDLVertexDescriptor* _vertexDescriptor;
	unsigned long long _vertexCount;
	NSString* _name;

}

@property (nonatomic,readonly) NSArray * vertexBuffers;                             //@synthesize vertexBuffers=_vertexBuffers - In the implementation block
@property (nonatomic,readonly) MDLVertexDescriptor * vertexDescriptor;              //@synthesize vertexDescriptor=_vertexDescriptor - In the implementation block
@property (nonatomic,readonly) NSArray * submeshes;                                 //@synthesize submeshes=_submeshes - In the implementation block
@property (nonatomic,readonly) unsigned long long vertexCount;                      //@synthesize vertexCount=_vertexCount - In the implementation block
@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
+(void)_createMeshesFromObject:(id)arg1 newMeshes:(id)arg2 sourceMeshes:(id)arg3 device:(id)arg4 error:(id*)arg5 ;
+(id)newMeshesFromAsset:(id)arg1 device:(id)arg2 sourceMeshes:(id*)arg3 error:(id*)arg4 ;
-(unsigned long long)vertexCount;
-(NSArray *)vertexBuffers;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(MDLVertexDescriptor *)vertexDescriptor;
-(NSArray *)submeshes;
-(id)initWithMesh:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
@end

