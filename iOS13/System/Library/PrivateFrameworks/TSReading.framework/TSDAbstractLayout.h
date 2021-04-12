/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class NSMutableArray, TSDLayoutGeometry, NSArray;

@interface TSDAbstractLayout : NSObject {

	TSDAbstractLayout* mParent;
	NSMutableArray* mChildren;
	TSDLayoutGeometry* mGeometry;
	CGPoint mInterimPosition;
	BOOL mInterimPositionXSet;
	BOOL mInterimPositionYSet;
	CGPoint mLastInterimPosition;
	BOOL mLastInterimPositionXSet;
	BOOL mLastInterimPositionYSet;

}

@property (nonatomic,copy) TSDLayoutGeometry * geometry; 
@property (assign,nonatomic) TSDAbstractLayout * parent; 
@property (nonatomic,readonly) TSDAbstractLayout * root; 
@property (nonatomic,copy) NSArray * children; 
@property (assign,nonatomic) double interimPositionX; 
@property (assign,nonatomic) double interimPositionY; 
-(id)init;
-(void)dealloc;
-(void)addChild:(id)arg1 ;
-(TSDAbstractLayout *)parent;
-(void)setParent:(TSDAbstractLayout *)arg1 ;
-(CGAffineTransform)transform;
-(TSDAbstractLayout *)root;
-(CGRect)frame;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(TSDLayoutGeometry *)geometry;
-(void)setGeometry:(TSDLayoutGeometry *)arg1 ;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeFromParent;
-(CGAffineTransform)transformInRoot;
-(void)fixTransformFromInterimPosition;
-(void)addLayoutsToArray:(id)arg1 ;
-(CGRect)frameInRoot;
-(CGRect)rectInRoot:(CGRect)arg1 ;
-(BOOL)supportsInspectorPositioning;
-(id)geometryInRoot;
-(BOOL)supportsRotation;
-(CGRect)alignmentFrame;
-(CGPoint)alignmentFrameOriginForFixingInterimPosition;
-(id)geometryInRoot:(id)arg1 ;
-(BOOL)isRootLayoutForInspectorGeometry;
-(void)fixTransformFromLastInterimPosition;
-(id)additionalDependenciesForChildLayout:(id)arg1 ;
-(CGRect)frameForCulling;
-(void)replaceChild:(id)arg1 with:(id)arg2 ;
-(id)delegateConformingToProtocol:(id)arg1 forLayout:(id)arg2 ;
-(CGRect)rectInParent:(CGRect)arg1 ;
-(CGAffineTransform)transformInParent;
-(BOOL)providesGuidesForChildLayouts;
-(id)parentLayoutForProvidingGuides;
-(void)addLayoutsInRect:(CGRect)arg1 toArray:(id)arg2 deep:(BOOL)arg3 ;
-(CGRect)alignmentFrameInRoot;
-(void)p_fixTransformFromInterimPosition:(CGPoint)arg1 interimPositionXSet:(BOOL)arg2 interimPositionYSet:(BOOL)arg3 ;
-(void)offsetGeometryBy:(CGPoint)arg1 ;
-(id)geometryInParent;
-(id)geometryForTransforming;
-(id)visibleGeometries;
-(CGRect)frameInParent;
-(BOOL)isAxisAlignedUnflippedInRoot;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(void)insertChild:(id)arg1 below:(id)arg2 ;
-(void)insertChild:(id)arg1 above:(id)arg2 ;
-(void)exchangeChildAtIndex:(unsigned long long)arg1 withChildAtIndex:(unsigned long long)arg2 ;
-(void)addDescendentLayoutsToArray:(id)arg1 ;
-(CGRect)alignmentFrameForProvidingGuidesInRoot;
-(BOOL)shouldSnapWhileResizing;
-(double)interimPositionX;
-(void)setInterimPositionX:(double)arg1 ;
-(double)interimPositionY;
-(void)setInterimPositionY:(double)arg1 ;
-(CGPoint)positionInRootForAttachmentPositioner;
-(BOOL)supportsResize;
-(BOOL)supportsParentRotation;
-(BOOL)supportsFlipping;
-(BOOL)canRotateChildLayout:(id)arg1 ;
@end

