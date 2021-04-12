/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
*/


#import <NanoUniverse/NanoUniverse-Structs.h>
@interface _NUGeometry : NSObject {

	NUVertexRef _vertices;
	unsigned short* _indices;
	int _vcount;
	int _icount;

}

@property (nonatomic,readonly) const NUVertexRef vertices;                 //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,readonly) const unsigned short* indices;              //@synthesize indices=_indices - In the implementation block
@property (nonatomic,readonly) int vcount;                                 //@synthesize vcount=_vcount - In the implementation block
@property (nonatomic,readonly) int icount;                                 //@synthesize icount=_icount - In the implementation block
-(void)dealloc;
-(const unsigned short*)indices;
-(const NUVertexRef)vertices;
-(int)addVertices:(const NUVertexRef)arg1 count:(int)arg2 ;
-(int)addIndices:(const unsigned short*)arg1 count:(int)arg2 vbase:(int)arg3 ;
-(int)vcount;
-(int)icount;
@end

