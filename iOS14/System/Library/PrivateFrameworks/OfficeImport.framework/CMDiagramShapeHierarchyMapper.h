/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDiagramShapeMapper.h>

@class NSMutableDictionary;

@interface CMDiagramShapeHierarchyMapper : CMDiagramShapeMapper {

	NSMutableDictionary* mNodeInfoMap;
	BOOL mIsLayered;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5 ;
-(void)mapChildrenAt:(id)arg1 withState:(id)arg2 ;
-(CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setUpLayers;
-(void)copyInfoForNode:(id)arg1 depth:(int)arg2 ;
-(ODIHRangeVector*)mapRangesForNode:(id)arg1 ;
-(CGRect)mapLogicalBoundsWithXRanges:(const ODIHRangeVector*)arg1 ;
-(void)setAbsolutePositionOfNode:(id)arg1 parentRow:(int)arg2 parentXOffset:(float)arg3 index:(unsigned long long)arg4 ;
-(void)mapLayerNodes:(id)arg1 at:(id)arg2 scale:(float)arg3 offsetX:(float)arg4 offsetY:(float)arg5 withState:(id)arg6 ;
-(void)mapNode:(id)arg1 at:(id)arg2 scale:(float)arg3 offsetX:(float)arg4 offsetY:(float)arg5 withState:(id)arg6 ;
-(id)infoForNode:(id)arg1 ;
-(CGRect)boundsForNode:(id)arg1 ;
@end

