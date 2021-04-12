/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLNamed.h>

@protocol MDLMeshBuffer;
@class MDLMaterial, MDLSubmeshTopology, NSString, NSArray;

@interface MDLSubmesh : NSObject <MDLNamed> {

	MDLMaterial* _material;
	id<MDLMeshBuffer> _indexBuffer;
	unsigned long long _indexCount;
	unsigned long long _indexType;
	long long _geometryType;
	MDLSubmeshTopology* _topology;
	NSString* _name;
	NSArray* _faceIndexing;

}

@property (nonatomic,retain) NSArray * faceIndexing;                              //@synthesize faceIndexing=_faceIndexing - In the implementation block
@property (nonatomic,retain,readonly) id<MDLMeshBuffer> indexBuffer;              //@synthesize indexBuffer=_indexBuffer - In the implementation block
@property (nonatomic,readonly) unsigned long long indexCount;                     //@synthesize indexCount=_indexCount - In the implementation block
@property (nonatomic,readonly) unsigned long long indexType;                      //@synthesize indexType=_indexType - In the implementation block
@property (nonatomic,readonly) long long geometryType;                            //@synthesize geometryType=_geometryType - In the implementation block
@property (nonatomic,retain) MDLMaterial * material;                              //@synthesize material=_material - In the implementation block
@property (nonatomic,retain) MDLSubmeshTopology * topology;                       //@synthesize topology=_topology - In the implementation block
@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)indexType;
-(long long)geometryType;
-(id)initWithName:(id)arg1 indexBuffer:(id)arg2 indexCount:(unsigned long long)arg3 indexType:(unsigned long long)arg4 geometryType:(long long)arg5 material:(id)arg6 topology:(id)arg7 ;
-(unsigned long long)indexCount;
-(id<MDLMeshBuffer>)indexBuffer;
-(MDLMaterial *)material;
-(id)initWithIndexBuffer:(id)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 geometryType:(long long)arg4 material:(id)arg5 ;
-(MDLSubmeshTopology *)topology;
-(id)initWithName:(id)arg1 indexBuffer:(id)arg2 indexCount:(unsigned long long)arg3 indexType:(unsigned long long)arg4 faceIndexing:(id)arg5 geometryType:(long long)arg6 material:(id)arg7 topology:(id)arg8 ;
-(id)initWithName:(id)arg1 indexBuffer:(id)arg2 indexCount:(unsigned long long)arg3 indexType:(unsigned long long)arg4 geometryType:(long long)arg5 material:(id)arg6 ;
-(id)initWithMDLSubmesh:(id)arg1 indexType:(unsigned long long)arg2 geometryType:(long long)arg3 ;
-(id)indexBufferAsIndexType:(unsigned long long)arg1 ;
-(void)debugPrintToFile:(_sFILE*)arg1 ;
-(MDLAABBRef)boundingBoxForMesh:(id)arg1 ;
-(void)setMaterial:(MDLMaterial *)arg1 ;
-(void)setTopology:(MDLSubmeshTopology *)arg1 ;
-(NSArray *)faceIndexing;
-(void)setFaceIndexing:(NSArray *)arg1 ;
@end

