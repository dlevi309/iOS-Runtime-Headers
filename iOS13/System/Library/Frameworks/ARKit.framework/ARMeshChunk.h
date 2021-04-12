/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol MTLDevice, MTLBuffer;
#import <ARKit/ARKit-Structs.h>
@interface ARMeshChunk : NSObject {

	id<MTLDevice> _device;
	unsigned _numVertices;
	unsigned _numNormals;
	unsigned _numFaces;
	unsigned _numEdges;
	unsigned _numSemantics;
	id<MTLBuffer> _vertices;
	id<MTLBuffer> _normals;
	id<MTLBuffer> _faces;
	id<MTLBuffer> _edges;
	id<MTLBuffer> _semantics;
	double _timestamp;
	double _voxelSize;
	 _chunkID;
	vector<unsigned char, std::__1::allocator<unsigned char> > _semanticsVector;
	ChunkMesh* _chunkMesh;

}

@property (assign,nonatomic) ChunkMesh chunkMesh;                               //@synthesize chunkMesh=_chunkMesh - In the implementation block
@property (assign,nonatomic) vector<unsigned char semanticsVector;              //@synthesize semanticsVector=_semanticsVector - In the implementation block
@property (assign,nonatomic) double voxelSize;                                  //@synthesize voxelSize=_voxelSize - In the implementation block
@property (assign,nonatomic)  chunkID;                                          //@synthesize chunkID=_chunkID - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> vertices;                            //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> normals;                             //@synthesize normals=_normals - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> faces;                               //@synthesize faces=_faces - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> edges;                               //@synthesize edges=_edges - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> semantics;                           //@synthesize semantics=_semantics - In the implementation block
@property (assign,nonatomic) unsigned numVertices;                              //@synthesize numVertices=_numVertices - In the implementation block
@property (assign,nonatomic) unsigned numNormals;                               //@synthesize numNormals=_numNormals - In the implementation block
@property (assign,nonatomic) unsigned numFaces;                                 //@synthesize numFaces=_numFaces - In the implementation block
@property (assign,nonatomic) unsigned numEdges;                                 //@synthesize numEdges=_numEdges - In the implementation block
@property (assign,nonatomic) unsigned numSemantics;                             //@synthesize numSemantics=_numSemantics - In the implementation block
@property (assign,nonatomic) double timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
-(id)identifier;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setFaces:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)faces;
-(id<MTLBuffer>)vertices;
-(id<MTLBuffer>)edges;
-(void)setEdges:(id<MTLBuffer>)arg1 ;
-(long long)vertexCount;
-(long long)faceCount;
-(void)setVertices:(id<MTLBuffer>)arg1 ;
-(void)setSemantics:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)semantics;
-(unsigned)numVertices;
-(unsigned)numFaces;
-(void)setNumFaces:(unsigned)arg1 ;
-(id<MTLBuffer>)normals;
-(unsigned long long)chunkIdFromPosition;
-(void)setNumSemantics:(unsigned)arg1 ;
-(vector<unsigned char)semanticsVector;
-(void)convertToWorldSourceFromVisionSource:(id)arg1 relativeTransform:(SCD_Struct_AR1)arg2 ;
-(id)initWithChunk:(ChunkMesh*)arg1 device:(id)arg2 timestamp:(double)arg3 voxelSize:(double)arg4 ;
-(id)chunkIdentifier;
-(void)addSemantics:(const char*)arg1 count:(unsigned)arg2 size:(unsigned)arg3 ;
-(id)anchorForReferenceOriginTransform:(SCD_Struct_AR1)arg1 ;
-()chunkID;
-(void)setChunkID:;
-(void)setNormals:(id<MTLBuffer>)arg1 ;
-(void)setNumVertices:(unsigned)arg1 ;
-(unsigned)numNormals;
-(void)setNumNormals:(unsigned)arg1 ;
-(unsigned)numEdges;
-(void)setNumEdges:(unsigned)arg1 ;
-(unsigned)numSemantics;
-(ChunkMesh)chunkMesh;
-(void)setChunkMesh:(ChunkMesh)arg1 ;
-(void)setSemanticsVector:(vector<unsigned char)arg1 ;
-(double)voxelSize;
-(void)setVoxelSize:(double)arg1 ;
@end

