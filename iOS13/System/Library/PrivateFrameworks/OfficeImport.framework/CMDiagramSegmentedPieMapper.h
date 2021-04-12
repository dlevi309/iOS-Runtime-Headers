/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDiagramShapeMapper.h>

@interface CMDiagramSegmentedPieMapper : CMDiagramShapeMapper {

	BOOL mDrawArrows;

}
-(int)pointCount;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(void)setDrawArrows:(BOOL)arg1 ;
-(void)mapChildrenAt:(id)arg1 withState:(id)arg2 ;
-(CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_suggestedBoundsForNodeAtIndex:(unsigned long long)arg1 ;
@end

