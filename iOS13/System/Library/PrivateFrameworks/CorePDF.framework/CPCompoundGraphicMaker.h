/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPChunk, CPCluster;

@interface CPCompoundGraphicMaker : NSObject <CPDisposable> {

	CPChunk* parentChunk;
	BOOL shapesAreVectorGraphics;
	unsigned shapeCount;
	id* shapes;
	double pageSpread;
	CPCluster* cluster;
	unsigned groupInfoCount;
	SCD_Struct_CP27* groupInfoArray;
	BOOL disposed;

}
+(BOOL)makeCompoundGraphicsInZonesOf:(id)arg1 ;
-(void)dealloc;
-(void)finalize;
-(void)dispose;
-(id)initWithGraphicsIn:(id)arg1 ofClass:(Class)arg2 ;
-(BOOL)makeCompoundGraphics;
-(void)coalesceShapeGroups;
-(void)makeCompoundGraphicFromShapesAtIndex:(unsigned)arg1 count:(unsigned)arg2 ;
-(void)addGroupInfoWithIndex:(unsigned)arg1 bounds:(CGRect)arg2 ;
-(BOOL)makeCompoundGraphicsFromShapeGroups;
-(BOOL)findClusterLevel;
-(BOOL)groupOverlappingGraphics;
@end

