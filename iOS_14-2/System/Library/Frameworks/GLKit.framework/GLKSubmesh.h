/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
*/


@class GLKMeshBuffer, GLKMesh, NSString;

@interface GLKSubmesh : NSObject {

	unsigned _type;
	unsigned _mode;
	int _elementCount;
	GLKMeshBuffer* _elementBuffer;
	GLKMesh* _mesh;
	NSString* _name;

}

@property (nonatomic,readonly) unsigned type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned mode;                              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) int elementCount;                           //@synthesize elementCount=_elementCount - In the implementation block
@property (nonatomic,readonly) GLKMeshBuffer * elementBuffer;              //@synthesize elementBuffer=_elementBuffer - In the implementation block
@property (nonatomic,__weak,readonly) GLKMesh * mesh;                      //@synthesize mesh=_mesh - In the implementation block
@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
-(GLKMesh *)mesh;
-(unsigned)mode;
-(NSString *)name;
-(int)elementCount;
-(unsigned)type;
-(GLKMeshBuffer *)elementBuffer;
-(id)initWithMesh:(id)arg1 submesh:(id)arg2 error:(id*)arg3 ;
@end

