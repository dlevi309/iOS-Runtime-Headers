/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addVertex:(CAMeshVertex)arg1 ;
-(void)setSubdivisionSteps:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

