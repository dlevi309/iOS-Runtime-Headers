/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNMTLShadable : NSObject {

	id _vertexBuffers[31];
	id _fragmentBuffers[31];
	id _vertexTextures[31];
	id _fragmentTextures[31];
	id _vertexSamplers[16];
	id _fragmentSamplers[16];
	long long materialModificationCount;
	long long geometryModificationCount;

}

@property (assign,nonatomic) long long materialModificationCount; 
@property (assign,nonatomic) long long geometryModificationCount; 
-(void)dealloc;
-(long long)materialModificationCount;
-(long long)geometryModificationCount;
-(void)setMaterialModificationCount:(long long)arg1 ;
-(void)setGeometryModificationCount:(long long)arg1 ;
-(void)setResource:(id)arg1 ofType:(unsigned long long)arg2 atIndices:(SCD_Struct_SC51)arg3 ;
-(id)bufferAtIndices:(SCD_Struct_SC51)arg1 ;
-(id)textureAtIndices:(SCD_Struct_SC51)arg1 ;
-(id)samplerAtIndices:(SCD_Struct_SC51)arg1 ;
@end

