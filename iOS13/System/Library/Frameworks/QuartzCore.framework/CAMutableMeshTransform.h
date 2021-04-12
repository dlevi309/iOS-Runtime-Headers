/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAMeshTransform.h>

@class NSString;

@interface CAMutableMeshTransform : CAMeshTransform

@property (copy) NSString * depthNormalization; 
@property (assign) int subdivisionSteps; 
@property (assign) BOOL replicatesEdges; 
+(id)meshTransform;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubdivisionSteps:(int)arg1 ;
-(void)addVertex:(CAMeshVertex)arg1 ;
-(void)addFace:(CAMeshFace)arg1 ;
-(NSString *)depthNormalization;
-(int)subdivisionSteps;
-(BOOL)replicatesEdges;
-(void)setDepthNormalization:(NSString *)arg1 ;
-(void)setReplicatesEdges:(BOOL)arg1 ;
-(void)replaceVertexAtIndex:(unsigned long long)arg1 withVertex:(CAMeshVertex)arg2 ;
-(void)removeVertexAtIndex:(unsigned long long)arg1 ;
-(void)replaceFaceAtIndex:(unsigned long long)arg1 withFace:(CAMeshFace)arg2 ;
-(void)removeFaceAtIndex:(unsigned long long)arg1 ;
@end

