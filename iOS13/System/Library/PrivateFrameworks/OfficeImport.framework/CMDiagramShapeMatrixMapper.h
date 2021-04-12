/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDiagramShapeMapper.h>

@interface CMDiagramShapeMatrixMapper : CMDiagramShapeMapper {

	unsigned long long mColumnCount;
	unsigned long long mRowCount;
	float mRectWidth;
	float mRectHeight;
	BOOL mHasArrows;
	BOOL mIsSnake;
	BOOL mIsHorizontal;
	BOOL mIsLinear;

}
-(unsigned long long)columnCount;
-(id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5 ;
-(CGRect)circumscribedBounds;
-(void)mapChildrenAt:(id)arg1 withState:(id)arg2 ;
-(CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setColumnsAndRowsCount;
-(CGSize)gapSize;
-(double)gapRatio;
@end

